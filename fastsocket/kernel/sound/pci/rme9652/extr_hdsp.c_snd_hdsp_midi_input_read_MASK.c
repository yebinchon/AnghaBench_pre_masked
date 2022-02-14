
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct hdsp_midi {int lock; TYPE_1__* hdsp; scalar_t__ id; scalar_t__ pending; scalar_t__ input; } ;
typedef int buf ;
struct TYPE_4__ {int control_register; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ,int ) ;
 int FUNC_1 (TYPE_1__*,scalar_t__) ;
 int FUNC_2 (struct hdsp_midi*) ;
 unsigned char FUNC_3 (TYPE_1__*,scalar_t__) ;
 int FUNC_4 (scalar_t__,unsigned char*,int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_7 (struct hdsp_midi *VAR_3)
{
 unsigned char VAR_4[128];
 unsigned long VAR_5;
 int VAR_6;
 int VAR_7;

 FUNC_5 (&VAR_3->lock, VAR_5);
 if ((VAR_6 = FUNC_1 (VAR_3->hdsp, VAR_3->id)) > 0) {
  if (VAR_3->input) {
   if (VAR_6 > (int)sizeof (VAR_4))
    VAR_6 = sizeof (VAR_4);
   for (VAR_7 = 0; VAR_7 < VAR_6; ++VAR_7)
    VAR_4[VAR_7] = FUNC_3 (VAR_3->hdsp, VAR_3->id);
   if (VAR_6)
    FUNC_4 (VAR_3->input, VAR_4, VAR_6);
  } else {

   while (--VAR_6)
    FUNC_3 (VAR_3->hdsp, VAR_3->id);
  }
 }
 VAR_3->pending = 0;
 if (VAR_3->id)
  VAR_3->hdsp->control_register |= VAR_1;
 else
  VAR_3->hdsp->control_register |= VAR_0;
 FUNC_0(VAR_3->hdsp, VAR_2, VAR_3->hdsp->control_register);
 FUNC_6 (&VAR_3->lock, VAR_5);
 return FUNC_2 (VAR_3);
}
