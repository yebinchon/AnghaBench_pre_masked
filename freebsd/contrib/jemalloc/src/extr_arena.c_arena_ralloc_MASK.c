
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tsdn_t ;
typedef int tcache_t ;
typedef int arena_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 void* FUNC_0 (int *,int *,size_t,size_t,int,int *) ;
 int FUNC_1 (int *,void*,size_t,size_t,int ,int) ;
 int FUNC_2 (int *,void*) ;
 int FUNC_3 (int *,void*,size_t,int *,int *,int) ;
 void* FUNC_4 (int *,int *,int ,size_t,size_t,int,int *) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (void*,void*,size_t) ;
 size_t FUNC_7 (size_t) ;
 scalar_t__ FUNC_8 (int) ;

void *
FUNC_9(tsdn_t *VAR_3, arena_t *VAR_4, void *VAR_5, size_t VAR_6,
    size_t VAR_7, size_t VAR_8, bool VAR_9, tcache_t *VAR_10) {
 size_t VAR_11 = FUNC_7(VAR_7);
 if (FUNC_8(VAR_11 == 0 || VAR_7 > VAR_0)) {
  return ((void*)0);
 }

 if (FUNC_5(VAR_11 <= VAR_2)) {

  if (!FUNC_1(VAR_3, VAR_5, VAR_6, VAR_11, 0, VAR_9)) {
   return VAR_5;
  }
 }

 if (VAR_6 >= VAR_1 && VAR_11 >= VAR_1) {
  return FUNC_4(VAR_3, VAR_4, FUNC_2(VAR_3, VAR_5), VAR_11,
      VAR_8, VAR_9, VAR_10);
 }





 void *VAR_12 = FUNC_0(VAR_3, VAR_4, VAR_11, VAR_8,
     VAR_9, VAR_10);
 if (VAR_12 == ((void*)0)) {
  return ((void*)0);
 }






 size_t VAR_13 = (VAR_11 < VAR_6) ? VAR_11 : VAR_6;
 FUNC_6(VAR_12, VAR_5, VAR_13);
 FUNC_3(VAR_3, VAR_5, VAR_6, VAR_10, ((void*)0), 1);
 return VAR_12;
}
