
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct root_hold_token {char const* who; } ;


 int FUNC_0 (int *,struct root_hold_token*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int VAR_3 ;
 struct root_hold_token* FUNC_2 (int,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_4 ;
 int VAR_5 ;

struct root_hold_token *
FUNC_5(const char *VAR_6)
{
 struct root_hold_token *VAR_7;

 VAR_7 = FUNC_2(sizeof *VAR_7, VAR_0, VAR_2 | VAR_1);
 VAR_7->who = VAR_6;
 FUNC_3(&VAR_5);
 FUNC_1("root mount");
 FUNC_0(&VAR_4, VAR_7, VAR_3);
 FUNC_4(&VAR_5);
 return (VAR_7);
}
