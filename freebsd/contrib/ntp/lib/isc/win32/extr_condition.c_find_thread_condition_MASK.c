
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int isc_result_t ;
struct TYPE_10__ {unsigned long th; } ;
typedef TYPE_1__ isc_condition_thread_t ;
struct TYPE_11__ {int threadlist; } ;
typedef TYPE_2__ isc_condition_t ;


 TYPE_1__* FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (TYPE_1__*,int ) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int FUNC_3 (unsigned long,TYPE_2__*,TYPE_1__**) ;

__attribute__((used)) static isc_result_t
FUNC_4(unsigned long VAR_2, isc_condition_t *VAR_3,
        isc_condition_thread_t **VAR_4)
{
 isc_condition_thread_t *VAR_5;

 FUNC_2(VAR_4 != ((void*)0) && *VAR_4 == ((void*)0));




 for (VAR_5 = FUNC_0(VAR_3->threadlist);
      VAR_5 != ((void*)0);
      VAR_5 = FUNC_1(VAR_5, VAR_1)) {

  if (VAR_5->th == VAR_2) {
   *VAR_4 = VAR_5;
   return (VAR_0);
  }
 }




 return (FUNC_3(VAR_2, VAR_3, VAR_4));
}
