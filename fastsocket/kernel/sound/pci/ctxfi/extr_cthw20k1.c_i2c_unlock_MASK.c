
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hw {int dummy; } ;


 int FUNC_0 (struct hw*,int) ;
 int FUNC_1 (struct hw*,int,int) ;

__attribute__((used)) static int FUNC_2(struct hw *VAR_0)
{
 if ((FUNC_0(VAR_0, 0xcc) & 0xff) == 0xaa)
  return 0;

 FUNC_1(VAR_0, 0xcc, 0x8c);
 FUNC_1(VAR_0, 0xcc, 0x0e);
 if ((FUNC_0(VAR_0, 0xcc) & 0xff) == 0xaa)
  return 0;

 FUNC_1(VAR_0, 0xcc, 0xee);
 FUNC_1(VAR_0, 0xcc, 0xaa);
 if ((FUNC_0(VAR_0, 0xcc) & 0xff) == 0xaa)
  return 0;

 return -1;
}
