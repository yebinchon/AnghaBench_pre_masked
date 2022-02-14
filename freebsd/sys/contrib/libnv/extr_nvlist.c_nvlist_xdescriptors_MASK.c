
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int nvpair_t ;
struct TYPE_9__ {scalar_t__ nvl_error; } ;
typedef TYPE_1__ nvlist_t ;


 int FUNC_0 (TYPE_1__ const*) ;




 int FUNC_1 (int) ;
 TYPE_1__* FUNC_2 (TYPE_1__ const*,void**) ;
 int * FUNC_3 (TYPE_1__ const*,int*,void**) ;
 int FUNC_4 (int *) ;
 int* FUNC_5 (int *,size_t*) ;
 TYPE_1__* FUNC_6 (int *) ;
 TYPE_1__** FUNC_7 (int *,size_t*) ;

__attribute__((used)) static int *
FUNC_8(const nvlist_t *VAR_0, int *VAR_1)
{
 void *VAR_2;
 nvpair_t *VAR_3;
 int VAR_4;

 FUNC_0(VAR_0);
 FUNC_1(VAR_0->nvl_error == 0);

 VAR_2 = ((void*)0);
 do {
  while (FUNC_3(VAR_0, &VAR_4, &VAR_2) != ((void*)0)) {
   VAR_3 = VAR_2;
   switch (VAR_4) {
   case 131:
    *VAR_1 = FUNC_4(VAR_3);
    VAR_1++;
    break;
   case 130:
       {
    const int *VAR_5;
    size_t VAR_6;
    unsigned int VAR_7;

    VAR_5 = FUNC_5(VAR_3,
        &VAR_6);
    for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
     *VAR_1 = VAR_5[VAR_7];
     VAR_1++;
    }
    break;
       }
   case 129:
    VAR_0 = FUNC_6(VAR_3);
    VAR_2 = ((void*)0);
    break;
   case 128:
       {
    const nvlist_t * const *VAR_8;
    size_t VAR_9;

    VAR_8 = FUNC_7(VAR_3, &VAR_9);
    FUNC_1(VAR_8 != ((void*)0));
    FUNC_1(VAR_9 > 0);

    VAR_0 = VAR_8[0];
    VAR_2 = ((void*)0);
    break;
       }
   }
  }
 } while ((VAR_0 = FUNC_2(VAR_0, &VAR_2)) != ((void*)0));

 return (VAR_1);
}
