
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cam_et {int dummy; } ;
struct cam_ed {int mintags; int maxtags; } ;
struct cam_eb {int dummy; } ;
typedef int lun_id_t ;


 struct cam_ed* FUNC_0 (struct cam_eb*,struct cam_et*,int ) ;

__attribute__((used)) static struct cam_ed *
FUNC_1(struct cam_eb *VAR_0, struct cam_et *VAR_1,
    lun_id_t VAR_2)
{
 struct cam_ed *VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
 if (VAR_3 == ((void*)0))
  return (((void*)0));

 VAR_3->mintags = 1;
 VAR_3->maxtags = 1;
 return (VAR_3);
}
