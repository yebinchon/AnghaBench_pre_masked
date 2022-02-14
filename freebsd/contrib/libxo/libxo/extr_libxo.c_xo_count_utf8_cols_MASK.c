
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wint_t ;
typedef scalar_t__ wchar_t ;
typedef int ssize_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char const*,int) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static ssize_t
FUNC_5 (const char *VAR_0, ssize_t VAR_1)
{
    ssize_t VAR_2;
    wchar_t VAR_3;
    ssize_t VAR_4 = 0;
    const char *VAR_5 = VAR_0 + VAR_1;

    while (VAR_0 < VAR_5) {
 VAR_2 = FUNC_3(VAR_0);
 if (VAR_2 < 0)
     return VAR_4;

 VAR_3 = FUNC_2(VAR_0, VAR_2);
 if (VAR_3 == (wchar_t) -1)
     return VAR_4;


 if (FUNC_1((wint_t) VAR_3)) {




     ssize_t VAR_6 = FUNC_4(VAR_3);
     if (VAR_6 < 0)
  VAR_6 = FUNC_0(VAR_3) ? 0 : 1;

     VAR_4 += VAR_6;
 }

 VAR_0 += VAR_2;
    }

    return VAR_4;
}
