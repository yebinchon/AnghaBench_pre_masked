
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frame_info {int dummy; } ;
struct frame_id {int dummy; } ;
struct dummy_frame {int regcache; } ;
typedef enum lval_type { ____Placeholder_lval_type } lval_type ;
typedef scalar_t__ CORE_ADDR ;


 int FUNC_0 (struct frame_info*,void**,struct frame_id*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int,void*) ;

__attribute__((used)) static void
FUNC_3 (struct frame_info *VAR_1,
      void **VAR_2,
      int VAR_3, int *VAR_4,
      enum lval_type *VAR_5, CORE_ADDR *VAR_6,
      int *VAR_7, void *VAR_8)
{
  struct dummy_frame *VAR_9;
  struct frame_id VAR_10;



  FUNC_0 (VAR_1, VAR_2, &VAR_10);
  VAR_9 = (*VAR_2);
  FUNC_1 (VAR_9 != ((void*)0));



  *VAR_4 = 0;
  *VAR_5 = VAR_0;
  *VAR_6 = 0;
  *VAR_7 = -1;


  if (VAR_8 != ((void*)0))
    {




      FUNC_2 (VAR_9->regcache, VAR_3, VAR_8);
    }
}
