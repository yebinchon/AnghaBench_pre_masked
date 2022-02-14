
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tsdn_t ;
typedef int tcache_t ;
typedef int extent_t ;
typedef int arena_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (int *) ;
 size_t FUNC_2 (int *) ;
 int FUNC_3 (int *,void*,size_t,int *,int *,int) ;
 void* FUNC_4 (int *,int *,size_t,size_t,int) ;
 int FUNC_5 (int *,int *,size_t,size_t,int) ;
 int FUNC_6 (void*,void*,size_t) ;

void *
FUNC_7(tsdn_t *VAR_2, arena_t *VAR_3, extent_t *VAR_4, size_t VAR_5,
    size_t VAR_6, bool VAR_7, tcache_t *VAR_8) {
 size_t VAR_9 = FUNC_2(VAR_4);


 FUNC_0(VAR_5 > 0 && VAR_5 <= VAR_0);

 FUNC_0(VAR_9 >= VAR_1 && VAR_5 >= VAR_1);


 if (!FUNC_5(VAR_2, VAR_4, VAR_5, VAR_5, VAR_7)) {
  return FUNC_1(VAR_4);
 }






 void *VAR_10 = FUNC_4(VAR_2, VAR_3, VAR_5, VAR_6,
     VAR_7);
 if (VAR_10 == ((void*)0)) {
  return ((void*)0);
 }

 size_t VAR_11 = (VAR_5 < VAR_9) ? VAR_5 : VAR_9;
 FUNC_6(VAR_10, FUNC_1(VAR_4), VAR_11);
 FUNC_3(VAR_2, FUNC_1(VAR_4), VAR_9, VAR_8, ((void*)0), 1);
 return VAR_10;
}
