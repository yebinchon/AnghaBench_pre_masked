
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int FUNC_0 (char*,int,int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3;

 FUNC_2(VAR_0, VAR_1);
 VAR_3 = FUNC_1(VAR_0);
 FUNC_0("S: %02x E: %02x G: %02x\n", VAR_1, VAR_2, VAR_3);
 return (VAR_3 != VAR_2);
}
