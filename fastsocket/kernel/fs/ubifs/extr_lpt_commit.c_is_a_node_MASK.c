
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef void* uint16_t ;
struct ubifs_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int,int *,int) ;
 int FUNC_1 (struct ubifs_info const*,int) ;
 void* FUNC_2 (int **,int*,int) ;

__attribute__((used)) static int FUNC_3(const struct ubifs_info *VAR_4, uint8_t *VAR_5, int VAR_6)
{
 uint8_t *VAR_7 = VAR_5 + VAR_1;
 int VAR_8 = 0, VAR_9, VAR_10;
 uint16_t VAR_11, VAR_12;

 if (VAR_6 < VAR_1 + (VAR_3 + 7) / 8)
  return 0;
 VAR_9 = FUNC_2(&VAR_7, &VAR_8, VAR_3);
 if (VAR_9 == VAR_2)
  return 0;
 VAR_10 = FUNC_1(VAR_4, VAR_9);
 if (!VAR_10 || VAR_10 > VAR_6)
  return 0;
 VAR_8 = 0;
 VAR_7 = VAR_5;
 VAR_11 = FUNC_2(&VAR_7, &VAR_8, VAR_0);
 VAR_12 = FUNC_0(-1, VAR_5 + VAR_1,
    VAR_10 - VAR_1);
 if (VAR_11 != VAR_12)
  return 0;
 return 1;
}
