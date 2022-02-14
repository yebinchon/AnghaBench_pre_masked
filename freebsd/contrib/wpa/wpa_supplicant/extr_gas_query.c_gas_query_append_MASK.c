
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct gas_query_pending {int resp; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int const*,size_t) ;
 scalar_t__ FUNC_2 (int *,size_t) ;

__attribute__((used)) static int FUNC_3(struct gas_query_pending *VAR_1, const u8 *VAR_2,
       size_t VAR_3)
{
 if (FUNC_2(&VAR_1->resp, VAR_3) < 0) {
  FUNC_0(VAR_0, "GAS: No memory to store the response");
  return -1;
 }
 FUNC_1(VAR_1->resp, VAR_2, VAR_3);
 return 0;
}
