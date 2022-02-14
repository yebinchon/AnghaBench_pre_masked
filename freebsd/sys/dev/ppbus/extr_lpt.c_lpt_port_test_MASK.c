
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int device_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_0, u_char VAR_1, u_char VAR_2)
{
 int VAR_3, VAR_4;

 VAR_1 = VAR_1 & VAR_2;
 FUNC_3(VAR_0, VAR_1);
 VAR_4 = 10000;
 do {
  FUNC_0(10);
  VAR_3 = FUNC_2(VAR_0) & VAR_2;
 }
 while (VAR_3 != VAR_1 && --VAR_4);
 FUNC_1(("out=%x\tin=%x\ttout=%d\n", VAR_1, VAR_3, VAR_4));
 return (VAR_3 == VAR_1);
}
