
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frame_info {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,struct frame_info*,int *,int ) ;
 struct frame_info* FUNC_1 (int ) ;
 struct frame_info* VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

struct frame_info *
FUNC_3 (void)
{





  if (!VAR_4)
    FUNC_2 ("No registers.");
  if (!VAR_5)
    FUNC_2 ("No stack.");
  if (!VAR_3)
    FUNC_2 ("No memory.");
  if (VAR_1 == ((void*)0))
    {
      struct frame_info *VAR_8 =
 FUNC_1 (VAR_2);
      if (FUNC_0 (VAR_6, VAR_7, VAR_8,
       ((void*)0), VAR_0) != 0)
 {


   VAR_1 = VAR_8;
 }
    }
  return VAR_1;
}
