
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int romid_t ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int *,char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int ,int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_1, romid_t VAR_2)
{





 if (!FUNC_2(VAR_2)) {
  FUNC_0(VAR_1, "Device romid %8D failed CRC.\n",
      &VAR_2, ":");
  return VAR_0;
 }




 if (FUNC_3(VAR_1, VAR_2) != ((void*)0))
  return 0;

 return FUNC_1(VAR_1, VAR_2);
}
