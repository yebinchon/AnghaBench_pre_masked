
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union msrinfo {int msr; int * regs; } ;
typedef size_t u_int ;
typedef int register_t ;


 size_t FUNC_0 (int ) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 size_t** VAR_4 ;
 int FUNC_3 (int ) ;

__attribute__((used)) static u_int
FUNC_4(void)
{
 register_t VAR_5;
 union msrinfo VAR_6;
 u_int VAR_7, VAR_8, VAR_9, VAR_10;

 VAR_5 = FUNC_1();

 VAR_6.msr = FUNC_3(VAR_2);
 VAR_7 = FUNC_0(VAR_6.regs[0]);
 VAR_8 = FUNC_0(VAR_6.regs[1]);
 VAR_9 = FUNC_3(VAR_3) & 0x01;

 for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++) {
  if (VAR_7 == VAR_4[VAR_10][0] &&
      VAR_8 == VAR_4[VAR_10][1] &&
      VAR_9 == VAR_4[VAR_10][2]) {
   goto out;
  }
 }
 VAR_10 = VAR_1;
out:
 FUNC_2(VAR_5);
 return (VAR_10);
}
