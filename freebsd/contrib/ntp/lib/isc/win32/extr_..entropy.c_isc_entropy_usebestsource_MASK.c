
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ isc_result_t ;
struct TYPE_4__ {int warn_keyboard; } ;
typedef TYPE_1__ isc_entropysource_t ;
typedef int isc_entropy_t ;
typedef scalar_t__ isc_boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_6 ;
 char* VAR_7 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int ,int ,int ,int *,TYPE_1__**) ;
 scalar_t__ FUNC_4 (int *,char const*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

isc_result_t
FUNC_5(isc_entropy_t *VAR_11, isc_entropysource_t **VAR_12,
     const char *VAR_13, int VAR_14)
{
 isc_result_t VAR_15;
 isc_result_t VAR_16 = VAR_4;
 isc_boolean_t VAR_17 = VAR_6;

 FUNC_1(FUNC_2(VAR_11));
 FUNC_1(VAR_12 != ((void*)0) && *VAR_12 == ((void*)0));
 FUNC_1(VAR_14 == VAR_2 ||
  VAR_14 == VAR_1 ||
  VAR_14 == VAR_0);
 if (VAR_13 != ((void*)0) && VAR_14 != VAR_2) {
  VAR_15 = FUNC_4(VAR_11, VAR_13);
  if (VAR_15 == VAR_5 &&
      VAR_14 == VAR_0)
   VAR_14 = VAR_1;
  if (VAR_15 != VAR_5 && VAR_17)
   return (VAR_15);

  VAR_16 = VAR_15;
 }

 if (VAR_14 != VAR_1) {
  VAR_15 = FUNC_3(VAR_11, VAR_9,
         VAR_8, VAR_10,
         ((void*)0), VAR_12);
  if (VAR_15 == VAR_5)
   (*VAR_12)->warn_keyboard =
    FUNC_0(VAR_14 ==
           VAR_0);

  if (VAR_16 != VAR_5)
   VAR_16 = VAR_15;
 }







 return (VAR_16);
}
