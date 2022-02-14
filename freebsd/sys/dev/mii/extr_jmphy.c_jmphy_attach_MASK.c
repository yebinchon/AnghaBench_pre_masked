
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,int *,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_3)
{
 u_int VAR_4;

 VAR_4 = 0;
 if (FUNC_0(VAR_3, "jme") &&
     (FUNC_2(VAR_3) & VAR_0) != 0)
  VAR_4 |= VAR_1;
 FUNC_1(VAR_3, VAR_4, &VAR_2, 1);
 return (0);
}
