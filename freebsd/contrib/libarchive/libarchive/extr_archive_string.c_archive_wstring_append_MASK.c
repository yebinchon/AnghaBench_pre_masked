
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
struct archive_wstring {size_t length; scalar_t__* s; } ;


 int * FUNC_0 (struct archive_wstring*,size_t) ;
 int FUNC_1 (scalar_t__*,int const*,size_t) ;

__attribute__((used)) static struct archive_wstring *
FUNC_2(struct archive_wstring *VAR_0, const wchar_t *VAR_1, size_t VAR_2)
{
 if (FUNC_0(VAR_0, VAR_0->length + VAR_2 + 1) == ((void*)0))
  return (((void*)0));
 if (VAR_2)
  FUNC_1(VAR_0->s + VAR_0->length, VAR_1, VAR_2);
 VAR_0->length += VAR_2;
 VAR_0->s[VAR_0->length] = 0;
 return (VAR_0);
}
