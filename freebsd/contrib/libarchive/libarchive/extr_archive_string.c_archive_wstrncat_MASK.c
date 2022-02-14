
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ wchar_t ;
struct archive_wstring {int dummy; } ;


 int FUNC_0 (int,char*) ;
 struct archive_wstring* FUNC_1 (struct archive_wstring*,scalar_t__ const*,size_t) ;

struct archive_wstring *
FUNC_2(struct archive_wstring *VAR_0, const wchar_t *VAR_1, size_t VAR_2)
{
 size_t VAR_3;
 const wchar_t *VAR_4;


 VAR_3 = 0;
 VAR_4 = VAR_1;
 while (VAR_3 < VAR_2 && *VAR_4) {
  VAR_4++;
  VAR_3++;
 }
 if ((VAR_0 = FUNC_1(VAR_0, VAR_1, VAR_3)) == ((void*)0))
  FUNC_0(1, "Out of memory");
 return (VAR_0);
}
