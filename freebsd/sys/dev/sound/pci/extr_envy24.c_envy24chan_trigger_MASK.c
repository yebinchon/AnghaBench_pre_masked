
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int32_t ;
struct sc_info {int* run; int* blk; int lock; TYPE_3__* chan; int * intr; int dev; int speed; TYPE_1__* caps; } ;
struct sc_chinfo {scalar_t__ dir; int offset; int blk; int size; int unit; int run; int num; int (* emldma ) (struct sc_chinfo*) ;TYPE_2__* channel; int speed; struct sc_info* parent; } ;
typedef int kobj_t ;
struct TYPE_6__ {scalar_t__ dir; int run; int blk; } ;
struct TYPE_5__ {int speed; } ;
struct TYPE_4__ {int maxspeed; int minspeed; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;




 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct sc_info*,scalar_t__) ;
 int FUNC_2 (struct sc_info*,int ) ;
 int FUNC_3 (struct sc_info*,int ) ;
 int FUNC_4 (struct sc_info*,int ) ;
 int FUNC_5 (struct sc_info*,scalar_t__) ;
 int FUNC_6 (struct sc_info*,scalar_t__) ;
 int FUNC_7 (struct sc_info*,scalar_t__) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct sc_chinfo*) ;
 int FUNC_11 (struct sc_chinfo*) ;
 int FUNC_12 (struct sc_chinfo*) ;

__attribute__((used)) static int
FUNC_13(kobj_t VAR_3, void *VAR_4, int VAR_5)
{
 struct sc_chinfo *VAR_6 = VAR_4;
 struct sc_info *VAR_7 = VAR_6->parent;
 u_int32_t VAR_8;
 int VAR_9;
 int VAR_10 = 0;





 FUNC_8(VAR_7->lock);
 if (VAR_6->dir == VAR_2)
  VAR_9 = 0;
 else
  VAR_9 = 1;
 switch (VAR_5) {
 case 128:




  if (VAR_7->run[0] == 0 && VAR_7->run[1] == 0) {
   VAR_7->speed = FUNC_3(VAR_7, VAR_6->speed);
   VAR_7->caps[0].minspeed = VAR_7->caps[0].maxspeed = VAR_7->speed;
   VAR_7->caps[1].minspeed = VAR_7->caps[1].maxspeed = VAR_7->speed;
  }
  else if (VAR_6->speed != 0 && VAR_6->speed != VAR_7->speed) {
   VAR_10 = -1;
   goto fail;
  }
  if (VAR_6->speed == 0)
   VAR_6->channel->speed = VAR_7->speed;

  VAR_7->run[VAR_9]++;
  if (VAR_7->run[VAR_9] == 1) {

   VAR_6->offset = 0;
   VAR_7->blk[VAR_9] = VAR_6->blk;
  }
  else {
   VAR_8 = FUNC_1(VAR_7, VAR_6->dir);
   VAR_6->offset = ((VAR_8 / VAR_6->blk + 1) * VAR_6->blk %
       (VAR_6->size / 4)) * 4 / VAR_6->unit;
   if (VAR_6->blk < VAR_7->blk[VAR_9])
    VAR_7->blk[VAR_9] = VAR_6->blk;
  }
  if (VAR_6->dir == VAR_2) {
   VAR_6->emldma(VAR_6);
   FUNC_4(VAR_7, VAR_6->num);
  }
  FUNC_7(VAR_7, VAR_6->dir);
  if (VAR_7->run[VAR_9] == 1)
   FUNC_5(VAR_7, VAR_6->dir);
  VAR_6->run = 1;
  break;
 case 129:



  if (VAR_6->run != 1) {
   VAR_10 = -1;
   goto fail;
  }
  VAR_6->emldma(VAR_6);
  break;
 case 130:



  if (VAR_6->run != 1) {
   VAR_10 = -1;
   goto fail;
  }
  VAR_6->emldma(VAR_6);
  break;
 case 131:
  if (VAR_6->run) {



  VAR_6->run = 0;
  VAR_7->run[VAR_9]--;
  if (VAR_6->dir == VAR_2)
   FUNC_2(VAR_7, VAR_6->num);
  if (VAR_7->run[VAR_9] == 0) {
   FUNC_6(VAR_7, VAR_6->dir);
   VAR_7->intr[VAR_9] = 0;
  }
  }
  break;
 }
fail:
 FUNC_9(VAR_7->lock);
 return (VAR_10);
}
