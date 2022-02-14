
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;


 scalar_t__ FUNC_0 (scalar_t__*,int,scalar_t__*,size_t,scalar_t__ const*,size_t,scalar_t__*,size_t*) ;
 scalar_t__ FUNC_1 (scalar_t__*,size_t) ;
 scalar_t__ FUNC_2 (scalar_t__*,scalar_t__ const*,size_t) ;
 int FUNC_3 (scalar_t__*,scalar_t__*,size_t) ;
 int FUNC_4 (scalar_t__*,int ,size_t) ;

int FUNC_5(u8 VAR_0, const u8 *VAR_1, size_t VAR_2, u8 *VAR_3,
     u8 *VAR_4)
{
 size_t VAR_5, VAR_6;

 if (FUNC_1(VAR_3, VAR_2) < 0)
  return -1;
 if (FUNC_2(VAR_3, VAR_1, VAR_2) > 0) {

  VAR_3[0] = 0;
 }

 VAR_5 = VAR_2;
 if (FUNC_0(&VAR_0, 1, VAR_3, VAR_2, VAR_1, VAR_2,
      VAR_4, &VAR_5) < 0)
  return -1;
 if (VAR_5 < VAR_2) {
  VAR_6 = VAR_2 - VAR_5;
  FUNC_3(VAR_4 + VAR_6, VAR_4, VAR_5);
  FUNC_4(VAR_4, 0, VAR_6);
 }

 return 0;
}
