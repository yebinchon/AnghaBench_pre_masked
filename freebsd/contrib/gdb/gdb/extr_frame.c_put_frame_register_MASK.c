
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdbarch {int dummy; } ;
struct frame_info {int dummy; } ;
typedef enum lval_type { ____Placeholder_lval_type } lval_type ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct frame_info*,int,int*,int*,int *,int*,int *) ;
 struct gdbarch* FUNC_2 (struct frame_info*) ;


 int FUNC_3 (char*,void const*,int ) ;
 int FUNC_4 (int ,int,void const*) ;
 int FUNC_5 (struct gdbarch*,int) ;
 int FUNC_6 (int ,char*,int ) ;

void
FUNC_7 (struct frame_info *VAR_2, int VAR_3, const void *VAR_4)
{
  struct gdbarch *VAR_5 = FUNC_2 (VAR_2);
  int VAR_6;
  int VAR_7;
  enum lval_type VAR_8;
  CORE_ADDR VAR_9;
  FUNC_1 (VAR_2, VAR_3, &VAR_7, &VAR_8, &VAR_9, &VAR_6, ((void*)0));
  if (VAR_7)
    FUNC_0 ("Attempt to assign to a value that was optimized out.");
  switch (VAR_8)
    {
    case 129:
      {


 char VAR_10[VAR_0];
 FUNC_3 (VAR_10, VAR_4, FUNC_5 (VAR_5, VAR_3));
 FUNC_6 (VAR_9, VAR_10, FUNC_5 (VAR_5, VAR_3));
 break;
      }
    case 128:
      FUNC_4 (VAR_1, VAR_6, VAR_4);
      break;
    default:
      FUNC_0 ("Attempt to assign to an unmodifiable value.");
    }
}
