
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rif_cache {int last_used; struct rif_cache* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rif_cache*) ;
 int FUNC_1 (int *,unsigned long) ;
 int VAR_2 ;
 struct rif_cache** VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_5 (unsigned long,int) ;

__attribute__((used)) static void FUNC_6(unsigned long VAR_6)
{
 int VAR_7;
 unsigned long VAR_8, VAR_9 = VAR_1 + VAR_5/2;

 FUNC_2(&VAR_2, VAR_8);

 for(VAR_7 =0; VAR_7 < VAR_0; VAR_7++) {
  struct rif_cache *VAR_10, **VAR_11;

  VAR_11 = VAR_3+VAR_7;
  while((VAR_10=*VAR_11) != ((void*)0)) {
   unsigned long VAR_12
    = VAR_10->last_used + VAR_5;

   if (FUNC_5(VAR_12, VAR_1)) {
    *VAR_11 = VAR_10->next;
    FUNC_0(VAR_10);
   } else {
    VAR_11 = &VAR_10->next;

    if (FUNC_4(VAR_12, VAR_9))
     VAR_9 = VAR_12;
   }
  }
 }

 FUNC_3(&VAR_2, VAR_8);

 FUNC_1(&VAR_4, VAR_9);

}
