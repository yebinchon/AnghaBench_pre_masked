
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
 int FUNC_1 (char*,int ,void*,struct type*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct frame_info*,int,char*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*) ;

void
FUNC_6 (struct frame_info *VAR_3, int VAR_4,
   struct type *VAR_5, void *VAR_6)
{
  char VAR_7[VAR_0];

  FUNC_2 (FUNC_4 (VAR_4));


  if (FUNC_0 (VAR_5) != VAR_1)
    {
      FUNC_5 ("Cannot convert floating-point register value "
        "to non-floating-point type.");
      return;
    }



  FUNC_3 (VAR_3, VAR_4, VAR_7);
  FUNC_1 (VAR_7, VAR_2, VAR_6, VAR_5);
}
