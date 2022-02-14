
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ id; int * name; } ;
typedef TYPE_1__ isc_logcategory_t ;
struct TYPE_8__ {TYPE_1__* categories; } ;
typedef TYPE_2__ isc_log_t ;


 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (int *,char const*) ;

isc_logcategory_t *
FUNC_4(isc_log_t *VAR_1, const char *VAR_2) {
 isc_logcategory_t *VAR_3;

 FUNC_1(FUNC_2(VAR_1));
 FUNC_1(VAR_2 != ((void*)0));

 for (VAR_3 = VAR_1->categories; VAR_3->name != ((void*)0); )
  if (VAR_3->id == VAR_0)




   FUNC_0(VAR_3->name, VAR_3);
  else {
   if (FUNC_3(VAR_3->name, VAR_2) == 0)
    return (VAR_3);
   VAR_3++;
  }

 return (((void*)0));
}
