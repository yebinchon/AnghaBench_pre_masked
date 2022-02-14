
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cam_eb {scalar_t__ path_id; } ;
typedef scalar_t__ path_id_t ;
struct TYPE_2__ {int xpt_busses; int xpt_topo_lock; } ;


 int VAR_0 ;
 struct cam_eb* FUNC_0 (int *) ;
 struct cam_eb* FUNC_1 (struct cam_eb*,int ) ;
 int VAR_1 ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (char*,scalar_t__,char*,char const**) ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static path_id_t
FUNC_4(void)
{
 struct cam_eb *VAR_3;
 path_id_t VAR_4;
 const char *VAR_5;

 FUNC_2(&VAR_2.xpt_topo_lock, VAR_0);
 VAR_4 = 0;
 VAR_3 = FUNC_0(&VAR_2.xpt_busses);
retry:

 while (VAR_3 != ((void*)0) && VAR_3->path_id <= VAR_4) {
  if (VAR_3->path_id == VAR_4)
   VAR_4++;
  VAR_3 = FUNC_1(VAR_3, VAR_1);
 }





 if (FUNC_3("scbus", VAR_4, "at", &VAR_5) == 0) {
  ++VAR_4;

  goto retry;
 }
 return (VAR_4);
}
