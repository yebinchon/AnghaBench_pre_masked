
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int8_t ;
typedef int u_int32_t ;
struct ac97_info {scalar_t__ count; int flags; unsigned int caps; unsigned int se; int id; int subvendor; unsigned int extcaps; unsigned int extid; int extstat; int lock; int dev; TYPE_2__* mix; scalar_t__ noext; int devinfo; int methods; } ;
typedef int (* ac97_patch ) (struct ac97_info*) ;
struct TYPE_6__ {int id; int stepmask; char* name; int (* patch ) (struct ac97_info*) ;scalar_t__ noext; } ;
struct TYPE_5__ {int enable; int reg; unsigned int bits; int ofs; scalar_t__ mute; } ;
struct TYPE_4__ {int id; char* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int) ;
 int VAR_12 ;
 size_t VAR_13 ;
 int FUNC_2 (struct ac97_info*) ;
 int FUNC_3 (struct ac97_info*) ;
 unsigned int FUNC_4 (int,char const*,char const*,char*) ;
 int FUNC_5 (struct ac97_info*,int) ;
 int FUNC_6 (struct ac97_info*) ;
 int FUNC_7 (struct ac97_info*,int,unsigned int) ;
 TYPE_3__* VAR_14 ;
 int * VAR_15 ;
 int * VAR_16 ;
 int * VAR_17 ;
 TYPE_2__* VAR_18 ;
 TYPE_1__* VAR_19 ;
 scalar_t__ VAR_20 ;
 int FUNC_8 (int ,char*,...) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (char*,...) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;

