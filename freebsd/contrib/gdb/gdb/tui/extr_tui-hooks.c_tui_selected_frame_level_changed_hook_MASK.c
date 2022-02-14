
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symtab {int dummy; } ;
struct frame_info {int dummy; } ;


 int VAR_0 ;
 struct frame_info* VAR_1 ;
 struct symtab* FUNC_0 (int ) ;
 int FUNC_1 (struct frame_info*) ;
 int FUNC_2 (struct symtab*) ;
 int FUNC_3 (struct frame_info*) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_2 ;
 int FUNC_5 (struct frame_info*) ;

__attribute__((used)) static void
FUNC_6 (int VAR_3)
{
  struct frame_info *VAR_4;

  VAR_4 = VAR_1;


  if (VAR_4)
    {
      struct symtab *VAR_5;

      VAR_5 = FUNC_0 (FUNC_1 (VAR_4));




      if (VAR_5)
        FUNC_2 (VAR_5);


      FUNC_5 (VAR_4);


      if (FUNC_4 (VAR_0))
        {
          VAR_2 = 1;
          FUNC_3 (VAR_4);
          VAR_2 = 0;
        }
    }
}
