
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tmpl ;
struct cmd {int dummy; } ;
struct TYPE_2__ {int dev; int * template; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char**,struct cmd const*) ;
 scalar_t__ FUNC_1 (int,char**,struct cmd const*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,int*,int,int) ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (char*,int *,int) ;
 int FUNC_7 (int,char*,char*,int ,int ,int) ;

__attribute__((used)) static void
FUNC_8(const struct cmd *VAR_5, int VAR_6, char *VAR_7[])
{
 char VAR_8[VAR_0];
  int VAR_9;

 if (FUNC_1(VAR_6, VAR_7, VAR_5))
  return;
 if (VAR_3.template == ((void*)0)) {
  FUNC_4(VAR_4, "Missing template arg.\n");
  FUNC_0(VAR_6, VAR_7, VAR_5);
 }
 FUNC_6(VAR_8, VAR_3.template, sizeof(VAR_8));
 FUNC_5(VAR_3.dev, &VAR_9, 1, 1);
 FUNC_7(VAR_9, VAR_8, "cap_diag", VAR_2,
     VAR_1, 4);

 FUNC_2(VAR_9);

 FUNC_3(1);
}
