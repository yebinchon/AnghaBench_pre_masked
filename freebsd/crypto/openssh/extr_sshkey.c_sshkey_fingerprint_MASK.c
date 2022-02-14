
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct sshkey {int dummy; } ;
typedef enum sshkey_fp_rep { ____Placeholder_sshkey_fp_rep } sshkey_fp_rep ;


 int VAR_0 ;





 int FUNC_0 (int *,size_t) ;
 char* FUNC_1 (int ,int *,size_t) ;
 char* FUNC_2 (int *,size_t) ;
 char* FUNC_3 (int ,int *,size_t) ;
 char* FUNC_4 (int ,int *,size_t,struct sshkey const*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (struct sshkey const*,int,int **,size_t*) ;

char *
FUNC_8(const struct sshkey *VAR_1, int VAR_2,
    enum sshkey_fp_rep VAR_3)
{
 char *VAR_4 = ((void*)0);
 u_char *VAR_5;
 size_t VAR_6;

 if (FUNC_7(VAR_1, VAR_2, &VAR_5, &VAR_6) != 0)
  return ((void*)0);
 switch (VAR_3) {
 case 130:
  if (VAR_2 == VAR_0) {
   VAR_4 = FUNC_3(FUNC_6(VAR_2),
       VAR_5, VAR_6);
  } else {
   VAR_4 = FUNC_1(FUNC_6(VAR_2),
       VAR_5, VAR_6);
  }
  break;
 case 129:
  VAR_4 = FUNC_3(FUNC_6(VAR_2),
      VAR_5, VAR_6);
  break;
 case 132:
  VAR_4 = FUNC_1(FUNC_6(VAR_2),
      VAR_5, VAR_6);
  break;
 case 131:
  VAR_4 = FUNC_2(VAR_5, VAR_6);
  break;
 case 128:
  VAR_4 = FUNC_4(FUNC_6(VAR_2),
      VAR_5, VAR_6, VAR_1);
  break;
 default:
  FUNC_0(VAR_5, VAR_6);
  FUNC_5(VAR_5);
  return ((void*)0);
 }
 FUNC_0(VAR_5, VAR_6);
 FUNC_5(VAR_5);
 return VAR_4;
}
