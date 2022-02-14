
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_string_conv {int dummy; } ;
struct archive_entry {int ae_set; int ae_hardlink; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char const*,size_t,struct archive_string_conv*) ;

int
FUNC_1(struct archive_entry *VAR_1,
    const char *VAR_2, size_t VAR_3, struct archive_string_conv *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(&VAR_1->ae_hardlink,
     VAR_2, VAR_3, VAR_4);
 if (VAR_2 != ((void*)0) && VAR_5 == 0)
  VAR_1->ae_set |= VAR_0;
 else
  VAR_1->ae_set &= ~VAR_0;
 return (VAR_5);
}
