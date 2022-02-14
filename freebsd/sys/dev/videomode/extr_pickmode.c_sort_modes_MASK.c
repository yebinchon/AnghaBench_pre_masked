
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct videomode {int hdisplay; int vdisplay; int dot_clock; int vtotal; int htotal; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct videomode*,struct videomode*) ;

void
FUNC_3(struct videomode *VAR_0, struct videomode **VAR_1, int VAR_2)
{
 int VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
 int VAR_11, VAR_12;
 struct videomode *VAR_13 = ((void*)0);

 if (VAR_2 < 2)
  return;

 if (*VAR_1 != ((void*)0)) {

  VAR_3 = (*VAR_1)->hdisplay * 100 / (*VAR_1)->vdisplay;
  VAR_4 = FUNC_0(FUNC_0((*VAR_1)->dot_clock * 1000,
      (*VAR_1)->htotal), (*VAR_1)->vtotal);
  if (*VAR_1 != VAR_0) {
   FUNC_2(*VAR_1, VAR_0);
   *VAR_1 = VAR_0;
  }
 } else {





  VAR_5 = 0;
  VAR_6 = 0;
  for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++) {
   if (VAR_0[VAR_11].hdisplay > VAR_5) {
    VAR_5 = VAR_0[VAR_11].hdisplay;
    VAR_6 = VAR_0[VAR_11].vdisplay;
    VAR_13 = &VAR_0[VAR_11];
   } else if (VAR_0[VAR_11].hdisplay == VAR_5 &&
       VAR_0[VAR_11].vdisplay > VAR_6) {
    VAR_6 = VAR_0[VAR_11].vdisplay;
    VAR_13 = &VAR_0[VAR_11];
   }
  }
  VAR_3 = VAR_13->hdisplay * 100 / VAR_13->vdisplay;
  VAR_4 = FUNC_0(FUNC_0(VAR_13->dot_clock * 1000,
      VAR_13->htotal), VAR_13->vtotal);
  if (VAR_13 != VAR_0)
   FUNC_2(VAR_13, VAR_0);
 }


 for (VAR_12 = 1; VAR_12 < VAR_2 - 1; VAR_12++) {
  VAR_9 = 1000;
  VAR_7 = 1000;
  VAR_5 = 0;
  VAR_6 = 0;
  for (VAR_11 = VAR_12; VAR_11 < VAR_2; VAR_11++) {
   VAR_10 = FUNC_1(VAR_4 -
       FUNC_0(FUNC_0(VAR_0[VAR_11].dot_clock * 1000,
       VAR_0[VAR_11].htotal), VAR_0[VAR_11].vtotal));
   VAR_8 = (VAR_0[VAR_11].hdisplay * 100 / VAR_0[VAR_11].vdisplay);
   if (VAR_10 < VAR_9) {
    VAR_9 = VAR_10;
    VAR_13 = &VAR_0[VAR_11];
   }
   if (VAR_10 == VAR_9) {

    if (FUNC_1(VAR_7 - VAR_8) > (VAR_7 / 8) &&
        FUNC_1(VAR_3 - VAR_8) < FUNC_1(VAR_3 - VAR_7)) {
     VAR_7 = VAR_8;
     VAR_13 = &VAR_0[VAR_11];
    }
    if (VAR_8 == VAR_7 ||
        FUNC_1(VAR_7 - VAR_8) <= (VAR_7 / 8)) {
     if (VAR_0[VAR_11].hdisplay > VAR_5) {
      VAR_5 = VAR_0[VAR_11].hdisplay;
      VAR_13 = &VAR_0[VAR_11];
     }
     if (VAR_0[VAR_11].hdisplay == VAR_5 &&
         VAR_0[VAR_11].vdisplay > VAR_6) {
      VAR_6 = VAR_0[VAR_11].vdisplay;
      VAR_13 = &VAR_0[VAR_11];
     }
    }
   }
  }
  if (VAR_13 != &VAR_0[VAR_12])
   FUNC_2(VAR_13, &VAR_0[VAR_12]);
 }
}
