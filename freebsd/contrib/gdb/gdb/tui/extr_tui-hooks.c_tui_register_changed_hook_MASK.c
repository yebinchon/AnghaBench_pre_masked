
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frame_info {int dummy; } ;


 struct frame_info* VAR_0 ;
 int FUNC_0 (struct frame_info*) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_1 (int VAR_2)
{
  struct frame_info *VAR_3;

  VAR_3 = VAR_0;
  if (VAR_3 && VAR_1 == 0)
    {
      VAR_1 = 1;
      FUNC_0 (VAR_3);
      VAR_1 = 0;
    }
}
