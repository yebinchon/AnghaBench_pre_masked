
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (int,int ) ;

__attribute__((used)) static int
FUNC_2(const u_char *VAR_2, u_int VAR_3)
{
 int VAR_4;

 if (VAR_3 != sizeof(int32_t))
  return -1;
 VAR_4 = FUNC_0(VAR_2);
 if (FUNC_1(VAR_4, VAR_1) ||
     FUNC_1(VAR_4, VAR_0))
  return VAR_4;
 return -1;
}
