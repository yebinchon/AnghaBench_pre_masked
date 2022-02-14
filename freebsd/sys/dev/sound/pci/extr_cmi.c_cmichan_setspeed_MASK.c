
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct sc_info {int lock; scalar_t__ spdif_enabled; } ;
struct sc_chinfo {scalar_t__ dir; int spd; struct sc_info* parent; } ;
typedef int kobj_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct sc_info*,int ,int,int,int) ;
 int FUNC_2 (struct sc_info*,int ,int) ;
 int FUNC_3 (struct sc_info*,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (char*,char*,int,int,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static u_int32_t
FUNC_9(kobj_t VAR_6, void *VAR_7, u_int32_t VAR_8)
{
 struct sc_chinfo *VAR_9 = VAR_7;
 struct sc_info *VAR_10 = VAR_9->parent;
 u_int32_t VAR_11, VAR_12;

 VAR_11 = FUNC_4(VAR_8);
 FUNC_7(VAR_10->lock);
 if (VAR_9->dir == VAR_5) {
  if (VAR_8 < 44100) {

   FUNC_3(VAR_9->parent, VAR_8);
  }
  FUNC_1(VAR_9->parent,
    VAR_4,
    VAR_3,
    VAR_2,
    VAR_11);
  if (VAR_8 >= 44100 && VAR_9->parent->spdif_enabled) {

   FUNC_3(VAR_9->parent, VAR_8);
  }
  VAR_12 = FUNC_2(VAR_9->parent, VAR_4, 4);
  VAR_12 >>= VAR_3;
  VAR_12 &= VAR_2;
 } else {
  FUNC_1(VAR_9->parent,
    VAR_4,
    VAR_1,
    VAR_0,
    VAR_11);
  VAR_12 = FUNC_2(VAR_9->parent, VAR_4, 4);
  VAR_12 >>= VAR_1;
  VAR_12 &= VAR_0;
 }
 FUNC_8(VAR_10->lock);
 VAR_9->spd = FUNC_5(VAR_11);

 FUNC_0(FUNC_6("cmichan_setspeed (%s) %d -> %d (%d)\n",
     (VAR_9->dir == VAR_5) ? "play" : "rec",
     VAR_8, VAR_9->spd, FUNC_5(VAR_12)));

 return VAR_9->spd;
}
