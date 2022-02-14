
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct sshkey {int dummy; } ;
struct passwd {char* pw_name; } ;
typedef int comment ;


 char* VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (int ,int *,size_t) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int ,char*,char*) ;
 int FUNC_4 (int *) ;
 char* VAR_2 ;
 int FUNC_5 (char*,int,char*,int,char*,char*,char*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct sshkey*) ;
 int FUNC_8 (struct sshkey*) ;
 int FUNC_9 (struct sshkey*,int **,size_t*) ;
 char* FUNC_10 (struct sshkey*) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_11(struct passwd *VAR_4, struct sshkey *VAR_5)
{
 size_t VAR_6;
 u_char *VAR_7;
 char VAR_8[61];
 int VAR_9;

 if ((VAR_9 = FUNC_9(VAR_5, &VAR_7, &VAR_6)) != 0)
  FUNC_2("key_to_blob failed: %s", FUNC_6(VAR_9));

 FUNC_5(VAR_8, sizeof(VAR_8),
     "%u-bit %s, converted by %s@%s from OpenSSH",
     FUNC_8(VAR_5), FUNC_10(VAR_5),
     VAR_4->pw_name, VAR_2);

 FUNC_3(VAR_3, "%s\n", VAR_0);
 FUNC_3(VAR_3, "Comment: \"%s\"\n", VAR_8);
 FUNC_0(VAR_3, VAR_7, VAR_6);
 FUNC_3(VAR_3, "%s\n", VAR_1);
 FUNC_7(VAR_5);
 FUNC_4(VAR_7);
 FUNC_1(0);
}
