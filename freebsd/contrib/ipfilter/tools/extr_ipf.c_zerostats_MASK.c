
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ipfo_size; scalar_t__ ipfo_offset; int * ipfo_ptr; int ipfo_type; int ipfo_rev; } ;
typedef TYPE_1__ ipfobj_t ;
typedef int friostat_t ;
typedef int fio ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,TYPE_1__*) ;
 int FUNC_2 (int ,char*) ;
 int VAR_4 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int *) ;

void FUNC_5()
{
 ipfobj_t VAR_5;
 friostat_t VAR_6;

 VAR_5.ipfo_rev = VAR_0;
 VAR_5.ipfo_type = VAR_1;
 VAR_5.ipfo_size = sizeof(VAR_6);
 VAR_5.ipfo_ptr = &VAR_6;
 VAR_5.ipfo_offset = 0;

 if (FUNC_3(VAR_4, 1) != -2) {
  if (FUNC_1(VAR_3, VAR_2, &VAR_5) == -1) {
   FUNC_2(VAR_3, "ioctl(SIOCFRZST)");
   FUNC_0(-1);
  }
  FUNC_4(&VAR_6);
 }

}
