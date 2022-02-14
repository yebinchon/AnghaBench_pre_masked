
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
 size_t VAR_3 ;
 void* FUNC_0 (int *,int *,size_t,int ,int,int *,int) ;
 void* FUNC_1 (int *,int *,size_t,int) ;
 void* FUNC_2 (int *,int *,size_t,size_t,int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (size_t) ;

void *
FUNC_5(tsdn_t *VAR_4, arena_t *VAR_5, size_t VAR_6, size_t VAR_7,
    bool VAR_8, tcache_t *VAR_9) {
 void *VAR_10;

 if (VAR_6 <= VAR_3 && (VAR_7 < VAR_1 || (VAR_7 == VAR_1
     && (VAR_6 & VAR_2) == 0))) {

  VAR_10 = FUNC_0(VAR_4, VAR_5, VAR_6, FUNC_4(VAR_6),
      VAR_8, VAR_9, 1);
 } else {
  if (FUNC_3(VAR_7 <= VAR_0)) {
   VAR_10 = FUNC_1(VAR_4, VAR_5, VAR_6, VAR_8);
  } else {
   VAR_10 = FUNC_2(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
  }
 }
 return VAR_10;
}
