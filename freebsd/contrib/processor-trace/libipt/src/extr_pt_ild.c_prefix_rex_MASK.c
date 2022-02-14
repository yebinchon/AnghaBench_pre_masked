
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct pt_ild {int dummy; } ;


 int FUNC_0 (struct pt_ild*,int ) ;
 scalar_t__ FUNC_1 (struct pt_ild*) ;
 int FUNC_2 (struct pt_ild*,int ) ;
 int FUNC_3 (struct pt_ild*,int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_4(struct pt_ild *VAR_1, uint8_t VAR_2, uint8_t VAR_3)
{
 (void) VAR_3;

 if (!VAR_1)
  return -VAR_0;

 if (FUNC_1(VAR_1))
  return FUNC_3(VAR_1, VAR_2, FUNC_0(VAR_1, VAR_2));
 else
  return FUNC_2(VAR_1, VAR_2);
}
