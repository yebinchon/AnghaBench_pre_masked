
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {TYPE_2__* std; } ;
struct cipso_v4_doi {int type; TYPE_1__ map; } ;
struct TYPE_6__ {int cipso_size; int* cipso; } ;
struct TYPE_5__ {TYPE_3__ cat; } ;


 int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (unsigned char const*,int,int,int) ;

__attribute__((used)) static int FUNC_1(const struct cipso_v4_doi *VAR_2,
          const unsigned char *VAR_3,
          u32 VAR_4)
{
 int VAR_5 = -1;
 u32 VAR_6 = VAR_4 * 8;
 u32 VAR_7;
 u32 *VAR_8;

 switch (VAR_2->type) {
 case 129:
  return 0;
 case 128:
  VAR_7 = VAR_2->map.std->cat.cipso_size;
  VAR_8 = VAR_2->map.std->cat.cipso;
  for (;;) {
   VAR_5 = FUNC_0(VAR_3,
         VAR_6,
         VAR_5 + 1,
         1);
   if (VAR_5 < 0)
    break;
   if (VAR_5 >= VAR_7 ||
       VAR_8[VAR_5] >= VAR_0)
    return -VAR_1;
  }

  if (VAR_5 == -1)
   return 0;
  break;
 }

 return -VAR_1;
}
