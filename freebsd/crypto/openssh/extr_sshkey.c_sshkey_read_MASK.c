
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sshkey {int type; int ecdsa_nid; char* xmss_pk; char* xmss_state; char* xmss_name; char* xmss_filename; int * ed25519_pk; int * ecdsa; int * dsa; int * rsa; int * cert; } ;
struct sshbuf {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *,int) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (char*,size_t,int*) ;
 int FUNC_9 (struct sshbuf*,char*) ;
 int FUNC_10 (struct sshbuf*) ;
 struct sshbuf* FUNC_11 () ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct sshkey*) ;
 int FUNC_14 (struct sshbuf*,struct sshkey**) ;
 scalar_t__ FUNC_15 (struct sshkey*) ;
 int const FUNC_16 (int) ;
 int VAR_8 ;
 size_t FUNC_17 (char*,char*) ;
 size_t FUNC_18 (char*) ;
 char* FUNC_19 (char*,size_t) ;

int
FUNC_20(struct sshkey *VAR_9, char **VAR_10)
{
 struct sshkey *VAR_11;
 char *VAR_12, *VAR_13;
 size_t VAR_14;
 int VAR_15, VAR_16, VAR_17 = -1;
 struct sshbuf *VAR_18;

 if (VAR_9 == ((void*)0))
  return VAR_5;

 switch (VAR_9->type) {
 case 130:
 case 132:
 case 138:
 case 136:
 case 134:
 case 137:
 case 135:
 case 131:
 case 133:




  break;
 default:
  return VAR_5;
 }


 VAR_12 = *VAR_10;
 VAR_14 = FUNC_17(VAR_12, " \t");
 if (VAR_14 == FUNC_18(VAR_12))
  return VAR_6;
 if ((VAR_16 = FUNC_8(VAR_12, VAR_14, &VAR_17)) == 130)
  return VAR_6;


 for (VAR_12 += VAR_14; *VAR_12 == ' ' || *VAR_12 == '\t'; VAR_12++)
  ;
 if (*VAR_12 == '\0')
  return VAR_6;
 if (VAR_9->type != 130 && VAR_9->type != VAR_16)
  return VAR_7;
 if ((VAR_18 = FUNC_11()) == ((void*)0))
  return VAR_1;


 VAR_14 = FUNC_17(VAR_12, " \t");
 if ((VAR_13 = FUNC_19(VAR_12, VAR_14)) == ((void*)0)) {
  FUNC_10(VAR_18);
  return VAR_1;
 }
 if ((VAR_15 = FUNC_9(VAR_18, VAR_13)) != 0) {
  FUNC_6(VAR_13);
  FUNC_10(VAR_18);
  return VAR_15;
 }
 FUNC_6(VAR_13);
 if ((VAR_15 = FUNC_14(VAR_18, &VAR_11)) != 0) {
  FUNC_10(VAR_18);
  return VAR_15;
 }
 FUNC_10(VAR_18);


 for (VAR_12 += VAR_14; *VAR_12 == ' ' || *VAR_12 == '\t'; VAR_12++)
  ;


 if (VAR_11->type != VAR_16) {
  FUNC_13(VAR_11);
  return VAR_7;
 }
 if (FUNC_16(VAR_16) == 136 && VAR_17 != VAR_11->ecdsa_nid) {
  FUNC_13(VAR_11);
  return VAR_2;
 }


 VAR_9->type = VAR_16;
 if (FUNC_15(VAR_9)) {
  if (!FUNC_15(VAR_11)) {
   FUNC_13(VAR_11);
   return VAR_3;
  }
  if (VAR_9->cert != ((void*)0))
   FUNC_5(VAR_9->cert);
  VAR_9->cert = VAR_11->cert;
  VAR_11->cert = ((void*)0);
 }
 switch (FUNC_16(VAR_9->type)) {
 case 134:
  FUNC_7(VAR_9->ed25519_pk, VAR_0);
  VAR_9->ed25519_pk = VAR_11->ed25519_pk;
  VAR_11->ed25519_pk = ((void*)0);



  break;
 default:
  FUNC_13(VAR_11);
  return VAR_4;
 }
 FUNC_13(VAR_11);


 *VAR_10 = VAR_12;
 return 0;
}
