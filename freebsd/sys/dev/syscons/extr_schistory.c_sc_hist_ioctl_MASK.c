
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_long ;
struct tty {int dummy; } ;
struct thread {int dummy; } ;
struct TYPE_6__ {int status; TYPE_1__* sc; int history; int ysize; } ;
typedef TYPE_2__ scr_stat ;
typedef scalar_t__ caddr_t ;
struct TYPE_5__ {int * scr_map; } ;


 int VAR_0 ;


 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* FUNC_1 (struct tty*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ) ;

int
FUNC_6(struct tty *VAR_7, u_long VAR_8, caddr_t VAR_9, struct thread *VAR_10)
{
 scr_stat *VAR_11;
 int VAR_12;

 switch (VAR_8) {

 case 128:
  VAR_11 = FUNC_1(VAR_7);
  if (*(int *)VAR_9 <= 0)
   return VAR_2;
  if (VAR_11->status & VAR_0)
   return VAR_1;
  FUNC_0(5, ("lines:%d, ysize:%d, pool:%d\n",
       *(int *)VAR_9, VAR_11->ysize, VAR_6));
  VAR_12 = FUNC_3(VAR_11,
            FUNC_2(*(int *)VAR_9, VAR_11->ysize),
            VAR_11->ysize, VAR_5);
  FUNC_0(5, ("error:%d, rows:%d, pool:%d\n", VAR_12,
       FUNC_5(VAR_11->history), VAR_6));
  return VAR_12;

 case 129:
  VAR_11 = FUNC_1(VAR_7);
  FUNC_4(VAR_11->history, VAR_11->sc->scr_map[0x20],
      VAR_4 << 8);
  return 0;
 }

 return VAR_3;
}
