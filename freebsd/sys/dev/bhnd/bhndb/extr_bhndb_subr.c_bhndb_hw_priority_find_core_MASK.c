
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhndb_hw_priority {int match; int * ports; } ;
struct bhnd_core_info {int dummy; } ;


 scalar_t__ FUNC_0 (struct bhnd_core_info*,int *) ;

const struct bhndb_hw_priority *
FUNC_1(const struct bhndb_hw_priority *VAR_0,
    struct bhnd_core_info *VAR_1)
{
 const struct bhndb_hw_priority *VAR_2;

 for (VAR_2 = VAR_0; VAR_2->ports != ((void*)0); VAR_2++) {
  if (FUNC_0(VAR_1, &VAR_2->match))
   return (VAR_2);
 }


 return (((void*)0));
}
