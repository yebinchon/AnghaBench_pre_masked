
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int isc_result_t ;
struct TYPE_2__ {int val; int * strval; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 TYPE_1__* VAR_2 ;
 scalar_t__ FUNC_1 (int *,char const*) ;

isc_result_t
FUNC_2(const char *VAR_3, int *VAR_4) {
 int VAR_5;

 FUNC_0(VAR_3 != ((void*)0));
 FUNC_0(VAR_4 != ((void*)0));

 for (VAR_5 = 0; VAR_2[VAR_5].strval != ((void*)0); VAR_5++) {
  if (FUNC_1(VAR_2[VAR_5].strval, VAR_3) == 0) {
   *VAR_4 = VAR_2[VAR_5].val;
   return (VAR_1);
  }
 }
 return (VAR_0);

}
