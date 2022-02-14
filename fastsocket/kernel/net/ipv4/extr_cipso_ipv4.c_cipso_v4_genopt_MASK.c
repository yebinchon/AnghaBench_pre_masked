
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct netlbl_lsm_secattr {int dummy; } ;
struct cipso_v4_doi {int* tags; } ;


 scalar_t__ VAR_0 ;

 int VAR_1 ;

 scalar_t__ VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct cipso_v4_doi const*,struct netlbl_lsm_secattr const*,unsigned char*,scalar_t__) ;
 int FUNC_1 (struct cipso_v4_doi const*,unsigned char*,int) ;
 int FUNC_2 (struct cipso_v4_doi const*,struct netlbl_lsm_secattr const*,unsigned char*,scalar_t__) ;
 int FUNC_3 (struct cipso_v4_doi const*,struct netlbl_lsm_secattr const*,unsigned char*,scalar_t__) ;
 int FUNC_4 (struct cipso_v4_doi const*,struct netlbl_lsm_secattr const*,unsigned char*,scalar_t__) ;
 int FUNC_5 (unsigned char*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_6(unsigned char *VAR_5, u32 VAR_6,
      const struct cipso_v4_doi *VAR_7,
      const struct netlbl_lsm_secattr *VAR_8)
{
 int VAR_9;
 u32 VAR_10;

 if (VAR_6 <= VAR_0)
  return -VAR_3;




 VAR_10 = 0;
 do {
  FUNC_5(VAR_5, 0, VAR_6);
  switch (VAR_7->tags[VAR_10]) {
  case 128:
   VAR_9 = FUNC_3(VAR_7,
         VAR_8,
         &VAR_5[VAR_0],
         VAR_6 - VAR_0);
   break;
  case 131:
   VAR_9 = FUNC_0(VAR_7,
         VAR_8,
         &VAR_5[VAR_0],
         VAR_6 - VAR_0);
   break;
  case 129:
   VAR_9 = FUNC_4(VAR_7,
         VAR_8,
         &VAR_5[VAR_0],
         VAR_6 - VAR_0);
   break;
  case 130:
   VAR_9 = FUNC_2(VAR_7,
         VAR_8,
         &VAR_5[VAR_0],
         VAR_6 - VAR_0);
   break;
  default:
   return -VAR_4;
  }

  VAR_10++;
 } while (VAR_9 < 0 &&
   VAR_10 < VAR_2 &&
   VAR_7->tags[VAR_10] != VAR_1);
 if (VAR_9 < 0)
  return VAR_9;
 FUNC_1(VAR_7, VAR_5, VAR_9);
 return VAR_0 + VAR_9;
}
