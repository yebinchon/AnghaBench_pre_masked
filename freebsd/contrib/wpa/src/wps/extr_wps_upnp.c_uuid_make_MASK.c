
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int*,int ) ;

__attribute__((used)) static int FUNC_1(u8 VAR_1[VAR_0])
{
 if (FUNC_0(VAR_1, VAR_0) < 0)
  return -1;


 VAR_1[6] &= 0x0f; VAR_1[6] |= (4 << 4);
 VAR_1[8] &= 0x3f; VAR_1[8] |= 0x80;

 return 0;
}
