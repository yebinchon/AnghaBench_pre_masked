
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aac_disk {int ad_flags; int ad_disk; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,char*) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_3)
{
 struct aac_disk *VAR_4;

 VAR_4 = (struct aac_disk *)FUNC_0(VAR_3);
 FUNC_2(((void*)0), VAR_2, "");

 if (VAR_4->ad_flags & VAR_0)
  return(VAR_1);

 FUNC_1(VAR_4->ad_disk);

 return(0);
}
