
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
struct archive_entry {int ae_fflags_clear; int ae_fflags_set; int ae_fflags_text; } ;


 int const* FUNC_0 (int const*,int *,int *) ;
 int FUNC_1 (int *,int const*) ;

const wchar_t *
FUNC_2(struct archive_entry *VAR_0,
    const wchar_t *VAR_1)
{
 FUNC_1(&VAR_0->ae_fflags_text, VAR_1);
 return (FUNC_0(VAR_1,
      &VAR_0->ae_fflags_set, &VAR_0->ae_fflags_clear));
}
