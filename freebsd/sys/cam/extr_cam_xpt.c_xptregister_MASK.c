
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cam_sim {struct cam_periph* softc; } ;
struct cam_periph {int * softc; } ;
typedef int cam_status ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 struct cam_periph* VAR_2 ;

__attribute__((used)) static cam_status
FUNC_1(struct cam_periph *VAR_3, void *VAR_4)
{
 struct cam_sim *VAR_5;

 if (VAR_3 == ((void*)0)) {
  FUNC_0("xptregister: periph was NULL!!\n");
  return(VAR_1);
 }

 VAR_5 = (struct cam_sim *)VAR_4;
 VAR_5->softc = VAR_3;
 VAR_2 = VAR_3;
 VAR_3->softc = ((void*)0);

 return(VAR_0);
}
