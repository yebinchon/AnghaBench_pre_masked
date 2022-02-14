
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct ui_file {int dummy; } ;
struct expression {int dummy; } ;
struct cleanup {int dummy; } ;
typedef scalar_t__ CORE_ADDR ;


 int FUNC_0 (struct cleanup*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct expression*,struct value**) ;
 scalar_t__ FUNC_2 (char**,int *,int ,struct expression**) ;
 struct ui_file* VAR_1 ;
 struct cleanup* FUNC_3 (int ,char*) ;
 struct ui_file* VAR_2 ;
 scalar_t__ FUNC_4 (struct value*) ;
 int VAR_3 ;
 char* FUNC_5 (char const*) ;

CORE_ADDR
FUNC_6(const char *VAR_4, int VAR_5)
{
 struct ui_file *VAR_6;
 struct cleanup *VAR_7;
 struct expression *VAR_8;
 struct value *VAR_9;
 char *VAR_10;
 CORE_ADDR VAR_11;

 VAR_6 = VAR_1;
 if (VAR_5)
  VAR_1 = VAR_2;
 VAR_11 = 0;
 VAR_10 = FUNC_5(VAR_4);
 VAR_7 = FUNC_3(VAR_3, VAR_10);
 if (FUNC_2(&VAR_10, ((void*)0), 0, &VAR_8) && *VAR_10 == '\0') {
  FUNC_3(VAR_0, &VAR_8);
  if (FUNC_1(VAR_8, &VAR_9))
      VAR_11 = FUNC_4(VAR_9);
 }
 FUNC_0(VAR_7);
 VAR_1 = VAR_6;
 return (VAR_11);
}
