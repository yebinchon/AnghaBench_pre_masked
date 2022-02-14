
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol {int export; struct module* module; } ;
struct module {int dummy; } ;
typedef enum export { ____Placeholder_export } export ;


 unsigned int VAR_0 ;
 struct symbol* FUNC_0 (char const*,int ,struct symbol*) ;
 struct symbol** VAR_1 ;
 unsigned int FUNC_1 (char const*) ;

__attribute__((used)) static struct symbol *FUNC_2(const char *VAR_2, struct module *VAR_3,
     enum export VAR_4)
{
 unsigned int VAR_5;
 struct symbol *VAR_6;

 VAR_5 = FUNC_1(VAR_2) % VAR_0;
 VAR_6 = VAR_1[VAR_5] = FUNC_0(VAR_2, 0, VAR_1[VAR_5]);
 VAR_6->module = VAR_3;
 VAR_6->export = VAR_4;
 return VAR_6;
}
