
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
struct TYPE_5__ {scalar_t__ spd; } ;
struct TYPE_4__ {scalar_t__ spd; } ;
struct fm801_info {int play_shift; int rec_shift; TYPE_2__ rch; TYPE_1__ pch; } ;
struct fm801_chinfo {scalar_t__ dir; scalar_t__ spd; struct fm801_info* parent; } ;
typedef int kobj_t ;
struct TYPE_6__ {scalar_t__ limit; scalar_t__ rate; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_3__* VAR_4 ;

__attribute__((used)) static u_int32_t
FUNC_0(kobj_t VAR_5, void *VAR_6, u_int32_t VAR_7)
{
 struct fm801_chinfo *VAR_8 = VAR_6;
 struct fm801_info *VAR_9 = VAR_8->parent;
 int VAR_10;


 for (VAR_10 = 0; VAR_10 < 10 && VAR_4[VAR_10].limit <= VAR_7; VAR_10++) ;

 if(VAR_8->dir == VAR_2) {
  VAR_9->pch.spd = VAR_4[VAR_10].rate;
  VAR_9->play_shift = (VAR_10<<8);
  VAR_9->play_shift &= VAR_0;
 }

 if(VAR_8->dir == VAR_3 ) {
  VAR_9->rch.spd = VAR_4[VAR_10].rate;
  VAR_9->rec_shift = (VAR_10<<8);
  VAR_9->rec_shift &= VAR_1;
 }

 VAR_8->spd = VAR_4[VAR_10].rate;

 return VAR_4[VAR_10].rate;
}
