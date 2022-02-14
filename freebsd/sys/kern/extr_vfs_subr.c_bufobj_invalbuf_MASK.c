
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ bv_cnt; } ;
struct bufobj {scalar_t__ bo_numoutput; TYPE_1__ bo_dirty; TYPE_1__ bo_clean; int * bo_object; } ;


 int FUNC_0 (struct bufobj*) ;
 int FUNC_1 (struct bufobj*,int ) ;
 int FUNC_2 (struct bufobj*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (struct bufobj*,int,int) ;
 int FUNC_6 (TYPE_1__*,int,struct bufobj*,int,int) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int *,int ,int ,int ) ;
 int FUNC_9 (int *,char*) ;

int
FUNC_10(struct bufobj *VAR_9, int VAR_10, int VAR_11, int VAR_12)
{
 int VAR_13;

 FUNC_0(VAR_9);
 if (VAR_10 & VAR_7) {
  VAR_13 = FUNC_5(VAR_9, VAR_11, VAR_12);
  if (VAR_13) {
   FUNC_2(VAR_9);
   return (VAR_13);
  }
  if (VAR_9->bo_dirty.bv_cnt > 0) {
   FUNC_2(VAR_9);
   if ((VAR_13 = FUNC_1(VAR_9, VAR_1)) != 0)
    return (VAR_13);




   FUNC_0(VAR_9);
   if (VAR_9->bo_numoutput > 0 || VAR_9->bo_dirty.bv_cnt > 0)
    FUNC_7("vinvalbuf: dirty bufs");
  }
 }





 do {
  VAR_13 = FUNC_6(&VAR_9->bo_clean,
      VAR_10, VAR_9, VAR_11, VAR_12);
  if (VAR_13 == 0 && !(VAR_10 & VAR_5))
   VAR_13 = FUNC_6(&VAR_9->bo_dirty,
       VAR_10, VAR_9, VAR_11, VAR_12);
  if (VAR_13 != 0 && VAR_13 != VAR_0) {
   FUNC_2(VAR_9);
   return (VAR_13);
  }
 } while (VAR_13 != 0);






 do {
  FUNC_5(VAR_9, 0, 0);
  if ((VAR_10 & VAR_8) == 0 && VAR_9->bo_object != ((void*)0)) {
   FUNC_2(VAR_9);
   FUNC_9(VAR_9->bo_object, "bovlbx");
   FUNC_0(VAR_9);
  }
 } while (VAR_9->bo_numoutput > 0);
 FUNC_2(VAR_9);




 if (VAR_9->bo_object != ((void*)0) &&
     (VAR_10 & (VAR_4 | VAR_6 | VAR_5 | VAR_8)) == 0) {
  FUNC_3(VAR_9->bo_object);
  FUNC_8(VAR_9->bo_object, 0, 0, (VAR_10 & VAR_7) ?
      VAR_2 : 0);
  FUNC_4(VAR_9->bo_object);
 }
 return (0);
}
