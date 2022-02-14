
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int ec; int rsa; } ;
struct TYPE_11__ {TYPE_1__ key; } ;
typedef TYPE_3__ br_x509_pkey ;
struct TYPE_12__ {TYPE_3__* (* get_pkey ) (TYPE_4__ const**,int *) ;} ;
typedef TYPE_4__ br_x509_class ;
struct TYPE_10__ {unsigned char* client_random; unsigned char* server_random; unsigned char ecdhe_curve; unsigned char ecdhe_point_len; unsigned char* ecdhe_point; int pad; int iec; int (* iecdsa ) (int ,unsigned char*,size_t,int *,int ,size_t) ;int (* irsavrfy ) (int ,size_t,unsigned char const*,size_t,int *,unsigned char*) ;int mhash; TYPE_4__** x509ctx; } ;
struct TYPE_13__ {TYPE_2__ eng; } ;
typedef TYPE_5__ br_ssl_client_context ;
typedef int br_multihash_context ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char** VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 size_t FUNC_2 (int *,int,unsigned char*) ;
 int FUNC_3 (int *,unsigned char*,int) ;
 int FUNC_4 (int *) ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (unsigned char*,unsigned char*,size_t) ;
 TYPE_3__* FUNC_6 (TYPE_4__ const**,int *) ;
 int FUNC_7 (int ,size_t,unsigned char const*,size_t,int *,unsigned char*) ;
 int FUNC_8 (int ,unsigned char*,size_t,int *,int ,size_t) ;

__attribute__((used)) static int
FUNC_9(br_ssl_client_context *VAR_5,
 int VAR_6, int VAR_7, size_t VAR_8)
{
 const br_x509_class **VAR_9;
 const br_x509_pkey *VAR_10;
 br_multihash_context VAR_11;
 unsigned char VAR_12[64], VAR_13[4];
 size_t VAR_14;

 VAR_9 = VAR_5->eng.x509ctx;
 VAR_10 = (*VAR_9)->get_pkey(VAR_9, ((void*)0));
 FUNC_4(&VAR_11);
 FUNC_0(&VAR_11, &VAR_5->eng.mhash);
 FUNC_1(&VAR_11);
 FUNC_3(&VAR_11,
  VAR_5->eng.client_random, sizeof VAR_5->eng.client_random);
 FUNC_3(&VAR_11,
  VAR_5->eng.server_random, sizeof VAR_5->eng.server_random);
 VAR_13[0] = 3;
 VAR_13[1] = 0;
 VAR_13[2] = VAR_5->eng.ecdhe_curve;
 VAR_13[3] = VAR_5->eng.ecdhe_point_len;
 FUNC_3(&VAR_11, VAR_13, sizeof VAR_13);
 FUNC_3(&VAR_11,
  VAR_5->eng.ecdhe_point, VAR_5->eng.ecdhe_point_len);
 if (VAR_6) {
  VAR_14 = FUNC_2(&VAR_11, VAR_6, VAR_12);
  if (VAR_14 == 0) {
   return VAR_1;
  }
 } else {
  if (!FUNC_2(&VAR_11, VAR_3, VAR_12)
   || !FUNC_2(&VAR_11, VAR_4, VAR_12 + 16))
  {
   return VAR_1;
  }
  VAR_14 = 36;
 }
 if (VAR_7) {
  unsigned char VAR_15[64];
  const unsigned char *VAR_16;

  if (VAR_6) {
   VAR_16 = VAR_2[VAR_6 - 2];
  } else {
   VAR_16 = ((void*)0);
  }
  if (!VAR_5->eng.irsavrfy(VAR_5->eng.pad, VAR_8,
   VAR_16, VAR_14, &VAR_10->key.rsa, VAR_15)
   || FUNC_5(VAR_15, VAR_12, VAR_14) != 0)
  {
   return VAR_0;
  }
 } else {
  if (!VAR_5->eng.iecdsa(VAR_5->eng.iec, VAR_12, VAR_14, &VAR_10->key.ec,
   VAR_5->eng.pad, VAR_8))
  {
   return VAR_0;
  }
 }
 return 0;
}
