
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__ const*,int ,scalar_t__ const*,size_t,scalar_t__*) ;
 int FUNC_1 (scalar_t__ const*,int ,scalar_t__ const*,size_t,scalar_t__*) ;

__attribute__((used)) static int FUNC_2(u8 VAR_4, const u8 *VAR_5, const u8 *VAR_6, size_t VAR_7,
         u8 *VAR_8)
{
 if (VAR_4 == VAR_0)
  return FUNC_0(VAR_5, VAR_2, VAR_6, VAR_7, VAR_8);
 if (VAR_4 == VAR_1)
  return FUNC_1(VAR_5, VAR_3, VAR_6, VAR_7, VAR_8);
 return -1;
}
