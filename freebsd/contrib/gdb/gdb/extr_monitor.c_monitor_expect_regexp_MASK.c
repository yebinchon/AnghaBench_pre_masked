
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct re_pattern_buffer {int dummy; } ;


 int VAR_0 ;
 char* FUNC_0 (int) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct re_pattern_buffer*,char*,int,int ,int,int *) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_5 (struct re_pattern_buffer *VAR_2, char *VAR_3, int VAR_4)
{
  char *VAR_5;
  char *VAR_6;
  FUNC_2 ("MON Expecting regexp\n");
  if (VAR_3)
    VAR_5 = VAR_3;
  else
    {
      VAR_5 = FUNC_0 (VAR_0);
      VAR_4 = VAR_0;
    }

  VAR_6 = VAR_5;
  while (1)
    {
      int VAR_7;

      if (VAR_6 - VAR_5 >= VAR_4)
 {




   FUNC_1 (VAR_5, VAR_5 + VAR_4 / 2, VAR_4 / 2);
   VAR_6 = VAR_5 + VAR_4 / 2;
 }

      *VAR_6++ = FUNC_4 (VAR_1);

      VAR_7 = FUNC_3 (VAR_2, VAR_5, VAR_6 - VAR_5, 0, VAR_6 - VAR_5, ((void*)0));
      if (VAR_7 >= 0)
 return 1;
    }
}
