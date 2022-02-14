
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef int uint32_t ;
struct TYPE_12__ {int curve; unsigned char* q; size_t qlen; } ;
struct TYPE_13__ {TYPE_1__ ec; } ;
struct TYPE_15__ {TYPE_2__ key; } ;
typedef TYPE_4__ br_x509_pkey ;
struct TYPE_16__ {TYPE_4__* (* get_pkey ) (TYPE_5__ const**,int *) ;} ;
typedef TYPE_5__ br_x509_class ;
struct TYPE_11__ {int ecdhe_curve; unsigned char* ecdhe_point; size_t ecdhe_point_len; unsigned char* pad; TYPE_3__* iec; int rng; TYPE_5__** x509ctx; } ;
struct TYPE_17__ {TYPE_10__ eng; } ;
typedef TYPE_6__ br_ssl_client_context ;
struct TYPE_14__ {int supported_curves; unsigned char* (* order ) (int,size_t*) ;size_t (* xoff ) (int,size_t*) ;int (* mulgen ) (unsigned char*,unsigned char*,size_t,int) ;int (* mul ) (unsigned char*,size_t,unsigned char*,size_t,int) ;int (* generator ) (int,size_t*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned char*,size_t) ;
 int FUNC_1 (TYPE_10__*,int,unsigned char*,size_t) ;
 int FUNC_2 (unsigned char*,unsigned char const*,size_t) ;
 TYPE_4__* FUNC_3 (TYPE_5__ const**,int *) ;
 unsigned char* FUNC_4 (int,size_t*) ;
 int FUNC_5 (int,size_t*) ;
 int FUNC_6 (unsigned char*,size_t,unsigned char*,size_t,int) ;
 size_t FUNC_7 (int,size_t*) ;
 int FUNC_8 (unsigned char*,unsigned char*,size_t,int) ;

__attribute__((used)) static int
FUNC_9(br_ssl_client_context *VAR_1, unsigned VAR_2, int VAR_3)
{
 int VAR_4;
 unsigned char VAR_5[66], VAR_6[133];
 const unsigned char *VAR_7, *VAR_8;
 size_t VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
 unsigned char VAR_14;

 if (VAR_2) {
  VAR_4 = VAR_1->eng.ecdhe_curve;
  VAR_8 = VAR_1->eng.ecdhe_point;
  VAR_11 = VAR_1->eng.ecdhe_point_len;
 } else {
  const br_x509_class **VAR_15;
  const br_x509_pkey *VAR_16;

  VAR_15 = VAR_1->eng.x509ctx;
  VAR_16 = (*VAR_15)->get_pkey(VAR_15, ((void*)0));
  VAR_4 = VAR_16->key.ec.curve;
  VAR_8 = VAR_16->key.ec.q;
  VAR_11 = VAR_16->key.ec.qlen;
 }
 if ((VAR_1->eng.iec->supported_curves & ((uint32_t)1 << VAR_4)) == 0) {
  return -VAR_0;
 }







 VAR_7 = VAR_1->eng.iec->order(VAR_4, &VAR_10);
 VAR_14 = 0xFF;
 while (VAR_14 >= VAR_7[0]) {
  VAR_14 >>= 1;
 }
 FUNC_0(&VAR_1->eng.rng, VAR_5, VAR_10);
 VAR_5[0] &= VAR_14;
 VAR_5[VAR_10 - 1] |= 0x01;





 VAR_1->eng.iec->generator(VAR_4, &VAR_9);
 if (VAR_9 != VAR_11) {
  return -VAR_0;
 }

 FUNC_2(VAR_6, VAR_8, VAR_9);
 if (!VAR_1->eng.iec->mul(VAR_6, VAR_9, VAR_5, VAR_10, VAR_4)) {
  return -VAR_0;
 }




 VAR_12 = VAR_1->eng.iec->xoff(VAR_4, &VAR_13);
 FUNC_1(&VAR_1->eng, VAR_3, VAR_6 + VAR_12, VAR_13);

 VAR_1->eng.iec->mulgen(VAR_6, VAR_5, VAR_10, VAR_4);
 FUNC_2(VAR_1->eng.pad, VAR_6, VAR_9);
 return (int)VAR_9;
}
