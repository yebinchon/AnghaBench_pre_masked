
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wchar_t ;
typedef int mbstate_t ;
typedef int locale_t ;
struct TYPE_2__ {size_t (* __wcrtomb ) (char*,int ,int *) ;int wctomb; } ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int ) ;
 size_t FUNC_2 (char*,int ,int *) ;

int
FUNC_3(char *VAR_0, wchar_t VAR_1, locale_t VAR_2)
{
 static const mbstate_t VAR_3;
 size_t VAR_4;
 FUNC_0(VAR_2);

 if (VAR_0 == ((void*)0)) {

  FUNC_1(VAR_2)->wctomb = VAR_3;
  return (0);
 }
 if ((VAR_4 = FUNC_1(VAR_2)->__wcrtomb(VAR_0, VAR_1,
     &(FUNC_1(VAR_2)->wctomb))) == (size_t)-1)
  return (-1);
 return ((int)VAR_4);
}
