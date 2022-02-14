
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
struct frame_info {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct type*) ;
 int FUNC_1 (void*,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct frame_info*,int,char*) ;
 int FUNC_4 (void*,char*,int) ;

__attribute__((used)) static void
FUNC_5 (struct frame_info *VAR_1, int VAR_2,
    struct type *VAR_3, void *VAR_4)
{
  char VAR_5[VAR_0];
  FUNC_3 (VAR_1, VAR_2, VAR_5);
  switch (FUNC_0 (VAR_3))
    {
    case 4:
      FUNC_1 (VAR_4, VAR_5);
      break;
    case 8:
      FUNC_4 (VAR_4, VAR_5, 8);
      break;
    default:
      FUNC_2 ("Cannot retrieve value from floating point register");
    }
}
