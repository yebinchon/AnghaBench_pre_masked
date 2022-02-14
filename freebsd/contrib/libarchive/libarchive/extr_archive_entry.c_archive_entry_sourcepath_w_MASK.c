
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
struct archive_entry {int ae_sourcepath; int archive; } ;


 scalar_t__ FUNC_0 (int ,int *,int const**) ;

const wchar_t *
FUNC_1(struct archive_entry *VAR_0)
{
 const wchar_t *VAR_1;
 if (FUNC_0(
     VAR_0->archive, &VAR_0->ae_sourcepath, &VAR_1) == 0)
  return (VAR_1);
 return (((void*)0));
}
