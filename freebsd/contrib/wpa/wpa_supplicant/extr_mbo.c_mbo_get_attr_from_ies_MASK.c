
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef enum mbo_attr_id { ____Placeholder_mbo_attr_id } mbo_attr_id ;


 int VAR_0 ;
 int * FUNC_0 (int const*,size_t,int ) ;
 int const* FUNC_1 (int const*,int) ;

const u8 * FUNC_2(const u8 *VAR_1, size_t VAR_2,
     enum mbo_attr_id VAR_3)
{
 const u8 *VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_0);
 if (!VAR_4)
  return ((void*)0);

 return FUNC_1(VAR_4, VAR_3);
}
