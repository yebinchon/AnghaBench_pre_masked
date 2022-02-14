
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frame_info {int dummy; } ;
struct frame_id {int dummy; } ;


 scalar_t__ FUNC_0 (struct frame_id,struct frame_id) ;
 scalar_t__ FUNC_1 (struct frame_id,struct frame_id) ;
 int FUNC_2 (struct frame_id) ;
 struct frame_info* FUNC_3 () ;
 struct frame_id FUNC_4 (struct frame_info*) ;
 struct frame_info* FUNC_5 (struct frame_info*) ;

struct frame_info *
FUNC_6 (struct frame_id VAR_0)
{
  struct frame_info *VAR_1;



  if (!FUNC_2 (VAR_0))
    return ((void*)0);

  for (VAR_1 = FUNC_3 ();
       VAR_1 != ((void*)0);
       VAR_1 = FUNC_5 (VAR_1))
    {
      struct frame_id VAR_2 = FUNC_4 (VAR_1);
      if (FUNC_0 (VAR_0, VAR_2))

 return VAR_1;
      if (FUNC_1 (VAR_0, VAR_2))

 return ((void*)0);




    }
  return ((void*)0);
}
