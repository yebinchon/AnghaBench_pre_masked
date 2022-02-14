
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tsdn_t ;
typedef int szind_t ;
typedef int extent_t ;
typedef int extent_hooks_t ;
typedef int arena_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int * FUNC_1 (int *,int *,int **,void*,size_t,size_t,size_t,int,int ,int*,int*) ;
 int * FUNC_2 (int *,int *,int **,void*,size_t,size_t,size_t,int,int ,int*,int*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int **) ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ,int ) ;

extent_t *
FUNC_7(tsdn_t *VAR_2, arena_t *VAR_3,
    extent_hooks_t **VAR_4, void *VAR_5, size_t VAR_6, size_t VAR_7,
    size_t VAR_8, bool VAR_9, szind_t VAR_10, bool *VAR_11, bool *VAR_12) {
 FUNC_6(FUNC_5(VAR_2),
     VAR_0, 0);

 FUNC_4(VAR_3, VAR_4);

 extent_t *VAR_13 = FUNC_1(VAR_2, VAR_3, VAR_4,
     VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12);
 if (VAR_13 == ((void*)0)) {
  if (VAR_1 && VAR_5 != ((void*)0)) {






   return ((void*)0);
  }
  VAR_13 = FUNC_2(VAR_2, VAR_3, VAR_4,
      VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12);
 }

 FUNC_0(VAR_13 == ((void*)0) || FUNC_3(VAR_13));
 return VAR_13;
}
