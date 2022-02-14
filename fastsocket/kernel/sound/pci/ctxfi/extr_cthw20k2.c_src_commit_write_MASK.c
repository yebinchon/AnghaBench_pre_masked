
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ ctl; scalar_t__ ccr; scalar_t__ ca; scalar_t__ la; scalar_t__ sa; scalar_t__ mpr; scalar_t__ czbfs; } ;
struct TYPE_4__ {TYPE_1__ bf; } ;
struct src_rsc_ctrl_blk {int mpr; int sa; int la; int ca; int ccr; int ctl; TYPE_2__ dirty; } ;
struct hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (struct hw*,scalar_t__,int) ;
 unsigned int FUNC_1 (unsigned int) ;

__attribute__((used)) static int FUNC_2(struct hw *VAR_12, unsigned int VAR_13, void *VAR_14)
{
 struct src_rsc_ctrl_blk *VAR_15 = VAR_14;
 int VAR_16;

 if (VAR_15->dirty.bf.czbfs) {

  for (VAR_16 = 0; VAR_16 < 8; VAR_16++)
   FUNC_0(VAR_12, VAR_11+VAR_13*0x100+VAR_16*0x4, 0);

  for (VAR_16 = 0; VAR_16 < 4; VAR_16++)
   FUNC_0(VAR_12, VAR_7+VAR_13*0x100+VAR_16*0x4, 0);

  for (VAR_16 = 0; VAR_16 < 8; VAR_16++)
   FUNC_0(VAR_12, VAR_8+VAR_13*0x100+VAR_16*0x4, 0);

  VAR_15->dirty.bf.czbfs = 0;
 }
 if (VAR_15->dirty.bf.mpr) {




  unsigned int VAR_17 = FUNC_1(VAR_13);
  FUNC_0(VAR_12, VAR_2+4*VAR_17, VAR_15->mpr);
  FUNC_0(VAR_12, VAR_1+8*VAR_17, 0x3);
  FUNC_0(VAR_12, VAR_0+8*VAR_17, 0x0);
  VAR_15->dirty.bf.mpr = 0;
 }
 if (VAR_15->dirty.bf.sa) {
  FUNC_0(VAR_12, VAR_10+VAR_13*0x100, VAR_15->sa);
  VAR_15->dirty.bf.sa = 0;
 }
 if (VAR_15->dirty.bf.la) {
  FUNC_0(VAR_12, VAR_9+VAR_13*0x100, VAR_15->la);
  VAR_15->dirty.bf.la = 0;
 }
 if (VAR_15->dirty.bf.ca) {
  FUNC_0(VAR_12, VAR_3+VAR_13*0x100, VAR_15->ca);
  VAR_15->dirty.bf.ca = 0;
 }


 FUNC_0(VAR_12, VAR_5+VAR_13*0x100, 0x0);

 if (VAR_15->dirty.bf.ccr) {
  FUNC_0(VAR_12, VAR_4+VAR_13*0x100, VAR_15->ccr);
  VAR_15->dirty.bf.ccr = 0;
 }
 if (VAR_15->dirty.bf.ctl) {
  FUNC_0(VAR_12, VAR_6+VAR_13*0x100, VAR_15->ctl);
  VAR_15->dirty.bf.ctl = 0;
 }

 return 0;
}
