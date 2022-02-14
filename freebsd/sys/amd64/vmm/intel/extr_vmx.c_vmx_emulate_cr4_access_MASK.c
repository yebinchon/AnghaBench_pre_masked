
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct vmx {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct vmx*,int,int) ;

__attribute__((used)) static int
FUNC_2(struct vmx *VAR_6, int VAR_7, uint64_t VAR_8)
{
 uint64_t VAR_9, VAR_10;


 if ((VAR_8 & 0xf0) != 0x00)
  return (VAR_1);

 VAR_10 = FUNC_1(VAR_6, VAR_7, (VAR_8 >> 8) & 0xf);

 FUNC_0(VAR_2, VAR_10);

 VAR_9 = VAR_10 | VAR_4;
 VAR_9 &= ~VAR_5;
 FUNC_0(VAR_3, VAR_9);

 return (VAR_0);
}
