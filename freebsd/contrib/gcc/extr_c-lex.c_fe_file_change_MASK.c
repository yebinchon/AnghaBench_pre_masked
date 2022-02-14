
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct line_map {scalar_t__ reason; int start_location; int sysp; int to_line; int to_file; } ;
struct TYPE_2__ {int (* end_source_file ) (int) ;int (* start_source_file ) (int,int ) ;} ;


 int FUNC_0 (struct line_map const*) ;
 int FUNC_1 (struct line_map const*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct line_map const*) ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 () ;
 int FUNC_4 (int,...) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,char*) ;

void
FUNC_9 (const struct line_map *VAR_9)
{
  if (VAR_9 == ((void*)0))
    return;

  if (VAR_9->reason == VAR_0)
    {


      if (!FUNC_2 (VAR_9))
 {






   int VAR_10 = FUNC_0 (VAR_9 - 1);

   VAR_6 = VAR_10;
   FUNC_4 (VAR_9->to_file, 1);

   (*VAR_3->start_source_file) (VAR_10, VAR_9->to_file);

   if (VAR_2)
     ++VAR_2;
   else if (VAR_9->sysp == 2)
     {
       VAR_2 = 1;
       ++VAR_8;
     }

 }
    }
  else if (VAR_9->reason == VAR_1)
    {

      if (VAR_2 && --VAR_2 == 0)
 {
   if (VAR_9->sysp == 2)
     FUNC_8 (0, "badly nested C headers from preprocessor");
   --VAR_8;
 }

      FUNC_3 ();

      (*VAR_3->end_source_file) (VAR_9->to_line);
    }

  FUNC_7 (VAR_9->to_file);
  VAR_4 = VAR_9->sysp != 0;



  VAR_5 = VAR_9->to_file;
  VAR_6 = VAR_9->to_line;

}
