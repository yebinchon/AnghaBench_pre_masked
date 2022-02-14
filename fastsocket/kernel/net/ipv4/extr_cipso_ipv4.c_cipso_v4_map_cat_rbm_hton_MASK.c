
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_9__ {int cat; } ;
struct TYPE_10__ {TYPE_4__ mls; } ;
struct netlbl_lsm_secattr {TYPE_5__ attr; } ;
struct TYPE_8__ {TYPE_2__* std; } ;
struct cipso_v4_doi {int type; TYPE_3__ map; } ;
struct TYPE_6__ {int local_size; int* local; } ;
struct TYPE_7__ {TYPE_1__ cat; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned char*,int,int) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static int FUNC_2(const struct cipso_v4_doi *VAR_3,
         const struct netlbl_lsm_secattr *VAR_4,
         unsigned char *VAR_5,
         u32 VAR_6)
{
 int VAR_7 = -1;
 u32 VAR_8 = VAR_0;
 u32 VAR_9 = 0;
 u32 VAR_10 = VAR_6 * 8;
 u32 VAR_11 = 0;
 u32 *VAR_12 = ((void*)0);

 if (VAR_3->type == 128) {
  VAR_11 = VAR_3->map.std->cat.local_size;
  VAR_12 = VAR_3->map.std->cat.local;
 }

 for (;;) {
  VAR_7 = FUNC_1(VAR_4->attr.mls.cat,
             VAR_7 + 1);
  if (VAR_7 < 0)
   break;

  switch (VAR_3->type) {
  case 129:
   VAR_8 = VAR_7;
   break;
  case 128:
   if (VAR_7 >= VAR_11)
    return -VAR_2;
   VAR_8 = VAR_12[VAR_7];
   if (VAR_8 >= VAR_0)
    return -VAR_2;
   break;
  }
  if (VAR_8 >= VAR_10)
   return -VAR_1;
  FUNC_0(VAR_5, VAR_8, 1);

  if (VAR_8 > VAR_9)
   VAR_9 = VAR_8;
 }

 if (++VAR_9 % 8)
  return VAR_9 / 8 + 1;
 return VAR_9 / 8;
}
