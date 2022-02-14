
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wchar_t ;
typedef int mbstate_t ;
typedef int locale_t ;
struct TYPE_2__ {size_t (* __wcrtomb ) (char*,int ,int *) ;int wcrtomb; } ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int ) ;
 size_t FUNC_2 (char*,int ,int *) ;

size_t
FUNC_3(char * __restrict VAR_0, wchar_t VAR_1, mbstate_t * __restrict VAR_2,
  locale_t VAR_3)
{
 FUNC_0(VAR_3);
 if (VAR_2 == ((void*)0))
  VAR_2 = &(FUNC_1(VAR_3)->wcrtomb);
 return (FUNC_1(VAR_3)->__wcrtomb(VAR_0, VAR_1, VAR_2));
}
