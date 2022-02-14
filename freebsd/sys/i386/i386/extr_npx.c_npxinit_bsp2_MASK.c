
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union savefpu {int dummy; } savefpu ;
typedef void* u_int ;


 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int,void**) ;
 int FUNC_1 (int,void**) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_2(void)
{
 u_int VAR_3[4];

 if (VAR_2) {
  FUNC_0(0xd, 0x0, VAR_3);
  VAR_1 = VAR_3[1];




  FUNC_1(1, VAR_3);
  VAR_0 = VAR_3[2];
 } else
  VAR_1 = sizeof(union savefpu);
}
