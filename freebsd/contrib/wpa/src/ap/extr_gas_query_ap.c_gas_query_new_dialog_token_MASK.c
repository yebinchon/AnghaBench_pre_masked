
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct gas_query_ap {int dummy; } ;


 scalar_t__ FUNC_0 (struct gas_query_ap*,int const*,int) ;

__attribute__((used)) static int FUNC_1(struct gas_query_ap *VAR_0, const u8 *VAR_1)
{
 static int VAR_2 = 0;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < 256; VAR_3++) {
  if (FUNC_0(
       VAR_0, VAR_1, (VAR_2 + VAR_3) % 256))
   break;
 }
 if (VAR_3 == 256)
  return -1;
 VAR_3 = (VAR_2 + VAR_3) % 256;
 VAR_2 = (VAR_3 + 1) % 256;
 return VAR_3;
}
