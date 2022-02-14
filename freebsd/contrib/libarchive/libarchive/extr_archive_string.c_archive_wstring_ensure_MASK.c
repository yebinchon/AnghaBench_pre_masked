
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
struct archive_wstring {int dummy; } ;
struct archive_string {int dummy; } ;


 scalar_t__ FUNC_0 (struct archive_string*,size_t) ;

struct archive_wstring *
FUNC_1(struct archive_wstring *VAR_0, size_t VAR_1)
{
 return (struct archive_wstring *)
  FUNC_0((struct archive_string *)VAR_0,
     VAR_1 * sizeof(wchar_t));
}
