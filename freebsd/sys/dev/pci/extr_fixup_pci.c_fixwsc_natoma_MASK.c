
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int ,int,int,int) ;

__attribute__((used)) static void
FUNC_3(device_t VAR_0)
{
    int VAR_1;

    VAR_1 = FUNC_1(VAR_0, 0x50, 2);







    if ((VAR_1 & 0x8000) == 0) {
 FUNC_0(VAR_0, "correcting Natoma config for non-SMP\n");
 VAR_1 |= 0x8000;
 FUNC_2(VAR_0, 0x50, VAR_1, 2);
    }

}
