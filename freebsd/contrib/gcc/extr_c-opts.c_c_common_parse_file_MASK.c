
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* end_source_file ) (int ) ;scalar_t__ start_end_main_source_file; int (* start_source_file ) (int ,int ) ;} ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 TYPE_1__* VAR_0 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int * VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 int VAR_4 ;
 int FUNC_10 (int ,char*) ;
 int VAR_5 ;

void
FUNC_11 (int VAR_6)
{
  unsigned int VAR_7;






  if (VAR_6)
    FUNC_10 (0, "YYDEBUG was not defined at build time, -dy ignored");


  VAR_7 = 0;
  for (;;)
    {

      if (VAR_0->start_end_main_source_file)
 (*VAR_0->start_source_file) (0, VAR_4);
      FUNC_4 ();
      FUNC_5 ();
      FUNC_7 ();
      FUNC_0 ();
      FUNC_3 ();
      FUNC_6 ();

      if (VAR_0->start_end_main_source_file)
 (*VAR_0->end_source_file) (0);
      if (++VAR_7 >= VAR_2)
 break;
      FUNC_2 (VAR_3);
      VAR_4
 = FUNC_1 (VAR_3, VAR_1[VAR_7]);


      if (!VAR_4)
 break;
    }
}
