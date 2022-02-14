
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
struct frame_info {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct type*) ;
 int FUNC_1 (char*,void const*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,void const*,int) ;
 int FUNC_4 (struct frame_info*,int,char*) ;

__attribute__((used)) static void
FUNC_5 (struct frame_info *VAR_1, int VAR_2,
    struct type *VAR_3, const void *VAR_4)
{
  char VAR_5[VAR_0];
  switch (FUNC_0 (VAR_3))
    {
    case 4:
      FUNC_1 (VAR_5, VAR_4);
      break;
    case 8:
      FUNC_3 (VAR_5, VAR_4, 8);
      break;
    default:
      FUNC_2 ("Cannot store value in floating point register");
    }
  FUNC_4 (VAR_1, VAR_2, VAR_5);
}
