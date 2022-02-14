
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufobj {scalar_t__ bo_numoutput; int bo_flag; } ;


 int FUNC_0 (struct bufobj*) ;
 int FUNC_1 (struct bufobj*) ;
 int VAR_0 ;
 int FUNC_2 (int ,char*) ;
 int VAR_1 ;
 int FUNC_3 (scalar_t__*,int ,int,char*,int) ;

int
FUNC_4(struct bufobj *VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5;

 FUNC_2(VAR_2 != ((void*)0), ("NULL bo in bufobj_wwait"));
 FUNC_0(VAR_2);
 VAR_5 = 0;
 while (VAR_2->bo_numoutput) {
  VAR_2->bo_flag |= VAR_0;
  VAR_5 = FUNC_3(&VAR_2->bo_numoutput, FUNC_1(VAR_2),
      VAR_3 | (VAR_1 + 1), "bo_wwait", VAR_4);
  if (VAR_5)
   break;
 }
 return (VAR_5);
}
