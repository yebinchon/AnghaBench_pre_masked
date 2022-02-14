
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frame_info {int dummy; } ;


 scalar_t__ VAR_0 ;
 char* FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 char* FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (char*,int,char*) ;
 int FUNC_3 (struct frame_info*,int,char*) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static void
FUNC_6 (struct frame_info *VAR_3, int VAR_4,
         char *VAR_5)
{
  int VAR_6 = FUNC_5 (VAR_2, VAR_4);
  char *VAR_7 = FUNC_1 (VAR_6);

  if (!FUNC_3 (VAR_3, VAR_4, VAR_7))
    FUNC_2 ("can't read register %d (%s)", VAR_4, FUNC_0 (VAR_4));
  if (VAR_6 == 8)
    {


      int VAR_8;

      if (VAR_1 == VAR_0)
 VAR_8 = 4;
      else
 VAR_8 = 0;

      FUNC_4 (VAR_5, VAR_7 + VAR_8, 4);
    }
  else
    {
      FUNC_4 (VAR_5, VAR_7, 4);
    }
}
