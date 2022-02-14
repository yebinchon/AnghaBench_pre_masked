
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int content_size; scalar_t__* content; int height; } ;
struct TYPE_6__ {struct tui_gen_win_info* execution_info; } ;
struct TYPE_7__ {TYPE_1__ source_info; } ;
struct tui_win_info {TYPE_5__ generic; TYPE_2__ detail; } ;
struct TYPE_8__ {int has_break; scalar_t__ is_exec_point; } ;
struct TYPE_9__ {char* simple_string; TYPE_3__ source; } ;
struct tui_win_element {TYPE_4__ which_element; } ;
struct tui_gen_win_info {void** content; int content_size; int type; } ;
typedef enum tui_status { ____Placeholder_tui_status } tui_status ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (char*,char,int) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (struct tui_win_info*,int) ;

enum tui_status
FUNC_3 (struct tui_win_info * VAR_10)
{
  enum tui_status VAR_11 = VAR_9;

  if (VAR_10->detail.source_info.execution_info != (struct tui_gen_win_info *) ((void*)0))
    {
      struct tui_gen_win_info * VAR_12 = VAR_10->detail.source_info.execution_info;

      if (VAR_12->content == ((void*)0))
 VAR_12->content =
   (void **) FUNC_1 (VAR_10->generic.height,
      VAR_12->type);
      if (VAR_12->content != ((void*)0))
 {
   int VAR_13;

          FUNC_2 (VAR_10, 1);
   for (VAR_13 = 0; VAR_13 < VAR_10->generic.content_size; VAR_13++)
     {
       struct tui_win_element * VAR_14;
       struct tui_win_element * VAR_15;
              int VAR_16;

       VAR_14 = (struct tui_win_element *) VAR_12->content[VAR_13];
       VAR_15 = (struct tui_win_element *) VAR_10->generic.content[VAR_13];

              FUNC_0(VAR_14->which_element.simple_string, ' ',
                     sizeof(VAR_14->which_element.simple_string));
              VAR_14->which_element.simple_string[VAR_6 - 1] = 0;



              VAR_16 = VAR_15->which_element.source.has_break;
              if (VAR_16 & VAR_4)
                VAR_14->which_element.simple_string[VAR_5] =
                  (VAR_16 & VAR_3) ? 'H' : 'B';
              else if (VAR_16 & (VAR_2 | VAR_1))
                VAR_14->which_element.simple_string[VAR_5] =
                  (VAR_16 & VAR_3) ? 'h' : 'b';

              if (VAR_16 & VAR_2)
                VAR_14->which_element.simple_string[VAR_0] = '+';
              else if (VAR_16 & VAR_1)
                VAR_14->which_element.simple_string[VAR_0] = '-';

              if (VAR_15->which_element.source.is_exec_point)
                VAR_14->which_element.simple_string[VAR_7] = '>';
     }
   VAR_12->content_size = VAR_10->generic.content_size;
 }
      else
 VAR_11 = VAR_8;
    }

  return VAR_11;
}
