
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int KBDC ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int,int) ;

__attribute__((used)) static int
FUNC_3(KBDC VAR_3, int VAR_4)
{
 FUNC_0(VAR_3, 10);

 if (!FUNC_2(VAR_3, 0xff, VAR_4)) {
  FUNC_1(VAR_1, "psm: failed to restore the keyboard controller "
      "command byte.\n");
  FUNC_0(VAR_3, 10);
  return (VAR_0);
 } else {
  FUNC_0(VAR_3, 10);
  return (VAR_2);
 }
}
