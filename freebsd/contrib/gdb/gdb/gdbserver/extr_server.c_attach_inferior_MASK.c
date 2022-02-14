
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,int) ;
 scalar_t__ FUNC_1 (int) ;
 unsigned char FUNC_2 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_3 (int VAR_2, char *VAR_3, unsigned char *VAR_4)
{



  if (FUNC_1 (VAR_2) != 0)
    return -1;

  FUNC_0 (VAR_1, "Attached; pid = %d\n", VAR_2);




  VAR_0 = VAR_2;

  *VAR_4 = FUNC_2 (VAR_3, 0);

  return 0;
}
