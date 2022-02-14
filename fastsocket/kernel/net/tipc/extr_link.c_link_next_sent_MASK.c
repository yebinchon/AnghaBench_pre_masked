
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct link {int next_out_no; scalar_t__ next_out; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static u32 FUNC_3(struct link *VAR_0)
{
 if (VAR_0->next_out)
  return FUNC_2(FUNC_0(VAR_0->next_out));
 return FUNC_1(VAR_0->next_out_no);
}
