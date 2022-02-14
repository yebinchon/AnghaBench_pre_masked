
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
struct cmd_struct {int option; int (* fn ) (int,char const**,char const*) ;int cmd; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,...) ;
 int VAR_2 ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ,struct stat*) ;
 int VAR_3 ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int,char const**,char const*) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_14(struct cmd_struct *VAR_6, int VAR_7, const char **VAR_8)
{
 int VAR_9;
 struct stat VAR_10;
 const char *VAR_11;

 VAR_11 = ((void*)0);
 if (VAR_6->option & VAR_0)
  VAR_11 = ((void*)0);

 if (VAR_4 == -1)
  VAR_4 = FUNC_2(VAR_6->cmd);

 if (VAR_5 == -1 && VAR_6->option & VAR_0)
  VAR_5 = FUNC_3(VAR_6->cmd);
 if (VAR_5 == -1 && VAR_6->option & VAR_1)
  VAR_5 = 1;
 FUNC_4();

 VAR_9 = VAR_6->fn(VAR_7, VAR_8, VAR_11);
 FUNC_6(VAR_9);

 if (VAR_9)
  return VAR_9 & 0xff;


 if (FUNC_11(FUNC_10(VAR_3), &VAR_10))
  return 0;

 if (FUNC_0(VAR_10.st_mode) || FUNC_1(VAR_10.st_mode))
  return 0;


 if (FUNC_9(VAR_3))
  FUNC_5("write failure on standard output: %s", FUNC_12(VAR_2));
 if (FUNC_8(VAR_3))
  FUNC_5("unknown write failure on standard output");
 if (FUNC_7(VAR_3))
  FUNC_5("close failed on standard output: %s", FUNC_12(VAR_2));
 return 0;
}
