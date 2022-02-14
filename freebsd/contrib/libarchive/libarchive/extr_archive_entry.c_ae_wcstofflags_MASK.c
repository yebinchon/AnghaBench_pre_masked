
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
struct flag {unsigned long set; unsigned long clear; int * wname; } ;


 struct flag* VAR_0 ;
 size_t FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int const*,int *,size_t) ;

__attribute__((used)) static const wchar_t *
FUNC_2(const wchar_t *VAR_1, unsigned long *VAR_2, unsigned long *VAR_3)
{
 const wchar_t *VAR_4, *VAR_5;
 const struct flag *VAR_6;
 unsigned long VAR_7, VAR_8;
 const wchar_t *VAR_9;

 VAR_7 = VAR_8 = 0;
 VAR_4 = VAR_1;
 VAR_9 = ((void*)0);

 while (*VAR_4 == L'\t' || *VAR_4 == L' ' || *VAR_4 == L',')
  VAR_4++;
 while (*VAR_4 != L'\0') {
  size_t VAR_10;

  VAR_5 = VAR_4;
  while (*VAR_5 != L'\0' && *VAR_5 != L'\t' &&
      *VAR_5 != L' ' && *VAR_5 != L',')
   VAR_5++;
  VAR_10 = VAR_5 - VAR_4;
  for (VAR_6 = VAR_0; VAR_6->wname != ((void*)0); VAR_6++) {
   size_t VAR_11 = FUNC_0(VAR_6->wname);
   if (VAR_10 == VAR_11
       && FUNC_1(VAR_4, VAR_6->wname, VAR_10) == 0) {

    VAR_8 |= VAR_6->set;
    VAR_7 |= VAR_6->clear;
    break;
   } else if (VAR_10 == VAR_11 - 2
       && FUNC_1(VAR_4, VAR_6->wname + 2, VAR_10) == 0) {

    VAR_7 |= VAR_6->set;
    VAR_8 |= VAR_6->clear;
    break;
   }
  }

  if (VAR_6->wname == ((void*)0) && VAR_9 == ((void*)0))
   VAR_9 = VAR_4;


  VAR_4 = VAR_5;
  while (*VAR_4 == L'\t' || *VAR_4 == L' ' || *VAR_4 == L',')
   VAR_4++;

 }

 if (VAR_2)
  *VAR_2 = VAR_7;
 if (VAR_3)
  *VAR_3 = VAR_8;


 return (VAR_9);
}
