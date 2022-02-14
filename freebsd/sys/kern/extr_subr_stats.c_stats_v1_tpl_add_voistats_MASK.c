
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct voistatspec {int stype; scalar_t__ vs_dtype; int vsdsz; int * iv; scalar_t__ flags; } ;
struct voistatdata_voistate {int dummy; } ;
struct voistatdata_numeric {int dummy; } ;
struct voistat {int stype; int dtype; int dsz; scalar_t__ data_off; scalar_t__ flags; } ;
struct voi_meta {int * name; } ;
struct voi {int id; int voistatmaxid; int dtype; int flags; scalar_t__ stats_off; } ;
struct statsblobv1 {scalar_t__ statsdata_off; scalar_t__ stats_off; struct voi* vois; } ;
struct statsblob {int dummy; } ;
struct metablob {struct voi_meta* voi_meta; } ;
typedef size_t int32_t ;
typedef enum vsd_dtype { ____Placeholder_vsd_dtype } vsd_dtype ;
struct TYPE_3__ {struct statsblob* sb; struct metablob* mb; } ;


 struct voistat* FUNC_0 (struct statsblobv1*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,char*) ;
 int VAR_3 ;
 int FUNC_2 (struct statsblobv1*) ;
 int VAR_4 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (struct voistat*,int *,int) ;
 int VAR_10 ;
 struct voi_meta* FUNC_6 (struct voi_meta*,int,int,int ) ;
 int * FUNC_7 (char const*,int ) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (struct statsblobv1**,int,int,int) ;
 TYPE_1__** VAR_11 ;

int
FUNC_10(uint32_t VAR_12, int32_t VAR_13, const char *VAR_14,
    enum vsd_dtype VAR_15, uint32_t VAR_16, struct voistatspec *VAR_17,
    uint32_t VAR_18)
{
 struct voi *VAR_19;
 struct voistat *VAR_20;
 struct statsblobv1 *VAR_21;
 struct metablob *VAR_22;
 int VAR_23, VAR_24, VAR_25, VAR_26, VAR_27,
     VAR_28, VAR_29;
 uint32_t VAR_30;

 if (VAR_13 < 0 || VAR_15 == 0 || VAR_15 >= VAR_7 ||
     VAR_16 == 0 || VAR_17 == ((void*)0))
  return (VAR_0);

 VAR_23 = VAR_30 = VAR_26 = VAR_27 =
     VAR_28 = 0;
 VAR_29 = -1;


 for (VAR_24 = VAR_16 - 1; VAR_24 >= 0; VAR_24--) {
  if (VAR_17[VAR_24].stype == 0 || VAR_17[VAR_24].stype >= VAR_8 ||
      VAR_17[VAR_24].vs_dtype == 0 || VAR_17[VAR_24].vs_dtype >= VAR_7 ||
      VAR_17[VAR_24].iv == ((void*)0) || VAR_17[VAR_24].vsdsz == 0)
   return (VAR_0);
  if ((int)VAR_17[VAR_24].stype > VAR_29)
   VAR_29 = VAR_17[VAR_24].stype;
  VAR_28 += VAR_17[VAR_24].vsdsz;
 }

 if (VAR_18 & VAR_4) {

  VAR_28 += sizeof(struct voistatdata_voistate);
 }
 VAR_30 += VAR_28;

 FUNC_3();
 if (VAR_12 < VAR_10) {
  VAR_21 = (struct statsblobv1 *)VAR_11[VAR_12]->sb;
  VAR_22 = VAR_11[VAR_12]->mb;

  if (VAR_13 >= FUNC_2(VAR_21) || VAR_21->vois[VAR_13].id == -1) {

   if (VAR_13 >= FUNC_2(VAR_21)) {

    VAR_26 = (VAR_13 - (FUNC_2(VAR_21) - 1)) *
        sizeof(struct voi);
    VAR_30 += VAR_26;
   }
   VAR_27 =
       (VAR_29 + 1) * sizeof(struct voistat);
  } else {

   if (VAR_29 >
       VAR_21->vois[VAR_13].voistatmaxid) {
    VAR_27 = (VAR_29 -
        VAR_21->vois[VAR_13].voistatmaxid) *
        sizeof(struct voistat);
   }

   VAR_23 = VAR_2;
  }
  VAR_30 += VAR_27;

  if (!VAR_23 && VAR_26 > 0) {
   struct voi_meta *VAR_31 = VAR_22->voi_meta;

   VAR_31 = FUNC_6(VAR_31, VAR_31 == ((void*)0) ?
       0 : FUNC_2(VAR_21) * sizeof(struct voi_meta),
       (1 + VAR_13) * sizeof(struct voi_meta),
       VAR_3);

   if (VAR_31 == ((void*)0))
    VAR_23 = VAR_1;
   else
    VAR_22->voi_meta = VAR_31;
  }

  if (!VAR_23) {

   VAR_23 = FUNC_9(&VAR_21, VAR_26,
       VAR_27, VAR_28);
  }

  if (!VAR_23) {
   VAR_22->voi_meta[VAR_13].name = FUNC_7(VAR_14,
       0);
   if (VAR_22->voi_meta[VAR_13].name == ((void*)0))
    VAR_23 = VAR_1;
  }

  if (!VAR_23) {

   VAR_11[VAR_12]->sb = (struct statsblob *)VAR_21;


   VAR_19 = &VAR_21->vois[VAR_13];

   if (VAR_19->id < 0) {

    VAR_19->id = VAR_13;
    VAR_19->dtype = VAR_15;
    VAR_19->stats_off = VAR_21->stats_off;
    if (VAR_18 & VAR_4)
     VAR_19->flags |= VAR_5;
   } else {
   }

   VAR_19->voistatmaxid = VAR_29;
   VAR_25 = 0;

   if (VAR_19->flags & VAR_5) {

    VAR_20 = FUNC_0(VAR_21, VAR_19->stats_off);
    VAR_20->stype = VAR_9;
    VAR_20->flags = 0;
    VAR_20->dtype = VAR_6;
    VAR_25 = VAR_20->dsz =
        sizeof(struct voistatdata_numeric);
    VAR_20->data_off = VAR_21->statsdata_off;
   }

   for (VAR_24 = 0; (uint32_t)VAR_24 < VAR_16; VAR_24++) {
    VAR_20 = FUNC_0(VAR_21, VAR_19->stats_off +
        (VAR_17[VAR_24].stype * sizeof(struct voistat)));
    FUNC_1(VAR_20->stype < 0, ("voistat %p "
        "already initialised", VAR_20));
    VAR_20->stype = VAR_17[VAR_24].stype;
    VAR_20->flags = VAR_17[VAR_24].flags;
    VAR_20->dtype = VAR_17[VAR_24].vs_dtype;
    VAR_20->dsz = VAR_17[VAR_24].vsdsz;
    VAR_20->data_off = VAR_21->statsdata_off +
        VAR_25;
    FUNC_5(FUNC_0(VAR_21, VAR_20->data_off),
        VAR_17[VAR_24].iv, VAR_17[VAR_24].vsdsz);
    VAR_25 += VAR_17[VAR_24].vsdsz;
   }


   FUNC_8(VAR_11[VAR_12]);

  }
 } else
  VAR_23 = VAR_0;
 FUNC_4();

 return (VAR_23);
}
