
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


struct nvlist_header {int dummy; } ;
typedef int nvpair_t ;
struct TYPE_11__ {scalar_t__ nvl_error; } ;
typedef TYPE_1__ nvlist_t ;


 int FUNC_0 (TYPE_1__ const*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int) ;
 int * FUNC_2 (TYPE_1__ const*) ;
 TYPE_1__* FUNC_3 (TYPE_1__ const*,void**) ;
 scalar_t__ FUNC_4 (TYPE_1__ const*) ;
 int * FUNC_5 (TYPE_1__ const*,int const*) ;
 TYPE_1__* FUNC_6 (int const*) ;
 TYPE_1__** FUNC_7 (int const*,size_t*) ;
 int FUNC_8 () ;
 int FUNC_9 (int const*) ;
 scalar_t__ FUNC_10 (int const*) ;
 scalar_t__ FUNC_11 (int const*) ;
 scalar_t__ FUNC_12 (int ) ;

size_t
FUNC_13(const nvlist_t *VAR_2)
{
 const nvlist_t *VAR_3;
 const nvlist_t * const *VAR_4;
 const nvpair_t *VAR_5, *VAR_6;
 void *VAR_7;
 size_t VAR_8, VAR_9;
 unsigned int VAR_10;

 FUNC_0(VAR_2);
 FUNC_1(VAR_2->nvl_error == 0);

 VAR_8 = sizeof(struct nvlist_header);
 VAR_5 = FUNC_2(VAR_2);
 while (VAR_5 != ((void*)0)) {
  VAR_8 += FUNC_8();
  VAR_8 += FUNC_12(FUNC_9(VAR_5)) + 1;
  if (FUNC_11(VAR_5) == VAR_0) {
   VAR_8 += sizeof(struct nvlist_header);
   VAR_8 += FUNC_8() + 1;
   VAR_3 = FUNC_6(VAR_5);
   FUNC_1(VAR_3->nvl_error == 0);
   VAR_6 = FUNC_2(VAR_3);
   if (VAR_6 != ((void*)0)) {
    VAR_2 = VAR_3;
    VAR_5 = VAR_6;
    continue;
   }
  } else if (FUNC_11(VAR_5) == VAR_1) {
   VAR_4 = FUNC_7(VAR_5, &VAR_9);
   FUNC_1(VAR_9 > 0);

   VAR_8 += (FUNC_8() + 1) * VAR_9;
   VAR_8 += sizeof(struct nvlist_header) * VAR_9;

   VAR_3 = ((void*)0);
   VAR_6 = ((void*)0);
   for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++) {
    FUNC_1(VAR_4[VAR_10]->nvl_error == 0);
    VAR_6 = FUNC_2(VAR_4[VAR_10]);
    if (VAR_6 != ((void*)0)) {
     VAR_3 = VAR_4[VAR_10];
     break;
    }
   }
   if (VAR_6 != ((void*)0)) {
    VAR_5 = VAR_6;
    VAR_2 = VAR_3;
    continue;
   }

  } else {
   VAR_8 += FUNC_10(VAR_5);
  }

  while ((VAR_5 = FUNC_5(VAR_2, VAR_5)) == ((void*)0)) {
   do {
    VAR_7 = ((void*)0);
    VAR_2 = FUNC_3(VAR_2, &VAR_7);
    if (VAR_2 == ((void*)0))
     goto out;
    if (FUNC_4(VAR_2) && VAR_7 == ((void*)0)) {
     VAR_5 = FUNC_2(VAR_2);
    } else {
     VAR_5 = VAR_7;
    }
   } while (VAR_5 == ((void*)0));
   if (FUNC_4(VAR_2) && VAR_7 == ((void*)0))
    break;
  }
 }

out:
 return (VAR_8);
}
