
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct elfcopy {TYPE_1__* shstrtab; } ;
struct TYPE_2__ {int strtab; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,char const*) ;
 int FUNC_1 (int ,char*) ;

void
FUNC_2(struct elfcopy *VAR_1, const char *VAR_2)
{

 if (FUNC_0(VAR_1->shstrtab->strtab, VAR_2) == 0)
  FUNC_1(VAR_0, "elftc_string_table_insert failed");
}
