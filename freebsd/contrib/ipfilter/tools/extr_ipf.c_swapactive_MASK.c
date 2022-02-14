
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int*) ;
 int FUNC_1 (int ,char*) ;
 int VAR_2 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (char*,int) ;

__attribute__((used)) static void FUNC_4()
{
 int VAR_3 = 2;

 if (FUNC_2(VAR_2, 1) != -2 && FUNC_0(VAR_1, VAR_0, &VAR_3) == -1)
  FUNC_1(VAR_1, "ioctl(SIOCSWAPA)");
 else
  FUNC_3("Set %d now inactive\n", VAR_3);
}
