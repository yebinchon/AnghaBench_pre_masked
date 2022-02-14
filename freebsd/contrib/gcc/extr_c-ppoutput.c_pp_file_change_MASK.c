
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct line_map {scalar_t__ reason; int start_location; } ;
struct TYPE_4__ {int preprocessed; } ;
struct TYPE_3__ {scalar_t__ first_time; } ;


 struct line_map* FUNC_0 (int *,struct line_map const*) ;
 int FUNC_1 (struct line_map const*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* FUNC_2 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 int FUNC_4 (int ,char const*) ;

void
FUNC_5 (const struct line_map *VAR_6)
{
  const char *VAR_7 = "";

  if (VAR_2)
    return;

  if (VAR_6 != ((void*)0))
    {
      if (VAR_5.first_time)
 {

   if (!FUNC_2 (VAR_4)->preprocessed)
     FUNC_4 (VAR_6->start_location, VAR_7);
   VAR_5.first_time = 0;
 }
      else
 {

   if (VAR_6->reason == VAR_0)
     {
       const struct line_map *VAR_8 = FUNC_0 (&VAR_3, VAR_6);
       FUNC_3 (FUNC_1 (VAR_8));
     }
   if (VAR_6->reason == VAR_0)
     VAR_7 = " 1";
   else if (VAR_6->reason == VAR_1)
     VAR_7 = " 2";
   FUNC_4 (VAR_6->start_location, VAR_7);
 }
    }
}
