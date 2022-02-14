
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_entry {int ae_set; int ae_hardlink; int archive; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (int ,int *,char const**) ;
 scalar_t__ VAR_2 ;

const char *
FUNC_2(struct archive_entry *VAR_3)
{
 const char *VAR_4;
 if ((VAR_3->ae_set & VAR_0) == 0)
  return (((void*)0));
 if (FUNC_1(
     VAR_3->archive, &VAR_3->ae_hardlink, &VAR_4) == 0)
  return (VAR_4);
 if (VAR_2 == VAR_1)
  FUNC_0(1, "No memory");
 return (((void*)0));
}
