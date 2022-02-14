
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
struct TYPE_6__ {int cipso_size; int* cipso; } ;
struct TYPE_7__ {TYPE_1__ cat; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (unsigned char const*,int,int,int) ;
 int FUNC_1 (int ,int,int ) ;

__attribute__((used)) static int FUNC_2(const struct cipso_v4_doi *VAR_5,
         const unsigned char *VAR_6,
         u32 VAR_7,
         struct netlbl_lsm_secattr *VAR_8)
{
 int VAR_9;
 int VAR_10 = -1;
 u32 VAR_11 = VAR_0;
 u32 VAR_12 = VAR_7 * 8;
 u32 VAR_13 = 0;
 u32 *VAR_14 = ((void*)0);

 if (VAR_5->type == 128) {
  VAR_13 = VAR_5->map.std->cat.cipso_size;
  VAR_14 = VAR_5->map.std->cat.cipso;
 }

 for (;;) {
  VAR_10 = FUNC_0(VAR_6,
      VAR_12,
      VAR_10 + 1,
      1);
  if (VAR_10 < 0) {
   if (VAR_10 == -2)
    return -VAR_1;
   return 0;
  }

  switch (VAR_5->type) {
  case 129:
   VAR_11 = VAR_10;
   break;
  case 128:
   if (VAR_10 >= VAR_13)
    return -VAR_3;
   VAR_11 = VAR_14[VAR_10];
   if (VAR_11 >= VAR_0)
    return -VAR_3;
   break;
  }
  VAR_9 = FUNC_1(VAR_8->attr.mls.cat,
             VAR_11,
             VAR_4);
  if (VAR_9 != 0)
   return VAR_9;
 }

 return -VAR_2;
}