__attribute__((used)) static unsigned
FUNC_14(struct ac97_info *VAR_21)
{
 ac97_patch VAR_22;
 const char *VAR_23, *VAR_24;
 char VAR_25[80];
 u_int8_t VAR_26, VAR_27;
 unsigned VAR_28, VAR_29, VAR_30, VAR_31, VAR_32;
 u_int32_t VAR_33;
 int VAR_34;

 FUNC_12(VAR_21->lock);
 VAR_21->count = FUNC_0(VAR_21->methods, VAR_21->devinfo);
 if (VAR_21->count == 0) {
  FUNC_8(VAR_21->dev, "ac97 codec init failed\n");
  FUNC_13(VAR_21->lock);
  return VAR_12;
 }

 FUNC_7(VAR_21, VAR_10, (VAR_21->flags & VAR_1)? 0x8000 : 0x0000);
 FUNC_6(VAR_21);
 FUNC_7(VAR_21, VAR_10, (VAR_21->flags & VAR_1)? 0x8000 : 0x0000);

 VAR_28 = FUNC_5(VAR_21, VAR_11);
 VAR_29 = FUNC_5(VAR_21, VAR_11);
 VAR_30 = FUNC_5(VAR_21, VAR_11);





 if (VAR_28 != VAR_29 || VAR_29 != VAR_30) {
  VAR_21->flags |= VAR_2;
  VAR_28 = FUNC_5(VAR_21, VAR_11);
 }
 VAR_21->caps = VAR_28 & 0x03ff;
 VAR_21->se = (VAR_28 & 0x7c00) >> 10;

 VAR_33 = (FUNC_5(VAR_21, VAR_8) << 16) | FUNC_5(VAR_21, VAR_9);
 if (VAR_33 == 0 || VAR_33 == 0xffffffff) {
  FUNC_8(VAR_21->dev, "ac97 codec invalid or not present (id == %x)\n", VAR_33);
  FUNC_13(VAR_21->lock);
  return VAR_12;
 }

 VAR_21->id = VAR_33;
 VAR_21->subvendor = (u_int32_t)FUNC_9(VAR_21->dev) << 16;
 VAR_21->subvendor |= (u_int32_t)FUNC_10(VAR_21->dev) &
     0x0000ffff;
 VAR_21->noext = 0;
 VAR_22 = ((void*)0);

 VAR_23 = ((void*)0);
 VAR_26 = VAR_27 = 0;
 for (VAR_28 = 0; VAR_14[VAR_28].id; VAR_28++) {
  u_int32_t VAR_35 = 0xffffffff ^ VAR_14[VAR_28].stepmask;
  if ((VAR_14[VAR_28].id & VAR_35) == (VAR_33 & VAR_35)) {
   VAR_21->noext = VAR_14[VAR_28].noext;
   VAR_22 = VAR_14[VAR_28].patch;
   VAR_23 = VAR_14[VAR_28].name;
   VAR_26 = (VAR_33 & VAR_35) & 0xff;
   VAR_27 = (VAR_33 & ~VAR_35) & 0xff;
   break;
  }
 }

 VAR_24 = ((void*)0);
 for (VAR_28 = 0; VAR_19[VAR_28].id; VAR_28++) {
  if (VAR_19[VAR_28].id == (VAR_33 & 0xffffff00)) {
   VAR_24 = VAR_19[VAR_28].name;
   break;
  }
 }

 VAR_21->extcaps = 0;
 VAR_21->extid = 0;
 VAR_21->extstat = 0;
 if (!VAR_21->noext) {
  VAR_28 = FUNC_5(VAR_21, VAR_6);
  if (VAR_28 != 0xffff) {
   VAR_21->extcaps = VAR_28 & 0x3fff;
   VAR_21->extid = (VAR_28 & 0xc000) >> 14;
   VAR_21->extstat = FUNC_5(VAR_21, VAR_7) & VAR_0;
  }
 }

 for (VAR_28 = 0; VAR_28 < VAR_3; VAR_28++) {
  VAR_21->mix[VAR_28] = VAR_18[VAR_28];
 }
 FUNC_2(VAR_21);
 FUNC_3(VAR_21);
 if (VAR_22)
  VAR_22(VAR_21);

 for (VAR_28 = 0; VAR_28 < VAR_3; VAR_28++) {
  VAR_30 = VAR_21->noext? VAR_21->mix[VAR_28].enable : 1;
  VAR_34 = VAR_21->mix[VAR_28].reg;
  if (VAR_34 < 0)
   VAR_34 = -VAR_34;
  if (VAR_30 && VAR_34) {
   VAR_29 = VAR_32 = FUNC_5(VAR_21, VAR_34);




   if (VAR_21->mix[VAR_28].mute) {
    FUNC_7(VAR_21, VAR_34, VAR_29 | 0x8000);
    VAR_29 = FUNC_5(VAR_21, VAR_34);
   } else
    VAR_29 |= 0x8000;
   if ((VAR_29 & 0x8000)) {
    VAR_31 = VAR_21->mix[VAR_28].bits;
    if (VAR_31 == 5)
     VAR_31++;
    VAR_29 = ((1 << VAR_31) - 1) << VAR_21->mix[VAR_28].ofs;
    FUNC_7(VAR_21, VAR_34,
     VAR_29 | (VAR_21->mix[VAR_28].mute ? 0x8000 : 0));
    VAR_30 = FUNC_5(VAR_21, VAR_34) & VAR_29;
    VAR_30 >>= VAR_21->mix[VAR_28].ofs;
    if (VAR_34 == VAR_5 &&
       ((VAR_30 & 0x0001) == 0x0000))
     VAR_30 >>= 1;
    for (VAR_29 = 0; VAR_30 >> VAR_29; VAR_29++)
     ;
    if (VAR_29 != 0) {




     VAR_21->mix[VAR_28].enable = 1;
     VAR_21->mix[VAR_28].bits = VAR_29;
    } else if (VAR_34 == VAR_4) {





     VAR_21->mix[VAR_28].enable = 1;
    } else
     VAR_21->mix[VAR_28].enable = 0;
   } else
    VAR_21->mix[VAR_28].enable = 0;
   FUNC_7(VAR_21, VAR_34, VAR_32);
  }



 }

 FUNC_8(VAR_21->dev, "<%s>\n",
        FUNC_4(VAR_21->id, VAR_24, VAR_23, VAR_25));

 if (VAR_20) {
  if (VAR_21->flags & VAR_2)
   FUNC_8(VAR_21->dev, "Buggy AC97 Codec: aggressive ac97_rdcd() workaround enabled\n");
  FUNC_8(VAR_21->dev, "Codec features ");
  for (VAR_28 = VAR_29 = 0; VAR_28 < 10; VAR_28++)
   if (VAR_21->caps & (1 << VAR_28))
    FUNC_11("%s%s", VAR_29++? ", " : "", VAR_17[VAR_28]);
  FUNC_11("%s%d bit master volume", VAR_29++? ", " : "", VAR_21->mix[VAR_13].bits);
  FUNC_11("%s%s\n", VAR_29? ", " : "", VAR_15[VAR_21->se]);

  if (VAR_21->extcaps != 0 || VAR_21->extid) {
   FUNC_8(VAR_21->dev, "%s codec",
          VAR_21->extid? "Secondary" : "Primary");
   if (VAR_21->extcaps)
    FUNC_11(" extended features ");
   for (VAR_28 = VAR_29 = 0; VAR_28 < 14; VAR_28++)
    if (VAR_21->extcaps & (1 << VAR_28))
     FUNC_11("%s%s", VAR_29++? ", " : "", VAR_16[VAR_28]);
   FUNC_11("\n");
  }
 }

 VAR_28 = 0;
 while ((FUNC_5(VAR_21, VAR_10) & 2) == 0) {
  if (++VAR_28 == 100) {
   FUNC_8(VAR_21->dev, "ac97 codec reports dac not ready\n");
   break;
  }
  FUNC_1(1000);
 }
 if (VAR_20)
  FUNC_8(VAR_21->dev, "ac97 codec dac ready count: %d\n", VAR_28);
 FUNC_13(VAR_21->lock);
 return 0;
}
