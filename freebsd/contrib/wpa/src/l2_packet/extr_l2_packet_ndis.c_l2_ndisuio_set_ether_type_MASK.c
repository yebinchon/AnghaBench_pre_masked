
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int proto ;
typedef int USHORT ;
typedef int DWORD ;


 int FUNC_0 (int ,int ,int *,int,int *,int ,int *,int *) ;
 scalar_t__ FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 (unsigned short) ;
 int FUNC_4 (int ,char*,int) ;

__attribute__((used)) static int FUNC_5(unsigned short VAR_2)
{
 USHORT VAR_3 = FUNC_3(VAR_2);
 DWORD VAR_4;

 if (!FUNC_0(FUNC_2(),
        VAR_0, &VAR_3,
        sizeof(VAR_3), ((void*)0), 0, &VAR_4, ((void*)0))) {
  FUNC_4(VAR_1, "L2(NDISUIO): "
      "IOCTL_NDISUIO_SET_ETHER_TYPE failed: %d",
      (int) FUNC_1());
  return -1;
 }

 return 0;
}
