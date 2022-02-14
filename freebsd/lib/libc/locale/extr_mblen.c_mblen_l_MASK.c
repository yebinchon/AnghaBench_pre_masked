
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int mbstate_t ;
typedef int locale_t ;
struct TYPE_2__ {size_t (* __mbrtowc ) (int *,char const*,size_t,int *) ;int mblen; } ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int ) ;
 size_t FUNC_2 (int *,char const*,size_t,int *) ;

int
FUNC_3(const char *VAR_0, size_t VAR_1, locale_t VAR_2)
{
 static const mbstate_t VAR_3;
 size_t VAR_4;
 FUNC_0(VAR_2);

 if (VAR_0 == ((void*)0)) {

  FUNC_1(VAR_2)->mblen = VAR_3;
  return (0);
 }
 VAR_4 = FUNC_1(VAR_2)->__mbrtowc(((void*)0), VAR_0, VAR_1,
     &(FUNC_1(VAR_2)->mblen));
 if (VAR_4 == (size_t)-1 || VAR_4 == (size_t)-2)
  return (-1);
 return ((int)VAR_4);
}
