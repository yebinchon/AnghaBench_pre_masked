
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct es_info {int ctrl; int sctrl; scalar_t__ polling; int poll_ticks; int poll_timer; } ;
struct es_chinfo {int blksz; int fmt; scalar_t__ dir; scalar_t__ index; int bufsz; int active; scalar_t__ prevptr; scalar_t__ ptr; int buffer; struct es_info* parent; } ;
typedef int kobj_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_1 (struct es_info*) ;
 int FUNC_2 (struct es_info*) ;
 scalar_t__ VAR_14 ;
 int FUNC_3 (int) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_4 (int *,int,int ,struct es_info*) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (struct es_info*) ;
 int VAR_29 ;
 int FUNC_7 (struct es_info*,int,int,int) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int
FUNC_9(kobj_t VAR_30, void *VAR_31, int VAR_32)
{
 struct es_chinfo *VAR_33 = VAR_31;
 struct es_info *VAR_34 = VAR_33->parent;
 uint32_t VAR_35, VAR_36 = 0;

 if (!FUNC_3(VAR_32))
  return 0;

 FUNC_1(VAR_34);
 VAR_35 = (VAR_33->blksz / FUNC_8(VAR_33->buffer)) - 1;
 if (VAR_33->fmt & VAR_0)
  VAR_36 |= 0x02;
 if (FUNC_0(VAR_33->fmt) > 1)
  VAR_36 |= 0x01;
 if (VAR_33->dir == VAR_14) {
  if (VAR_32 == VAR_15) {
   if (VAR_33->index == VAR_13) {
    VAR_34->ctrl |= VAR_2;
    VAR_34->sctrl &= ~(VAR_17 |
        VAR_18 | VAR_19);
    if (VAR_34->polling == 0)
     VAR_34->sctrl |= VAR_16;
    else
     VAR_34->sctrl &= ~VAR_16;
    VAR_34->sctrl |= VAR_36;
    FUNC_7(VAR_34, VAR_8, VAR_35, 4);

    FUNC_7(VAR_34, VAR_11,
        VAR_7 >> 8, 4);
    FUNC_7(VAR_34, VAR_7 & 0xff,
        (VAR_33->bufsz >> 2) - 1, 4);
   } else {
    VAR_34->ctrl |= VAR_3;
    VAR_34->sctrl &= ~(VAR_21 | VAR_25 |
        VAR_23 | VAR_24 |
        VAR_20);
    if (VAR_34->polling == 0)
     VAR_34->sctrl |= VAR_22;
    else
     VAR_34->sctrl &= ~VAR_22;
    VAR_34->sctrl |= (VAR_36 << 2) |
        ((((VAR_36 >> 1) & 1) + 1) << VAR_28);
    FUNC_7(VAR_34, VAR_10, VAR_35, 4);

    FUNC_7(VAR_34, VAR_11,
        VAR_9 >> 8, 4);
    FUNC_7(VAR_34, VAR_9 & 0xff,
        (VAR_33->bufsz >> 2) - 1, 4);
   }
  } else
   VAR_34->ctrl &= ~((VAR_33->index == VAR_13) ?
       VAR_2 : VAR_3);
 } else {
  if (VAR_32 == VAR_15) {
   VAR_34->ctrl |= VAR_1;
   VAR_34->sctrl &= ~VAR_27;
   if (VAR_34->polling == 0)
    VAR_34->sctrl |= VAR_26;
   else
    VAR_34->sctrl &= ~VAR_26;
   VAR_34->sctrl |= VAR_36 << 4;
   FUNC_7(VAR_34, VAR_5, VAR_35, 4);

   FUNC_7(VAR_34, VAR_11,
       VAR_4 >> 8, 4);
   FUNC_7(VAR_34, VAR_4 & 0xff,
       (VAR_33->bufsz >> 2) - 1, 4);
  } else
   VAR_34->ctrl &= ~VAR_1;
 }
 FUNC_7(VAR_34, VAR_12, VAR_34->sctrl, 4);
 FUNC_7(VAR_34, VAR_6, VAR_34->ctrl, 4);
 if (VAR_32 == VAR_15) {
  if (VAR_34->polling != 0) {
   VAR_33->ptr = 0;
   VAR_33->prevptr = 0;
   if (FUNC_6(VAR_34) == 0) {
    VAR_34->poll_ticks = 1;
    FUNC_4(&VAR_34->poll_timer, 1,
        VAR_29, VAR_34);
   }
  }
  VAR_33->active = 1;
 } else {
  VAR_33->active = 0;
  if (VAR_34->polling != 0) {
   if (FUNC_6(VAR_34) == 0) {
    FUNC_5(&VAR_34->poll_timer);
    VAR_34->poll_ticks = 1;
   }
  }
 }
 FUNC_2(VAR_34);
 return (0);
}
