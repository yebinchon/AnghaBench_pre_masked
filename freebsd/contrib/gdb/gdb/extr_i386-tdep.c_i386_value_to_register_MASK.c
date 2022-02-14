
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
struct frame_info {int dummy; } ;


 int FUNC_0 (struct type*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct frame_info*,int,struct type*,void const*) ;
 int FUNC_5 (struct frame_info*,int,char const*) ;
 int FUNC_6 (int ,int) ;

__attribute__((used)) static void
FUNC_7 (struct frame_info *VAR_1, int VAR_2,
   struct type *VAR_3, const void *VAR_4)
{
  int VAR_5 = FUNC_0 (VAR_3);
  const char *VAR_6 = VAR_4;

  if (FUNC_2 (VAR_2))
    {
      FUNC_4 (VAR_1, VAR_2, VAR_3, VAR_4);
      return;
    }



  FUNC_1 (VAR_5 > 4 && VAR_5 % 4 == 0);

  while (VAR_5 > 0)
    {
      FUNC_1 (VAR_2 != -1);
      FUNC_1 (FUNC_6 (VAR_0, VAR_2) == 4);

      FUNC_5 (VAR_1, VAR_2, VAR_6);
      VAR_2 = FUNC_3 (VAR_2);
      VAR_5 -= 4;
      VAR_6 += 4;
    }
}
