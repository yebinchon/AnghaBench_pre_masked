
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_1);
 if (VAR_3)
  FUNC_1(VAR_2, "failed to set power state, err=%d\n", VAR_3);

 return (FUNC_2(VAR_2));
}
