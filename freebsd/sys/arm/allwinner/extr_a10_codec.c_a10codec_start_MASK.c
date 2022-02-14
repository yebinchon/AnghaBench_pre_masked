
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct a10codec_info {TYPE_1__* cfg; } ;
struct a10codec_chinfo {scalar_t__ dir; int format; scalar_t__ pos; struct a10codec_info* parent; } ;
struct TYPE_2__ {int (* mute ) (struct a10codec_info*,int ,scalar_t__) ;} ;


 int FUNC_0 (struct a10codec_info*) ;
 int FUNC_1 (struct a10codec_info*) ;
 int FUNC_2 (struct a10codec_info*) ;
 int FUNC_3 (struct a10codec_info*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct a10codec_info*,int ) ;
 int FUNC_6 (struct a10codec_info*,int ,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_7 (struct a10codec_chinfo*) ;
 int FUNC_8 (struct a10codec_chinfo*) ;
 int FUNC_9 (struct a10codec_chinfo*) ;
 int FUNC_10 (struct a10codec_info*,int ,scalar_t__) ;
 int FUNC_11 (struct a10codec_info*,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_12(struct a10codec_chinfo *VAR_19)
{
 struct a10codec_info *VAR_20 = VAR_19->parent;
 uint32_t VAR_21;

 VAR_19->pos = 0;

 if (VAR_19->dir == VAR_16) {

  FUNC_6(VAR_20, FUNC_2(VAR_20), VAR_9);


  FUNC_6(VAR_20, FUNC_3(VAR_20),
      FUNC_5(VAR_20, FUNC_3(VAR_20)));


  VAR_20->cfg->mute(VAR_20, 0, VAR_19->dir);


  FUNC_7(VAR_19);


  FUNC_6(VAR_20, FUNC_2(VAR_20),
      (FUNC_4(VAR_19->format) == 1 ? VAR_12 : 0) |
      (FUNC_8(VAR_19) << VAR_11) |
      (VAR_15 << VAR_10) |
      (VAR_14 << VAR_7) |
      (VAR_18 << VAR_13));


  VAR_21 = FUNC_5(VAR_20, FUNC_2(VAR_20));
  VAR_21 |= VAR_8;
  FUNC_6(VAR_20, FUNC_2(VAR_20), VAR_21);
 } else {

  FUNC_6(VAR_20, FUNC_0(VAR_20), VAR_2);


  FUNC_6(VAR_20, FUNC_1(VAR_20),
      FUNC_5(VAR_20, FUNC_1(VAR_20)));


  VAR_20->cfg->mute(VAR_20, 0, VAR_19->dir);


  FUNC_7(VAR_19);


  FUNC_6(VAR_20, FUNC_0(VAR_20),
      VAR_1 |
      VAR_5 |
      (FUNC_4(VAR_19->format) == 1 ? VAR_4 : 0) |
      (FUNC_8(VAR_19) << VAR_3) |
      (VAR_17 << VAR_6));


  VAR_21 = FUNC_5(VAR_20, FUNC_0(VAR_20));
  VAR_21 |= VAR_0;
  FUNC_6(VAR_20, FUNC_0(VAR_20), VAR_21);
 }


 FUNC_9(VAR_19);
}
