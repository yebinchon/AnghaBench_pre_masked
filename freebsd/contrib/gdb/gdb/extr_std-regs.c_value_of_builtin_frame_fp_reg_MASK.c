
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct frame_info {int dummy; } ;


 int FUNC_0 (int ,char*,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (struct value*) ;
 int FUNC_3 (struct value*) ;
 struct value* FUNC_4 (int ) ;
 int VAR_1 ;
 int FUNC_5 (struct frame_info*) ;
 int FUNC_6 (char*,int ,int ) ;
 struct value* FUNC_7 (scalar_t__,struct frame_info*) ;

__attribute__((used)) static struct value *
FUNC_8 (struct frame_info *VAR_2)
{
  if (VAR_0 >= 0)






    return FUNC_7 (VAR_0, VAR_2);
  else
    {
      struct value *VAR_3 = FUNC_4 (VAR_1);
      char *VAR_4 = FUNC_2 (VAR_3);
      if (VAR_2 == ((void*)0))
 FUNC_6 (VAR_4, 0, FUNC_1 (FUNC_3 (VAR_3)));
      else
 FUNC_0 (VAR_1, VAR_4,
       FUNC_5 (VAR_2));
      return VAR_3;
    }
}
