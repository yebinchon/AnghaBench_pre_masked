
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_entry {int ae_uname; int archive; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (int ,int *,char const*) ;
 scalar_t__ VAR_1 ;

int
FUNC_2(struct archive_entry *VAR_2, const char *VAR_3)
{
 if (FUNC_1(VAR_2->archive,
     &VAR_2->ae_uname, VAR_3) == 0)
  return (1);
 if (VAR_1 == VAR_0)
  FUNC_0(1, "No memory");
 return (0);
}
