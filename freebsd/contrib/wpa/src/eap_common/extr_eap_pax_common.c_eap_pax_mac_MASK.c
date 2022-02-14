
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__ const*,size_t,size_t,scalar_t__ const**,size_t*,scalar_t__*) ;
 int FUNC_1 (scalar_t__*,scalar_t__*,int ) ;

int FUNC_2(u8 VAR_3, const u8 *VAR_4, size_t VAR_5,
  const u8 *VAR_6, size_t VAR_7,
  const u8 *VAR_8, size_t VAR_9,
  const u8 *VAR_10, size_t VAR_11,
  u8 *VAR_12)
{
 u8 VAR_13[VAR_2];
 const u8 *VAR_14[3];
 size_t VAR_15[3];
 size_t VAR_16;


 if (VAR_3 != VAR_0)
  return -1;

 VAR_14[0] = VAR_6;
 VAR_15[0] = VAR_7;
 VAR_14[1] = VAR_8;
 VAR_15[1] = VAR_9;
 VAR_14[2] = VAR_10;
 VAR_15[2] = VAR_11;

 VAR_16 = (VAR_6 ? 1 : 0) + (VAR_8 ? 1 : 0) + (VAR_10 ? 1 : 0);
 if (FUNC_0(VAR_4, VAR_5, VAR_16, VAR_14, VAR_15, VAR_13) < 0)
  return -1;
 FUNC_1(VAR_12, VAR_13, VAR_1);

 return 0;
}
