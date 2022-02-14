
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frame_unwind_cache {int regcache; } ;
struct frame_info {int dummy; } ;
typedef enum lval_type { ____Placeholder_lval_type } lval_type ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,void*) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void
FUNC_2 (struct frame_info *VAR_2,
         void **VAR_3,
         int VAR_4, int *VAR_5,
         enum lval_type *VAR_6, CORE_ADDR *VAR_7,
         int *VAR_8, void *VAR_9)
{
  struct frame_unwind_cache *VAR_10 = *VAR_3;


  *VAR_5 = 0;
  *VAR_6 = VAR_1;
  *VAR_7 = FUNC_1 (VAR_0, VAR_4);
  *VAR_8 = VAR_4;


  if (VAR_9 != ((void*)0))
    {




      FUNC_0 (VAR_10->regcache, VAR_4, VAR_9);
    }
}
