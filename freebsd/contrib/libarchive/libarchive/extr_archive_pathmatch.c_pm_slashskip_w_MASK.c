
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;



__attribute__((used)) static const wchar_t *
FUNC_0(const wchar_t *VAR_0) {
 while ((*VAR_0 == L'/')
     || (VAR_0[0] == L'.' && VAR_0[1] == L'/')
     || (VAR_0[0] == L'.' && VAR_0[1] == L'\0'))
  ++VAR_0;
 return (VAR_0);
}
