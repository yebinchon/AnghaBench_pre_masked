
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cam_eb {scalar_t__ path_id; int refcount; } ;
typedef scalar_t__ path_id_t ;
struct TYPE_2__ {int xpt_busses; } ;


 struct cam_eb* FUNC_0 (int *) ;
 struct cam_eb* FUNC_1 (struct cam_eb*,int ) ;
 int VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static struct cam_eb *
FUNC_4(path_id_t VAR_2)
{
 struct cam_eb *VAR_3;

 FUNC_2();
 for (VAR_3 = FUNC_0(&VAR_1.xpt_busses);
      VAR_3 != ((void*)0);
      VAR_3 = FUNC_1(VAR_3, VAR_0)) {
  if (VAR_3->path_id == VAR_2) {
   VAR_3->refcount++;
   break;
  }
 }
 FUNC_3();
 return (VAR_3);
}
