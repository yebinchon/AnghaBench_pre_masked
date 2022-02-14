
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdaa_devinfo {int nid; int startnode; int endnode; int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct hdaa_devinfo *VAR_1)
{
 int VAR_2;

 FUNC_2(VAR_1->dev,
     FUNC_1(0,
     VAR_1->nid, VAR_0));
 FUNC_0(100);

 for (VAR_2 = VAR_1->startnode; VAR_2 < VAR_1->endnode; VAR_2++) {
  FUNC_2(VAR_1->dev,
      FUNC_1(0,
      VAR_2, VAR_0));
 }
 FUNC_0(1000);
}
