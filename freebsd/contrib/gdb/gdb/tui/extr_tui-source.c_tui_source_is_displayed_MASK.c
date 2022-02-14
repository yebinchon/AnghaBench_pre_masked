
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int file_name; } ;
struct TYPE_8__ {TYPE_2__ locator; } ;
struct tui_win_element {TYPE_3__ which_element; } ;
struct TYPE_6__ {scalar_t__ content_in_use; } ;
struct TYPE_10__ {TYPE_1__ generic; } ;
struct TYPE_9__ {scalar_t__* content; } ;


 TYPE_5__* VAR_0 ;
 scalar_t__ FUNC_0 (int ,char*) ;
 TYPE_4__* FUNC_1 () ;

int
FUNC_2 (char *VAR_1)
{
  return (VAR_0->generic.content_in_use &&
   (FUNC_0 (((struct tui_win_element *) (FUNC_1 ())->
    content[0])->which_element.locator.file_name, VAR_1) == 0));
}
