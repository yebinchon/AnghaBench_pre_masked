
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wordent {TYPE_1__* next; } ;
struct TYPE_2__ {char* word; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct wordent*,int,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;

void
FUNC_2(
  struct wordent *VAR_2,
  int VAR_3)
{

    if (VAR_2 && VAR_2->next->word[0] == '\n')
 return;
    if (VAR_2)
        (void) FUNC_1(++VAR_0, VAR_2, 1, VAR_3, VAR_1);
    FUNC_0(VAR_1);
}
