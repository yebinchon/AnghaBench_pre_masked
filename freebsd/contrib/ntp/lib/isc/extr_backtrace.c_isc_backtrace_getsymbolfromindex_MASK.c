
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int isc_result_t ;
struct TYPE_2__ {void* addr; char* symbol; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;

isc_result_t
FUNC_1(int VAR_4, const void **VAR_5,
     const char **VAR_6)
{
 FUNC_0(VAR_5 != ((void*)0) && *VAR_5 == ((void*)0));
 FUNC_0(VAR_6 != ((void*)0) && *VAR_6 == ((void*)0));

 if (VAR_4 < 0 || VAR_4 >= VAR_2)
  return (VAR_0);

 *VAR_5 = VAR_3[VAR_4].addr;
 *VAR_6 = VAR_3[VAR_4].symbol;
 return (VAR_1);
}
