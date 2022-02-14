
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_entry {unsigned long ae_fflags_set; unsigned long ae_fflags_clear; int ae_fflags_text; } ;


 int FUNC_0 (int *) ;

void
FUNC_1(struct archive_entry *VAR_0,
    unsigned long VAR_1, unsigned long VAR_2)
{
 FUNC_0(&VAR_0->ae_fflags_text);
 VAR_0->ae_fflags_set = VAR_1;
 VAR_0->ae_fflags_clear = VAR_2;
}
