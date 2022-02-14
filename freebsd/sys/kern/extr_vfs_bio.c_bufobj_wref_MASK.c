
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufobj {int bo_numoutput; } ;


 int FUNC_0 (struct bufobj*) ;
 int FUNC_1 (struct bufobj*) ;
 int FUNC_2 (int ,char*) ;

void
FUNC_3(struct bufobj *VAR_0)
{

 FUNC_2(VAR_0 != ((void*)0), ("NULL bo in bufobj_wref"));
 FUNC_0(VAR_0);
 VAR_0->bo_numoutput++;
 FUNC_1(VAR_0);
}
