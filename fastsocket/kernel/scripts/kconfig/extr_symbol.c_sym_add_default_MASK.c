
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol {int dummy; } ;
struct property {int expr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct property* FUNC_1 (int ,struct symbol*) ;
 int FUNC_2 (char const*,int ) ;

__attribute__((used)) static void FUNC_3(struct symbol *VAR_2, const char *VAR_3)
{
 struct property *VAR_4 = FUNC_1(VAR_0, VAR_2);

 VAR_4->expr = FUNC_0(FUNC_2(VAR_3, VAR_1));
}
