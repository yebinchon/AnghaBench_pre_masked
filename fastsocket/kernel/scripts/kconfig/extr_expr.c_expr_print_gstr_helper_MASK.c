
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol {int dummy; } ;
struct gstr {int dummy; } ;


 int FUNC_0 (struct gstr*,char const*) ;
 int FUNC_1 (struct gstr*,char*,int ) ;
 int FUNC_2 (struct symbol*) ;

__attribute__((used)) static void FUNC_3(void *VAR_0, struct symbol *VAR_1, const char *VAR_2)
{
 FUNC_0((struct gstr*)VAR_0, VAR_2);
 if (VAR_1)
  FUNC_1((struct gstr*)VAR_0, " [=%s]", FUNC_2(VAR_1));
}
