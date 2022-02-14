
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int chip_id; } ;
struct bhnd_pmu_query {TYPE_1__ cid; } ;
struct TYPE_4__ {int pmurev; int chiprev; int chip; } ;
 int VAR_0 ;
 int FUNC_0 (char*,int ,int ,int ,int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct bhnd_pmu_query*) ;
 int FUNC_3 (struct bhnd_pmu_query*) ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;

uint32_t
FUNC_4(struct bhnd_pmu_query *VAR_3)
{
 uint32_t VAR_4;

 VAR_4 = VAR_0;
 switch (VAR_3->cid.chip_id) {
 case 147:
 case 132:
  VAR_4 = FUNC_2(VAR_3);
  break;
 case 164:
 case 163:
 case 148:
 case 146:
 case 145:
 case 143:
  VAR_4 = FUNC_3(VAR_3);
  break;
 case 167:
 case 162:
 case 161:
 case 154:
 case 160:
 case 169:
 case 168:
 case 159:
 case 158:
 case 141:
 case 140:
 case 157:
 case 152:
 case 151:
 case 149:
 case 153:
 case 150:
 case 144:
 case 138:
 case 165:
 case 156:
 case 155:
 case 139:
 case 128:
 case 142:
 case 136:
 case 134:
 case 135:
 case 166:
 case 130:
 case 133:
 case 129:

  VAR_4 = 20000 * 1000;
  break;
 case 131:
 case 137:

  VAR_4 = 25000 * 1000;
  break;
 default:
  FUNC_0("No ALP clock specified "
    "for chip %s rev %d pmurev %d, using default %d Hz\n",
    FUNC_1(VAR_2->chip, VAR_1, 8), VAR_2->chiprev,
    VAR_2->pmurev, VAR_4);
  break;
 }

 return (VAR_4);
}
