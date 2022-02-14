
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int outspec ;
typedef int br_skey_decoder_context ;
struct TYPE_7__ {scalar_t__ n_bitlen; } ;
typedef TYPE_1__ br_rsa_private_key ;
struct TYPE_8__ {int curve; } ;
typedef TYPE_2__ br_ec_private_key ;




 TYPE_2__* FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned char const*,size_t) ;
 char* FUNC_6 (int) ;
 char* FUNC_7 (int,char const**) ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 (TYPE_2__ const*,int *) ;
 int FUNC_10 (TYPE_1__ const*,int *) ;
 int FUNC_11 (char*,int,...) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_12(const unsigned char *VAR_1, size_t VAR_2, outspec *VAR_3)
{
 br_skey_decoder_context VAR_4;
 int VAR_5, VAR_6;

 FUNC_2(&VAR_4);
 FUNC_5(&VAR_4, VAR_1, VAR_2);
 VAR_5 = FUNC_4(&VAR_4);
 if (VAR_5 != 0) {
  const char *VAR_7, *VAR_8;

  FUNC_8(VAR_0, "ERROR (decoding): err=%d\n", VAR_5);
  VAR_7 = FUNC_7(VAR_5, &VAR_8);
  if (VAR_7 != ((void*)0)) {
   FUNC_8(VAR_0, "  %s: %s\n", VAR_7, VAR_8);
  } else {
   FUNC_8(VAR_0, "  (unknown)\n");
  }
  return 0;
 }
 VAR_6 = 1;
 switch (FUNC_3(&VAR_4)) {
  const br_rsa_private_key *VAR_9;
  const br_ec_private_key *VAR_10;

 case 128:
  VAR_9 = FUNC_1(&VAR_4);
  FUNC_11("RSA key (%lu bits)\n", (unsigned long)VAR_9->n_bitlen);
  VAR_6 = FUNC_10(VAR_9, VAR_3);
  break;

 case 129:
  VAR_10 = FUNC_0(&VAR_4);
  FUNC_11("EC key (curve = %d: %s)\n",
   VAR_10->curve, FUNC_6(VAR_10->curve));
  VAR_6 = FUNC_9(VAR_10, VAR_3);
  break;

 default:
  FUNC_8(VAR_0, "Unknown key type: %d\n",
   FUNC_3(&VAR_4));
  VAR_6 = 0;
  break;
 }

 return VAR_6;
}
