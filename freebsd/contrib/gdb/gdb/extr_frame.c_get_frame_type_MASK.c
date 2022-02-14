
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct frame_info {scalar_t__ type; TYPE_1__* unwind; int next; } ;
typedef enum frame_type { ____Placeholder_frame_type } frame_type ;
struct TYPE_2__ {scalar_t__ type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct frame_info*) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

enum frame_type
FUNC_3 (struct frame_info *VAR_5)
{


  if (!VAR_0
      && FUNC_0 (VAR_5))
    return VAR_1;





  if (VAR_5->unwind == ((void*)0) && !FUNC_2 (VAR_4))
    {


      VAR_5->unwind = FUNC_1 (VAR_5->next);





      VAR_5->type = VAR_5->unwind->type;
    }
  if (VAR_5->type == VAR_3)
    return VAR_2;
  else
    return VAR_5->type;
}
