
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frame_info {int dummy; } ;
struct frame_id {int dummy; } ;


 struct frame_info* FUNC_0 (struct frame_id) ;
 int FUNC_1 (struct frame_info*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int
FUNC_3 (void *VAR_0)
{
  struct frame_id *VAR_1 = (struct frame_id *) VAR_0;
  struct frame_info *VAR_2;

  VAR_2 = FUNC_0 (*VAR_1);



  if (VAR_2 == ((void*)0))
    {
      FUNC_2 ("Unable to restore previously selected frame.\n");
      return 0;
    }

  FUNC_1 (VAR_2);

  return (1);
}
