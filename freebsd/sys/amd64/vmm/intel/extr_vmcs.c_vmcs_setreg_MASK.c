
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct vmcs {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct vmcs*) ;
 int FUNC_1 (struct vmcs*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int,int ) ;

int
FUNC_5(struct vmcs *VAR_1, int VAR_2, int VAR_3, uint64_t VAR_4)
{
 int VAR_5;
 uint32_t VAR_6;

 if (VAR_3 < 0)
  VAR_6 = VAR_3 & 0x7fffffff;
 else
  VAR_6 = FUNC_2(VAR_3);

 if (VAR_6 == (uint32_t)-1)
  return (VAR_0);

 VAR_4 = FUNC_3(VAR_6, VAR_4);

 if (!VAR_2)
  FUNC_1(VAR_1);

 VAR_5 = FUNC_4(VAR_6, VAR_4);

 if (!VAR_2)
  FUNC_0(VAR_1);

 return (VAR_5);
}
