
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
struct TYPE_3__ {int cat; } ;
struct TYPE_4__ {TYPE_1__ mls; } ;
struct netlbl_lsm_secattr {TYPE_2__ attr; } ;
struct cipso_v4_doi {int dummy; } ;
typedef int __be16 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static int FUNC_3(const struct cipso_v4_doi *VAR_6,
         const struct netlbl_lsm_secattr *VAR_7,
         unsigned char *VAR_8,
         u32 VAR_9)
{
 int VAR_10 = -1;
 u16 VAR_11[VAR_3 * 2];
 u32 VAR_12 = 0;
 u32 VAR_13 = 0;


 if (VAR_9 >
     (VAR_1 - VAR_0 - VAR_2))
  return -VAR_5;

 for (;;) {
  VAR_10 = FUNC_1(VAR_7->attr.mls.cat,
        VAR_10 + 1);
  if (VAR_10 < 0)
   break;
  VAR_13 += (VAR_10 == 0 ? 0 : sizeof(u16));
  if (VAR_13 > VAR_9)
   return -VAR_5;
  VAR_11[VAR_12++] = VAR_10;

  VAR_10 = FUNC_2(VAR_7->attr.mls.cat,
            VAR_10);
  if (VAR_10 < 0)
   return -VAR_4;
  VAR_13 += sizeof(u16);
  if (VAR_13 > VAR_9)
   return -VAR_5;
  VAR_11[VAR_12++] = VAR_10;
 }

 for (VAR_10 = 0; VAR_12 > 0;) {
  *((__be16 *)&VAR_8[VAR_10]) = FUNC_0(VAR_11[--VAR_12]);
  VAR_10 += 2;
  VAR_12--;
  if (VAR_11[VAR_12] != 0) {
   *((__be16 *)&VAR_8[VAR_10]) = FUNC_0(VAR_11[VAR_12]);
   VAR_10 += 2;
  }
 }

 return VAR_13;
}
