
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct adapter*) ;
 int FUNC_3 (struct adapter*,int ,int,int*,int) ;
 int FUNC_4 (struct adapter*,int ) ;

__attribute__((used)) static inline uint64_t
FUNC_5(struct adapter *VAR_2, uint32_t VAR_3)
{
 uint32_t VAR_4;

 VAR_4 = FUNC_4(VAR_2, VAR_0) + VAR_3 * VAR_1;

 if (FUNC_2(VAR_2)) {
  uint64_t VAR_5;

  FUNC_3(VAR_2, 0, VAR_4 + 16, (uint32_t *)&VAR_5, 8);
  return (FUNC_1(VAR_5));
 } else {
  uint32_t VAR_6;

  FUNC_3(VAR_2, 0, VAR_4 + 24, &VAR_6, 4);
  return (FUNC_0(VAR_6));
 }
}
