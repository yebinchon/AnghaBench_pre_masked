
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;


 int FUNC_0 (int ,char*,int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_1(
 size_t VAR_1,
 size_t VAR_2
 )
{
 if (VAR_1 != VAR_2) {
  (void) FUNC_0(VAR_0,
          "***Incorrect item size returned by remote host (%d should be %d)\n",
          (u_long)VAR_1, (u_long)VAR_2);
  return 0;
 }
 return 1;
}
