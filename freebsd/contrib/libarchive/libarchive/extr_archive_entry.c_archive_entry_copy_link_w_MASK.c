
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
struct archive_entry {int ae_set; int ae_hardlink; int ae_symlink; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int const*) ;

void
FUNC_1(struct archive_entry *VAR_1, const wchar_t *VAR_2)
{
 if (VAR_1->ae_set & VAR_0)
  FUNC_0(&VAR_1->ae_symlink, VAR_2);
 else
  FUNC_0(&VAR_1->ae_hardlink, VAR_2);
}
