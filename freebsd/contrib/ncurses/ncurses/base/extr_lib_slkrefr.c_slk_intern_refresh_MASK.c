
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int slk_format; TYPE_2__* _slk; } ;
struct TYPE_9__ {int labcnt; scalar_t__ hidden; void* dirty; TYPE_1__* ent; int win; int attr; } ;
struct TYPE_8__ {void* dirty; int form_text; int ent_x; scalar_t__ visible; } ;
typedef TYPE_2__ SLK ;
typedef TYPE_3__ SCREEN ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*,int ,void*) ;
 int FUNC_2 (TYPE_3__*,int ,int,int ) ;
 void* VAR_0 ;
 int FUNC_3 (char*,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (int ,int,int ) ;
 void* VAR_2 ;
 scalar_t__ FUNC_8 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int) ;
 int FUNC_12 (int ,scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_13(SCREEN *VAR_9)
{
    int VAR_10;
    int VAR_11;
    SLK *VAR_12;
    int VAR_13;

    if (VAR_9 == 0)
 return;

    VAR_12 = VAR_9->_slk;
    VAR_11 = VAR_9->slk_format;
    VAR_13 = VAR_1;

    if (VAR_12->hidden)
 return;

    for (VAR_10 = 0; VAR_10 < VAR_12->labcnt; VAR_10++) {
 if (VAR_12->dirty || VAR_12->ent[VAR_10].dirty) {
     if (VAR_12->ent[VAR_10].visible) {
  if (VAR_13 > 0 && FUNC_5(VAR_11)) {



      if (VAR_10 < VAR_7) {
   FUNC_3("plab_norm",
          FUNC_7(VAR_8,
           VAR_10 + 1,
           VAR_12->ent[VAR_10].form_text));
      }

  } else {
      if (VAR_11 == 4)
   FUNC_9(VAR_12->win);
      FUNC_12(VAR_12->win, FUNC_4(VAR_11) - 1, VAR_12->ent[VAR_10].ent_x);
      (void) FUNC_11(VAR_12->win, (int) FUNC_0(VAR_12->attr));
      FUNC_10(VAR_12->win, VAR_12->ent[VAR_10].form_text);



      (void) FUNC_11(VAR_12->win, (int) FUNC_8(FUNC_6(VAR_9)));
  }
     }
     VAR_12->ent[VAR_10].dirty = VAR_0;
 }
    }
    VAR_12->dirty = VAR_0;

    if (VAR_13 > 0) {



 if (VAR_12->hidden) {
     FUNC_3("label_off", VAR_5);
 } else {
     FUNC_3("label_on", VAR_6);
 }

    }
}
