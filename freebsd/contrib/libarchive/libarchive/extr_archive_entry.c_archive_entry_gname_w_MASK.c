
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
struct archive_entry {int ae_gname; int archive; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (int ,int *,int const**) ;
 scalar_t__ VAR_1 ;

const wchar_t *
FUNC_2(struct archive_entry *VAR_2)
{
 const wchar_t *VAR_3;
 if (FUNC_1(VAR_2->archive, &VAR_2->ae_gname, &VAR_3) == 0)
  return (VAR_3);
 if (VAR_1 == VAR_0)
  FUNC_0(1, "No memory");
 return (((void*)0));
}
