
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wint_t ;
typedef int wchar_t ;
typedef int mbstate_t ;
typedef int locale_t ;
struct TYPE_2__ {int (* __mbrtowc ) (int *,char*,int,int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,int,int *) ;

wint_t
FUNC_3(int VAR_2, locale_t VAR_3)
{
 static const mbstate_t VAR_4;
 mbstate_t VAR_5 = VAR_4;
 char VAR_6;
 wchar_t VAR_7;
 FUNC_0(VAR_3);

 if (VAR_2 == VAR_0)
  return (VAR_1);





 VAR_6 = (char)VAR_2;
 if (FUNC_1(VAR_3)->__mbrtowc(&VAR_7, &VAR_6, 1, &VAR_5) > 1)
  return (VAR_1);
 return (VAR_7);
}
