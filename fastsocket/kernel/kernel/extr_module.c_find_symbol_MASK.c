
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct module {int dummy; } ;
struct kernel_symbol {int dummy; } ;
struct find_symbol_arg {char const* name; int gplok; int warn; unsigned long* crc; struct kernel_symbol const* sym; struct module* owner; } ;


 int FUNC_0 (char*,char const*) ;
 scalar_t__ FUNC_1 (int ,struct find_symbol_arg*) ;
 int VAR_0 ;

const struct kernel_symbol *FUNC_2(const char *VAR_1,
     struct module **VAR_2,
     const unsigned long **VAR_3,
     bool VAR_4,
     bool VAR_5)
{
 struct find_symbol_arg VAR_6;

 VAR_6.name = VAR_1;
 VAR_6.gplok = VAR_4;
 VAR_6.warn = VAR_5;

 if (FUNC_1(VAR_0, &VAR_6)) {
  if (VAR_2)
   *VAR_2 = VAR_6.owner;
  if (VAR_3)
   *VAR_3 = VAR_6.crc;
  return VAR_6.sym;
 }

 FUNC_0("Failed to find symbol %s\n", VAR_1);
 return ((void*)0);
}
