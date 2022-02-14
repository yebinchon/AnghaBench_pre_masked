
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int mbstate_t ;
typedef int locale_t ;
struct TYPE_2__ {size_t (* __mbrtowc ) (int *,char const*,size_t,int *) ;int mbrlen; } ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int ) ;
 size_t FUNC_2 (int *,char const*,size_t,int *) ;

size_t
FUNC_3(const char * __restrict VAR_0, size_t VAR_1, mbstate_t * __restrict VAR_2, locale_t VAR_3)
{
 FUNC_0(VAR_3);
 if (VAR_2 == ((void*)0))
  VAR_2 = &(FUNC_1(VAR_3)->mbrlen);
 return (FUNC_1(VAR_3)->__mbrtowc(((void*)0), VAR_0, VAR_1, VAR_2));
}
