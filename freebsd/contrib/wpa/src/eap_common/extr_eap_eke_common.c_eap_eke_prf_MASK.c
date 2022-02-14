
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__ const*,size_t,size_t,scalar_t__ const**,size_t*,scalar_t__*) ;
 int FUNC_1 (scalar_t__ const*,size_t,size_t,scalar_t__ const**,size_t*,scalar_t__*) ;

__attribute__((used)) static int FUNC_2(u8 VAR_2, const u8 *VAR_3, size_t VAR_4, const u8 *VAR_5,
         size_t VAR_6, const u8 *VAR_7, size_t VAR_8,
         u8 *VAR_9)
{
 const u8 *VAR_10[2];
 size_t VAR_11[2];
 size_t VAR_12 = 1;

 VAR_10[0] = VAR_5;
 VAR_11[0] = VAR_6;
 if (VAR_7) {
  VAR_12++;
  VAR_10[1] = VAR_7;
  VAR_11[1] = VAR_8;
 }

 if (VAR_2 == VAR_0)
  return FUNC_0(VAR_3, VAR_4, VAR_12, VAR_10, VAR_11, VAR_9);
 if (VAR_2 == VAR_1)
  return FUNC_1(VAR_3, VAR_4, VAR_12, VAR_10, VAR_11,
       VAR_9);
 return -1;
}
