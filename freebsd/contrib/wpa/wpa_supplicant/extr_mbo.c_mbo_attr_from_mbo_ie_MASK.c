
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef enum mbo_attr_id { ____Placeholder_mbo_attr_id } mbo_attr_id ;


 int VAR_0 ;
 int const* FUNC_0 (int const*,int,int) ;

const u8 * FUNC_1(const u8 *VAR_1, enum mbo_attr_id VAR_2)
{
 const u8 *VAR_3;
 u8 VAR_4 = VAR_1[1];

 if (VAR_4 < VAR_0 - 2)
  return ((void*)0);
 VAR_3 = VAR_1 + VAR_0;

 return FUNC_0(VAR_3, 2 + VAR_4 - VAR_0, VAR_2);
}
