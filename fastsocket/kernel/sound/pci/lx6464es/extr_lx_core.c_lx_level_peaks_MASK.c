
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_3__ {int* stat; int * cmd; } ;
struct lx6464es {int msg_lock; TYPE_1__ rmh; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (struct lx6464es*,TYPE_1__*) ;
 scalar_t__* VAR_1 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

int FUNC_5(struct lx6464es *VAR_2, int VAR_3, int VAR_4,
     u32 *VAR_5)
{
 int VAR_6 = 0;
 unsigned long VAR_7;
 int VAR_8;
 FUNC_3(&VAR_2->msg_lock, VAR_7);

 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8 += 4) {
  u32 VAR_9, VAR_10, VAR_11, VAR_12;

  FUNC_1(&VAR_2->rmh, VAR_0);
  VAR_2->rmh.cmd[0] |= FUNC_0(VAR_3, VAR_8);

  VAR_6 = FUNC_2(VAR_2, &VAR_2->rmh);

  if (VAR_6 == 0) {
   VAR_9 = VAR_1[VAR_2->rmh.stat[0] & 0x0F];
   VAR_10 = VAR_1[(VAR_2->rmh.stat[0] >> 4) & 0xf];
   VAR_11 = VAR_1[(VAR_2->rmh.stat[0] >> 8) & 0xf];
   VAR_12 = VAR_1[(VAR_2->rmh.stat[0] >> 12) & 0xf];
  } else
   VAR_9 = VAR_10 = VAR_11 = VAR_12 = 0;

  VAR_5[0] = VAR_9;
  VAR_5[1] = VAR_10;
  VAR_5[2] = VAR_11;
  VAR_5[3] = VAR_12;

  VAR_5 += 4;
 }

 FUNC_4(&VAR_2->msg_lock, VAR_7);
 return VAR_6;
}
