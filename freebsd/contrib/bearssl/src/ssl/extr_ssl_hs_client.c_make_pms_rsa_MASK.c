
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_9__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {unsigned char* n; size_t nlen; } ;
struct TYPE_10__ {TYPE_5__ rsa; } ;
struct TYPE_11__ {TYPE_1__ key; } ;
typedef TYPE_2__ br_x509_pkey ;
struct TYPE_12__ {TYPE_2__* (* get_pkey ) (TYPE_3__ const**,int *) ;} ;
typedef TYPE_3__ br_x509_class ;
struct TYPE_15__ {unsigned char* pad; int rng; int version_max; TYPE_3__** x509ctx; } ;
struct TYPE_13__ {TYPE_9__ eng; int (* irsapub ) (unsigned char*,size_t,TYPE_5__*) ;} ;
typedef TYPE_4__ br_ssl_client_context ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char*,int ) ;
 int FUNC_1 (int *,unsigned char*,int) ;
 int FUNC_2 (TYPE_9__*,int,unsigned char*,int) ;
 TYPE_2__* FUNC_3 (TYPE_3__ const**,int *) ;
 int FUNC_4 (unsigned char*,size_t,TYPE_5__*) ;

__attribute__((used)) static int
FUNC_5(br_ssl_client_context *VAR_2, int VAR_3)
{
 const br_x509_class **VAR_4;
 const br_x509_pkey *VAR_5;
 const unsigned char *VAR_6;
 unsigned char *VAR_7;
 size_t VAR_8, VAR_9;

 VAR_4 = VAR_2->eng.x509ctx;
 VAR_5 = (*VAR_4)->get_pkey(VAR_4, ((void*)0));




 VAR_6 = VAR_5->key.rsa.n;
 VAR_8 = VAR_5->key.rsa.nlen;
 while (VAR_8 > 0 && *VAR_6 == 0) {
  VAR_6 ++;
  VAR_8 --;
 }
 if (VAR_8 < 59) {
  return -VAR_1;
 }
 if (VAR_8 > sizeof VAR_2->eng.pad) {
  return -VAR_0;
 }




 VAR_7 = VAR_2->eng.pad + VAR_8 - 48;
 FUNC_0(VAR_7, VAR_2->eng.version_max);
 FUNC_1(&VAR_2->eng.rng, VAR_7 + 2, 46);
 FUNC_2(&VAR_2->eng, VAR_3, VAR_7, 48);




 VAR_2->eng.pad[0] = 0x00;
 VAR_2->eng.pad[1] = 0x02;
 VAR_2->eng.pad[VAR_8 - 49] = 0x00;
 FUNC_1(&VAR_2->eng.rng, VAR_2->eng.pad + 2, VAR_8 - 51);
 for (VAR_9 = 2; VAR_9 < VAR_8 - 49; VAR_9 ++) {
  while (VAR_2->eng.pad[VAR_9] == 0) {
   FUNC_1(&VAR_2->eng.rng,
    &VAR_2->eng.pad[VAR_9], 1);
  }
 }




 if (!VAR_2->irsapub(VAR_2->eng.pad, VAR_8, &VAR_5->key.rsa)) {
  return -VAR_0;
 }
 return (int)VAR_8;
}
