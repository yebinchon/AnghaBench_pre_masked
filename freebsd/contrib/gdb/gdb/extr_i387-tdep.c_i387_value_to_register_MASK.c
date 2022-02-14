
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
struct frame_info {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct type*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (void const*,struct type*,char*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct frame_info*,int,char*) ;
 int FUNC_5 (char*) ;

void
FUNC_6 (struct frame_info *VAR_3, int VAR_4,
   struct type *VAR_5, const void *VAR_6)
{
  char VAR_7[VAR_0];

  FUNC_2 (FUNC_3 (VAR_4));


  if (FUNC_0 (VAR_5) != VAR_1)
    {
      FUNC_5 ("Cannot convert non-floating-point type "
        "to floating-point register value.");
      return;
    }



  FUNC_1 (VAR_6, VAR_5, VAR_7, VAR_2);
  FUNC_4 (VAR_3, VAR_4, VAR_7);
}
