
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
struct frame_info {int dummy; } ;


 int FUNC_0 (struct type*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,void const*,int) ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (struct frame_info*,int,char*) ;

__attribute__((used)) static void
FUNC_5 (struct frame_info *VAR_0, int VAR_1,
                        struct type *VAR_2, const void *VAR_3)
{
  char VAR_4[8];
  int VAR_5 = FUNC_0 (VAR_2);
  FUNC_1 (VAR_5 < 8);

  FUNC_3 (VAR_4, 0, 8);
  FUNC_2 (VAR_4, VAR_3, VAR_5);
  FUNC_4 (VAR_0, VAR_1, VAR_4);
}
