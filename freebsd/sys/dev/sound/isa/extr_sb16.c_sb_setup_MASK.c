
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
struct sb_chinfo {int dch; int fmt; int blksz; int spd; int buffer; scalar_t__ run; } ;
struct sb_info {int bd_flags; struct sb_chinfo rch; struct sb_chinfo pch; int drq1; int drq2; } ;


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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (struct sb_info*,int) ;
 int FUNC_3 (struct sb_info*,int,int) ;
 int FUNC_4 (struct sb_info*) ;
 int FUNC_5 (struct sb_info*) ;
 int FUNC_6 (struct sb_info*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static int
FUNC_10(struct sb_info *VAR_19)
{
 struct sb_chinfo *VAR_20;
 u_int8_t VAR_21;
 int VAR_22, VAR_23;

 FUNC_4(VAR_19);
 if (VAR_19->bd_flags & VAR_2)
  FUNC_7(VAR_19->pch.buffer, VAR_18);
 if (VAR_19->bd_flags & VAR_3)
  FUNC_7(VAR_19->rch.buffer, VAR_18);
 VAR_19->bd_flags &= ~(VAR_2 | VAR_3);

 FUNC_5(VAR_19);

 if (VAR_19->bd_flags & VAR_4) {

  VAR_23 = VAR_19->pch.run? 1 : 0;
  FUNC_9(VAR_19->pch.buffer, VAR_23? VAR_19->drq1 : VAR_19->drq2);
  VAR_19->pch.dch = VAR_23? 1 : 0;
  FUNC_9(VAR_19->rch.buffer, VAR_23? VAR_19->drq2 : VAR_19->drq1);
  VAR_19->rch.dch = VAR_23? 2 : 1;
 } else {
  if (VAR_19->pch.run && VAR_19->rch.run) {
   VAR_23 = (VAR_19->rch.fmt & VAR_0)? 0 : 1;
   FUNC_9(VAR_19->pch.buffer, VAR_23? VAR_19->drq2 : VAR_19->drq1);
   VAR_19->pch.dch = VAR_23? 2 : 1;
   FUNC_9(VAR_19->rch.buffer, VAR_23? VAR_19->drq1 : VAR_19->drq2);
   VAR_19->rch.dch = VAR_23? 1 : 2;
  } else {
   if (VAR_19->pch.run) {
    FUNC_9(VAR_19->pch.buffer, (VAR_19->pch.fmt & VAR_0)? VAR_19->drq2 : VAR_19->drq1);
    VAR_19->pch.dch = (VAR_19->pch.fmt & VAR_0)? 2 : 1;
    FUNC_9(VAR_19->rch.buffer, (VAR_19->pch.fmt & VAR_0)? VAR_19->drq1 : VAR_19->drq2);
    VAR_19->rch.dch = (VAR_19->pch.fmt & VAR_0)? 1 : 2;
   } else if (VAR_19->rch.run) {
    FUNC_9(VAR_19->pch.buffer, (VAR_19->rch.fmt & VAR_0)? VAR_19->drq1 : VAR_19->drq2);
    VAR_19->pch.dch = (VAR_19->rch.fmt & VAR_0)? 1 : 2;
    FUNC_9(VAR_19->rch.buffer, (VAR_19->rch.fmt & VAR_0)? VAR_19->drq2 : VAR_19->drq1);
    VAR_19->rch.dch = (VAR_19->rch.fmt & VAR_0)? 2 : 1;
   }
  }
 }

 FUNC_8(VAR_19->pch.buffer, VAR_15);
 FUNC_8(VAR_19->rch.buffer, VAR_16);






 VAR_20 = &VAR_19->pch;
 if (VAR_20->run) {
  VAR_22 = VAR_20->blksz;
  if (VAR_20->fmt & VAR_0)
   VAR_22 >>= 1;
  VAR_22--;


  FUNC_1(VAR_20->spd, 5000, 45000);
  FUNC_2(VAR_19, VAR_6);
      FUNC_2(VAR_19, VAR_20->spd >> 8);
  FUNC_2(VAR_19, VAR_20->spd & 0xff);


  VAR_21 = VAR_10 | VAR_12 | VAR_11;
  VAR_21 |= (VAR_20->fmt & VAR_0)? VAR_7 : VAR_8;
  FUNC_2(VAR_19, VAR_21);

  VAR_21 = (FUNC_0(VAR_20->fmt) > 1)? VAR_14 : 0;
  VAR_21 |= (VAR_20->fmt & VAR_1)? VAR_13 : 0;
  FUNC_3(VAR_19, VAR_21, VAR_22);
  FUNC_7(VAR_20->buffer, VAR_17);
  VAR_19->bd_flags |= VAR_2;
 }

 VAR_20 = &VAR_19->rch;
 if (VAR_20->run) {
  VAR_22 = VAR_20->blksz;
  if (VAR_20->fmt & VAR_0)
   VAR_22 >>= 1;
  VAR_22--;


  FUNC_1(VAR_20->spd, 5000, 45000);
  FUNC_2(VAR_19, VAR_5);
      FUNC_2(VAR_19, VAR_20->spd >> 8);
  FUNC_2(VAR_19, VAR_20->spd & 0xff);


  VAR_21 = VAR_10 | VAR_12 | VAR_9;
  VAR_21 |= (VAR_20->fmt & VAR_0)? VAR_7 : VAR_8;
  FUNC_2(VAR_19, VAR_21);

  VAR_21 = (FUNC_0(VAR_20->fmt) > 1)? VAR_14 : 0;
  VAR_21 |= (VAR_20->fmt & VAR_1)? VAR_13 : 0;
  FUNC_3(VAR_19, VAR_21, VAR_22);
  FUNC_7(VAR_20->buffer, VAR_17);
  VAR_19->bd_flags |= VAR_3;
 }
 FUNC_6(VAR_19);

     return 0;
}
