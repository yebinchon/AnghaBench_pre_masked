
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sym_entry {int * name; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static int
FUNC_2(const void *VAR_0, const void *VAR_1)
{

 FUNC_0(VAR_0 != ((void*)0));
 FUNC_0(VAR_1 != ((void*)0));
 FUNC_0(((const struct sym_entry *)VAR_0)->name != ((void*)0));
 FUNC_0(((const struct sym_entry *)VAR_1)->name != ((void*)0));

 return (FUNC_1(((const struct sym_entry *)VAR_0)->name,
     ((const struct sym_entry *)VAR_1)->name));
}
