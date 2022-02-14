
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufobj {scalar_t__ bo_numoutput; int bo_flag; } ;


 int FUNC_0 (struct bufobj*) ;
 int FUNC_1 (struct bufobj*) ;
 int VAR_0 ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (scalar_t__*) ;

void
FUNC_4(struct bufobj *VAR_1)
{

 FUNC_2(VAR_1 != ((void*)0), ("NULL bo in bufobj_wdrop"));
 FUNC_0(VAR_1);
 FUNC_2(VAR_1->bo_numoutput > 0, ("bufobj_wdrop non-positive count"));
 if ((--VAR_1->bo_numoutput == 0) && (VAR_1->bo_flag & VAR_0)) {
  VAR_1->bo_flag &= ~VAR_0;
  FUNC_3(&VAR_1->bo_numoutput);
 }
 FUNC_1(VAR_1);
}
