
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sshkey {int dummy; } ;


 int FUNC_0 (char const*,struct sshkey*,int ,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*,char const*) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 char* FUNC_5 (char const*,int *,int ) ;
 int FUNC_6 (char*) ;
 scalar_t__ VAR_2 ;
 char* FUNC_7 (char const*,int ) ;
 int VAR_3 ;
 int FUNC_8 (struct sshkey*,int ) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_9(const char *VAR_5, struct sshkey *VAR_6)
{
 char *VAR_7;
 const char *VAR_8, *VAR_9;

 if (VAR_2) {
  FUNC_0(VAR_5, VAR_6, VAR_4, 0);
  return;
 }

 VAR_7 = FUNC_7(VAR_5, VAR_3);
 FUNC_6(VAR_7);
 if (VAR_1 && (VAR_9 = FUNC_5(VAR_5, ((void*)0), 0)) == ((void*)0))
  FUNC_1("host_hash failed");
 VAR_8 = VAR_1 ? VAR_9 : VAR_7;
 if (!VAR_0)
  FUNC_2(VAR_4, "%s ", VAR_8);
 FUNC_8(VAR_6, VAR_4);
 FUNC_3("\n", VAR_4);
 FUNC_4(VAR_7);
}
