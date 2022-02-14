
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int opened; int intr_active; int input_opened; void (* midi_input_intr ) (int,unsigned char) ;int lock; } ;
typedef TYPE_1__ vmidi_devc ;
struct TYPE_4__ {TYPE_1__* devc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__** VAR_3 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_2 (int VAR_4, int VAR_5,
       void (*VAR_6) (int VAR_7, unsigned char VAR_8),
       void (*VAR_9) (int VAR_10)
)
{
 vmidi_devc *VAR_11 = VAR_3[VAR_4]->devc;
 unsigned long VAR_12;

 if (VAR_11 == ((void*)0))
  return -(VAR_1);

 FUNC_0(&VAR_11->lock,VAR_12);
 if (VAR_11->opened)
 {
  FUNC_1(&VAR_11->lock,VAR_12);
  return -(VAR_0);
 }
 VAR_11->opened = 1;
 FUNC_1(&VAR_11->lock,VAR_12);

 VAR_11->intr_active = 1;

 if (VAR_5 & VAR_2)
 {
  VAR_11->input_opened = 1;
  VAR_11->midi_input_intr = VAR_6;
 }

 return 0;
}
