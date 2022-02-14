
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
struct sshkey {int dummy; } ;
struct passwd {int dummy; } ;


 int FUNC_0 (struct passwd*,char*) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct sshkey* FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct sshkey*) ;
 int FUNC_8 (struct sshkey*,int ) ;
 scalar_t__ FUNC_9 (int ,struct stat*) ;
 int VAR_3 ;
 int FUNC_10 (int ) ;

__attribute__((used)) static void
FUNC_11(struct passwd *VAR_4)
{
 struct sshkey *VAR_5;
 struct stat VAR_6;
 int VAR_7;

 if (!VAR_1)
  FUNC_0(VAR_4, "Enter file in which the key is");
 if (FUNC_9(VAR_2, &VAR_6) < 0)
  FUNC_3("%s: %s", VAR_2, FUNC_10(VAR_0));
 VAR_5 = FUNC_5(VAR_2);
 if ((VAR_7 = FUNC_8(VAR_5, VAR_3)) != 0)
  FUNC_1("sshkey_write failed: %s", FUNC_6(VAR_7));
 FUNC_7(VAR_5);
 FUNC_4(VAR_3, "\n");
 FUNC_2(0);
}
