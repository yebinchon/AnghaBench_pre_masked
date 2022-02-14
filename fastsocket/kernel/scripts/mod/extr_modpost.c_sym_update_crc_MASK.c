
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol {unsigned int crc; int crc_valid; } ;
struct module {int dummy; } ;
typedef enum export { ____Placeholder_export } export ;


 struct symbol* FUNC_0 (char const*) ;
 struct symbol* FUNC_1 (char const*,struct module*,int) ;

__attribute__((used)) static void FUNC_2(const char *VAR_0, struct module *VAR_1,
      unsigned int VAR_2, enum export VAR_3)
{
 struct symbol *VAR_4 = FUNC_0(VAR_0);

 if (!VAR_4)
  VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_3);
 VAR_4->crc = VAR_2;
 VAR_4->crc_valid = 1;
}
