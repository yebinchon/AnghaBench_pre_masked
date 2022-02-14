
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union msrinfo {int* regs; void* msr; } ;
typedef size_t u_int ;
typedef int register_t ;


 size_t VAR_0 ;
 void* FUNC_0 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int** VAR_3 ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int ,void*) ;

__attribute__((used)) static u_int
FUNC_5(u_int VAR_4)
{
 register_t VAR_5;
 union msrinfo VAR_6;

 if (VAR_4 >= VAR_0) {
  return (0);
 }

 VAR_5 = FUNC_1();


 VAR_6.msr = FUNC_3(VAR_1);
 VAR_6.regs[0] = FUNC_0(VAR_6.regs[0],
          VAR_3[VAR_4][0]);
 VAR_6.regs[1] = FUNC_0(VAR_6.regs[1],
          VAR_3[VAR_4][1]);
 FUNC_4(VAR_1, VAR_6.msr);


 VAR_6.msr = FUNC_3(VAR_2);
 VAR_6.regs[0] = (VAR_6.regs[0] & ~0x01) | VAR_3[VAR_4][2];
 FUNC_4(VAR_2, VAR_6.msr);

 FUNC_2(VAR_5);
 return (1);
}
