
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int ,int,int ,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_10)
{
 u_int32_t VAR_11, VAR_12, VAR_13, VAR_14;

 VAR_14 = FUNC_3(VAR_10);
 VAR_11 = VAR_14 & 0xffff;
 VAR_12 = FUNC_2(VAR_10);
 VAR_13 = FUNC_4(VAR_10);

 if ((VAR_12 != VAR_2) || (VAR_13 != VAR_3) ||
  (VAR_11 != VAR_4))
  return VAR_1;

 FUNC_1(VAR_10, "S3 graphic card");

 FUNC_0(VAR_10, VAR_9, 0,
    VAR_5, VAR_6);
 FUNC_0(VAR_10, VAR_9, 1,
    VAR_7, VAR_8);

 return VAR_0;

}
