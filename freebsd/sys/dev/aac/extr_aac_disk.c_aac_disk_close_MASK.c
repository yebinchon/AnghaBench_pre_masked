
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct disk {scalar_t__ d_drv1; } ;
struct aac_disk {int ad_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int FUNC_0 (int *,char*,char*) ;

__attribute__((used)) static int
FUNC_1(struct disk *VAR_3)
{
 struct aac_disk *VAR_4;

 FUNC_0(((void*)0), VAR_2, "");

 VAR_4 = (struct aac_disk *)VAR_3->d_drv1;

 if (VAR_4 == ((void*)0))
  return (VAR_1);

 VAR_4->ad_flags &= ~VAR_0;
 return (0);
}
