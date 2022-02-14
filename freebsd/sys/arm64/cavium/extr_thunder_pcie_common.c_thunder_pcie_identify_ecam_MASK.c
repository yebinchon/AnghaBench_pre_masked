
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rman_res_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ,int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,char*,int) ;

int
FUNC_4(device_t VAR_6, int *VAR_7)
{
 rman_res_t VAR_8;


 if (!FUNC_0(VAR_1 | VAR_2,
     VAR_0, VAR_3, 0, 0))
  return (VAR_4);

 VAR_8 = FUNC_2(VAR_6, VAR_5, 0);
 *VAR_7 = FUNC_1(VAR_8);

 FUNC_3(VAR_6, "ThunderX quirk, setting ECAM to %d\n", *VAR_7);

 return (0);
}
