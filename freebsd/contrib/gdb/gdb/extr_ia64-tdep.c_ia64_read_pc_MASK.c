
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ptid_t ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static CORE_ADDR
FUNC_1 (ptid_t VAR_3)
{
  CORE_ADDR VAR_4 = FUNC_0 (VAR_1, VAR_3);
  CORE_ADDR VAR_5 = FUNC_0 (VAR_0, VAR_3);
  int VAR_6 = (VAR_4 >> 41) & 3;

  return VAR_5 | (VAR_6 * VAR_2);
}
