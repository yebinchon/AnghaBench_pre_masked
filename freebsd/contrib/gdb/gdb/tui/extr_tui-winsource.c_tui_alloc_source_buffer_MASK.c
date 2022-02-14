
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int height; int width; void** content; } ;
struct tui_win_info {TYPE_3__ generic; } ;
struct TYPE_4__ {char* line; } ;
struct TYPE_5__ {TYPE_1__ source; } ;
struct tui_win_element {TYPE_2__ which_element; } ;
typedef enum tui_status { ____Placeholder_tui_status } tui_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int,int ) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int) ;

enum tui_status
FUNC_4 (struct tui_win_info *VAR_4)
{
  char *VAR_5;
  int VAR_6, VAR_7, VAR_8;
  enum tui_status VAR_9 = VAR_1;

  VAR_8 = VAR_4->generic.height;
  VAR_7 = VAR_4->generic.width - 1;





  if (VAR_4->generic.content == ((void*)0))
    {
      VAR_5 = (char *) FUNC_3 ((VAR_8 * VAR_7) * sizeof (char));
      if (VAR_5 == (char *) ((void*)0))
 FUNC_0 (
    "Unable to Allocate Memory for Source or Disassembly Display.\n",
      VAR_3);
      else
 {

   if ((VAR_4->generic.content =
   (void **) FUNC_1 (VAR_8, VAR_0)) == ((void*)0))
     {
       FUNC_2 (VAR_5);
       VAR_5 = (char *) ((void*)0);
       FUNC_0 (
     "Unable to Allocate Memory for Source or Disassembly Display.\n",
     VAR_3);
     }
 }
      for (VAR_6 = 0; VAR_6 < VAR_8; VAR_6++)
 ((struct tui_win_element *)
  VAR_4->generic.content[VAR_6])->which_element.source.line =
   VAR_5 + (VAR_7 * VAR_6);
      VAR_9 = VAR_2;
    }
  else
    VAR_9 = VAR_2;

  return VAR_9;
}
