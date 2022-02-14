
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wint_t ;
typedef int mbstate_t ;
typedef int locale_t ;
struct TYPE_2__ {int (* __wcrtomb ) (char*,int ,int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,int *) ;

int
FUNC_3(wint_t VAR_3, locale_t VAR_4)
{
 static const mbstate_t VAR_5;
 mbstate_t VAR_6 = VAR_5;
 char VAR_7[VAR_1];
 FUNC_0(VAR_4);

 if (VAR_3 == VAR_2 || FUNC_1(VAR_4)->__wcrtomb(VAR_7, VAR_3, &VAR_6) != 1)
  return (VAR_0);
 return ((unsigned char)*VAR_7);
}
