
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct es_info {int sctrl; } ;
struct es_chinfo {scalar_t__ dir; scalar_t__ index; int fmt; struct es_info* parent; } ;
typedef int kobj_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct es_info*) ;
 int FUNC_2 (struct es_info*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (struct es_info*,int ,int ,int) ;

__attribute__((used)) static int
FUNC_4(kobj_t VAR_13, void *VAR_14, uint32_t VAR_15)
{
 struct es_chinfo *VAR_16 = VAR_14;
 struct es_info *VAR_17 = VAR_16->parent;

 FUNC_1(VAR_17);
 if (VAR_16->dir == VAR_3) {
  if (VAR_16->index == VAR_2) {
   VAR_17->sctrl &= ~VAR_4;
   if (VAR_15 & VAR_0)
    VAR_17->sctrl |= VAR_5;
   if (FUNC_0(VAR_15) > 1)
    VAR_17->sctrl |= VAR_6;
  } else {
   VAR_17->sctrl &= ~VAR_7;
   if (VAR_15 & VAR_0)
    VAR_17->sctrl |= VAR_8;
   if (FUNC_0(VAR_15) > 1)
    VAR_17->sctrl |= VAR_9;
  }
 } else {
  VAR_17->sctrl &= ~VAR_10;
  if (VAR_15 & VAR_0)
   VAR_17->sctrl |= VAR_11;
  if (FUNC_0(VAR_15) > 1)
   VAR_17->sctrl |= VAR_12;
 }
 FUNC_3(VAR_17, VAR_1, VAR_17->sctrl, 4);
 FUNC_2(VAR_17);
 VAR_16->fmt = VAR_15;
 return (0);
}
