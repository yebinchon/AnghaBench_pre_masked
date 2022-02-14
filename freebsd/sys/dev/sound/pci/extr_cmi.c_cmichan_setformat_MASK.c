
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct sc_info {int lock; } ;
struct sc_chinfo {int bps; scalar_t__ dir; int fmt; struct sc_info* parent; } ;
typedef int kobj_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (struct sc_info*,int ,int ,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(kobj_t VAR_11, void *VAR_12, u_int32_t VAR_13)
{
 struct sc_chinfo *VAR_14 = VAR_12;
 struct sc_info *VAR_15 = VAR_14->parent;
 u_int32_t VAR_16;

 if (VAR_13 & VAR_0) {
  VAR_16 = VAR_6;
  VAR_14->bps = 2;
 } else {
  VAR_16 = VAR_7;
  VAR_14->bps = 1;
 }

 if (FUNC_0(VAR_13) > 1) {
  VAR_16 |= VAR_9;
  VAR_14->bps *= 2;
 } else {
  VAR_16 |= VAR_8;
 }

 FUNC_2(VAR_15->lock);
 if (VAR_14->dir == VAR_10) {
  FUNC_1(VAR_14->parent,
    VAR_5,
    VAR_2,
    VAR_1,
    VAR_16);
 } else {
  FUNC_1(VAR_14->parent,
    VAR_5,
    VAR_4,
    VAR_3,
    VAR_16);
 }
 FUNC_3(VAR_15->lock);
 VAR_14->fmt = VAR_13;

 return 0;
}
