
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* getc_callbacks; } ;
struct TYPE_5__ {int (* handle_getc ) (TYPE_1__*,int,int,int*) ;scalar_t__ input_ready; struct TYPE_5__* next; } ;
typedef TYPE_1__ DIALOG_CALLBACK ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 TYPE_4__ VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int,int,int*) ;

int
FUNC_3(int VAR_2, int VAR_3, int *VAR_4)
{
    int VAR_5 = VAR_0;
    DIALOG_CALLBACK *VAR_6, *VAR_7;

    if ((VAR_6 = VAR_1.getc_callbacks) != 0) {
 if (FUNC_0() >= 0) {
     do {
  VAR_7 = VAR_6->next;
  if (VAR_6->input_ready) {
      if (!(VAR_6->handle_getc(VAR_6, VAR_2, VAR_3, VAR_4))) {
   FUNC_1(VAR_6);
      }
  }
     } while ((VAR_6 = VAR_7) != 0);
 }
 VAR_5 = (VAR_1.getc_callbacks != 0);
    }
    return VAR_5;
}
