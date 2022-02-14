
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct es_info {int ctrl; } ;
struct TYPE_2__ {scalar_t__ minspeed; scalar_t__ maxspeed; } ;
struct es_chinfo {scalar_t__ index; TYPE_1__ caps; struct es_info* parent; } ;
typedef int kobj_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct es_info*) ;
 int FUNC_2 (struct es_info*) ;
 int FUNC_3 (struct es_info*,int ,int,int) ;

__attribute__((used)) static uint32_t
FUNC_4(kobj_t VAR_6, void *VAR_7, uint32_t VAR_8)
{
 struct es_chinfo *VAR_9 = VAR_7;
 struct es_info *VAR_10 = VAR_9->parent;

 FUNC_1(VAR_10);

 if (VAR_9->caps.minspeed == VAR_9->caps.maxspeed) {
  FUNC_2(VAR_10);
  return (VAR_9->caps.maxspeed);
 }
 if (VAR_8 < VAR_9->caps.minspeed)
  VAR_8 = VAR_9->caps.minspeed;
 if (VAR_8 > VAR_9->caps.maxspeed)
  VAR_8 = VAR_9->caps.maxspeed;
 if (VAR_9->index == VAR_5) {





  VAR_10->ctrl &= ~VAR_3;
  if (VAR_8 < 8268) {
   VAR_8 = 5512;
   VAR_10->ctrl |= 0 << VAR_2;
  } else if (VAR_8 < 16537) {
   VAR_8 = 11025;
   VAR_10->ctrl |= 1 << VAR_2;
  } else if (VAR_8 < 33075) {
   VAR_8 = 22050;
   VAR_10->ctrl |= 2 << VAR_2;
  } else {
   VAR_8 = 44100;
   VAR_10->ctrl |= 3 << VAR_2;
  }
 } else {
  VAR_10->ctrl &= ~VAR_0;
  VAR_10->ctrl |= FUNC_0(VAR_8) << VAR_1;
 }
 FUNC_3(VAR_10, VAR_4, VAR_10->ctrl, 4);
 FUNC_2(VAR_10);
 return (VAR_8);
}
