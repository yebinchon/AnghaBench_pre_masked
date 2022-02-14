
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_entry {int ae_set; int ae_hardlink; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char const*) ;

void
FUNC_1(struct archive_entry *VAR_1, const char *VAR_2)
{
 FUNC_0(&VAR_1->ae_hardlink, VAR_2);
 if (VAR_2 != ((void*)0))
  VAR_1->ae_set |= VAR_0;
 else
  VAR_1->ae_set &= ~VAR_0;
}
