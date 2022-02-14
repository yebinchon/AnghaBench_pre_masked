
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frame_info {int dummy; } ;
struct amd64_frame_cache {int* saved_regs; scalar_t__ saved_sp; } ;
typedef enum lval_type { ____Placeholder_lval_type } lval_type ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 struct amd64_frame_cache* FUNC_0 (struct frame_info*,void**) ;
 int VAR_2 ;
 int FUNC_1 (struct frame_info*,int,int*,int*,int*,int*,void*) ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int,void*,int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (void*,int,scalar_t__) ;

__attribute__((used)) static void
FUNC_6 (struct frame_info *VAR_5, void **VAR_6,
      int VAR_7, int *VAR_8,
      enum lval_type *VAR_9, CORE_ADDR *VAR_10,
      int *VAR_11, void *VAR_12)
{
  struct amd64_frame_cache *VAR_13 =
    FUNC_0 (VAR_5, VAR_6);

  FUNC_2 (VAR_7 >= 0);

  if (VAR_7 == VAR_1 && VAR_13->saved_sp)
    {
      *VAR_8 = 0;
      *VAR_9 = VAR_4;
      *VAR_10 = 0;
      *VAR_11 = -1;
      if (VAR_12)
 {

   FUNC_5 (VAR_12, 8, VAR_13->saved_sp);
 }
      return;
    }

  if (VAR_7 < VAR_0 && VAR_13->saved_regs[VAR_7] != -1)
    {
      *VAR_8 = 0;
      *VAR_9 = VAR_3;
      *VAR_10 = VAR_13->saved_regs[VAR_7];
      *VAR_11 = -1;
      if (VAR_12)
 {

   FUNC_3 (*VAR_10, VAR_12,
         FUNC_4 (VAR_2, VAR_7));
 }
      return;
    }

  FUNC_1 (VAR_5, VAR_7,
    VAR_8, VAR_9, VAR_10, VAR_11, VAR_12);
}
