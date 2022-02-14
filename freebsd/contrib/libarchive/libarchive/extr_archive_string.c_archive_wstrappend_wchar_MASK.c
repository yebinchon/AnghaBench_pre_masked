
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
struct archive_wstring {int dummy; } ;


 int FUNC_0 (int,char*) ;
 struct archive_wstring* FUNC_1 (struct archive_wstring*,int *,int) ;

struct archive_wstring *
FUNC_2(struct archive_wstring *VAR_0, wchar_t VAR_1)
{
 if ((VAR_0 = FUNC_1(VAR_0, &VAR_1, 1)) == ((void*)0))
  FUNC_0(1, "Out of memory");
 return (VAR_0);
}
