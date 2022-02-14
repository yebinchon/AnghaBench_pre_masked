
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int32_t ;
struct sc_info {int* run; int* blk; int lock; int * intr; int dev; int speed; TYPE_1__* caps; } ;
struct sc_chinfo {scalar_t__ dir; int offset; int blk; int size; int unit; int run; int num; int (* emldma ) (struct sc_chinfo*) ;TYPE_2__* channel; int speed; struct sc_info* parent; } ;
typedef int kobj_t ;
struct TYPE_4__ {int speed; } ;
struct TYPE_3__ {int maxspeed; int minspeed; } ;


 scalar_t__ VAR_0 ;




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
FUNC_13(kobj_t VAR_1, void *VAR_2, int VAR_3)
{
 struct sc_chinfo *VAR_4 = VAR_2;
 struct sc_info *VAR_5 = VAR_4->parent;
 u_int32_t VAR_6;
 int VAR_7;
 int VAR_8 = 0;





 FUNC_8(VAR_5->lock);
 if (VAR_4->dir == VAR_0)
  VAR_7 = 0;
 else
  VAR_7 = 1;
 switch (VAR_3) {
 case 128:




  if (VAR_5->run[0] == 0 && VAR_5->run[1] == 0) {
   VAR_5->speed = FUNC_3(VAR_5, VAR_4->speed);
   VAR_5->caps[0].minspeed = VAR_5->caps[0].maxspeed = VAR_5->speed;
   VAR_5->caps[1].minspeed = VAR_5->caps[1].maxspeed = VAR_5->speed;
  }
  else if (VAR_4->speed != 0 && VAR_4->speed != VAR_5->speed) {
   VAR_8 = -1;
   goto fail;
  }
  if (VAR_4->speed == 0)
   VAR_4->channel->speed = VAR_5->speed;

  VAR_5->run[VAR_7]++;
  if (VAR_5->run[VAR_7] == 1) {

   VAR_4->offset = 0;
   VAR_5->blk[VAR_7] = VAR_4->blk;
  }
  else {
   VAR_6 = FUNC_1(VAR_5, VAR_4->dir);
   VAR_4->offset = ((VAR_6 / VAR_4->blk + 1) * VAR_4->blk %
       (VAR_4->size / 4)) * 4 / VAR_4->unit;
   if (VAR_4->blk < VAR_5->blk[VAR_7])
    VAR_5->blk[VAR_7] = VAR_4->blk;
  }
  if (VAR_4->dir == VAR_0) {
   VAR_4->emldma(VAR_4);
   FUNC_4(VAR_5, VAR_4->num);
  }
  FUNC_7(VAR_5, VAR_4->dir);
  if (VAR_5->run[VAR_7] == 1)
   FUNC_5(VAR_5, VAR_4->dir);
  VAR_4->run = 1;
  break;
 case 129:



  if (VAR_4->run != 1) {
   VAR_8 = -1;
   goto fail;
  }
  VAR_4->emldma(VAR_4);
  break;
 case 130:



  if (VAR_4->run != 1) {
   VAR_8 = -1;
   goto fail;
  }
  VAR_4->emldma(VAR_4);
  break;
 case 131:
  if (VAR_4->run) {



  VAR_4->run = 0;
  VAR_5->run[VAR_7]--;
  if (VAR_4->dir == VAR_0)
   FUNC_2(VAR_5, VAR_4->num);
  if (VAR_5->run[VAR_7] == 0) {
   FUNC_6(VAR_5, VAR_4->dir);
   VAR_5->intr[VAR_7] = 0;
  }
  }
  break;
 }
fail:
 FUNC_9(VAR_5->lock);
 return (VAR_8);
}
