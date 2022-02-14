
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct voistat {int id; int voistatmaxid; int stats_off; int stype; int data_off; } ;
struct voi {int id; int voistatmaxid; int stats_off; int stype; int data_off; } ;
struct statsblobv1 {scalar_t__ cursz; scalar_t__ maxsz; scalar_t__ statsdata_off; scalar_t__ stats_off; struct voistat* vois; } ;


 struct voistat* FUNC_0 (struct statsblobv1*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,char*) ;
 int VAR_3 ;
 int FUNC_2 (struct statsblobv1*) ;
 int VAR_4 ;
 int FUNC_3 (struct voistat*,struct voistat*,scalar_t__) ;
 int FUNC_4 (struct voistat*,char,int) ;
 struct statsblobv1* FUNC_5 (struct statsblobv1*,scalar_t__,scalar_t__,int ) ;

__attribute__((used)) static int
FUNC_6(struct statsblobv1 **VAR_5, int VAR_6,
    int VAR_7, int VAR_8)
{
 struct statsblobv1 *VAR_9;
 struct voi *VAR_10;
 struct voistat *VAR_11, *VAR_12;
 int VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;

 FUNC_1(VAR_6 % sizeof(struct voi) == 0,
     ("Bad newvoibytes %d", VAR_6));
 FUNC_1(VAR_7 % sizeof(struct voistat) == 0,
     ("Bad newvoistatbytes %d", VAR_7));

 VAR_13 = ((VAR_6 % sizeof(struct voi) == 0) &&
     (VAR_7 % sizeof(struct voistat) == 0)) ? 0 : VAR_1;
 VAR_9 = *VAR_5;
 VAR_17 = VAR_6 + VAR_7 + VAR_8;





 if (!VAR_13 && ((((int)VAR_9->cursz) + VAR_17) > VAR_4))
  VAR_13 = VAR_0;

 if (!VAR_13 && (VAR_9->cursz + VAR_17 > VAR_9->maxsz)) {

  VAR_9 = FUNC_5(VAR_9, VAR_9->maxsz, VAR_9->cursz + VAR_17, VAR_3);
  if (VAR_9 != ((void*)0)) {
   VAR_9->maxsz = VAR_9->cursz + VAR_17;
   *VAR_5 = VAR_9;
  } else
      VAR_13 = VAR_2;
 }

 if (!VAR_13) {






  FUNC_3(FUNC_0(VAR_9, VAR_9->statsdata_off + VAR_17),
      FUNC_0(VAR_9, VAR_9->statsdata_off),
      VAR_9->cursz - VAR_9->statsdata_off);
  FUNC_3(FUNC_0(VAR_9, VAR_9->stats_off + VAR_6 +
      VAR_7), FUNC_0(VAR_9, VAR_9->stats_off),
      VAR_9->statsdata_off - VAR_9->stats_off);


  VAR_15 = FUNC_2(VAR_9);
  VAR_16 = (VAR_7 / sizeof(struct voistat)) - 1;


  VAR_9->cursz += VAR_17;
  VAR_9->stats_off += VAR_6;
  VAR_9->statsdata_off += VAR_6 + VAR_7;


  FUNC_4(&VAR_9->vois[VAR_15], '\0', VAR_6);
  FUNC_4(FUNC_0(VAR_9, VAR_9->stats_off), '\0',
      VAR_7);
  FUNC_4(FUNC_0(VAR_9, VAR_9->statsdata_off), '\0',
      VAR_8);


  for (VAR_14 = 0; VAR_14 < FUNC_2(VAR_9); VAR_14++) {
   VAR_10 = &VAR_9->vois[VAR_14];
   if (VAR_14 >= VAR_15) {
    VAR_10->id = VAR_10->voistatmaxid = -1;
   } else if (VAR_10->id > -1) {
    VAR_10->stats_off += VAR_6 +
        VAR_7;
   }
  }


  VAR_18 = (VAR_9->statsdata_off - VAR_9->stats_off) /
      sizeof(struct voistat);
  VAR_12 = FUNC_0(VAR_9, VAR_9->stats_off);
  for (VAR_14 = 0; VAR_14 < VAR_18; VAR_14++) {
   VAR_11 = &VAR_12[VAR_14];
   if (VAR_14 <= VAR_16) {
    VAR_11->stype = -1;
   } else if (VAR_11->stype > -1) {
    VAR_11->data_off += VAR_17;
   }
  }
 }

 return (VAR_13);
}
