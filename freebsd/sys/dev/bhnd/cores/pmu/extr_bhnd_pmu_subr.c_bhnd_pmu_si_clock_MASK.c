
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int chip_id; int chip_rev; } ;
struct bhnd_pmu_query {TYPE_2__ cid; int io_ctx; TYPE_1__* io; } ;
struct TYPE_3__ {int (* rd_chipst ) (int ) ;} ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct bhnd_pmu_query*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct bhnd_pmu_query*,char*,int,int ,int ,int) ;
 int FUNC_2 (struct bhnd_pmu_query*) ;
 int FUNC_3 (struct bhnd_pmu_query*) ;
 int FUNC_4 (struct bhnd_pmu_query*,int ,int ) ;
 int FUNC_5 (struct bhnd_pmu_query*,int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

uint32_t
FUNC_8(struct bhnd_pmu_query *VAR_9)
{
 uint32_t VAR_10;
 uint32_t VAR_11;

 VAR_11 = VAR_6;

 switch (VAR_9->cid.chip_id) {
 case 158:
 case 157:
 case 152:
 case 156:
 case 164:
 case 163:
 case 155:
 case 139:
 case 154:
 case 138:
 case 153:
 case 142:
 case 137:
 case 128:
 case 140:

  VAR_11 = 96000 * 1000;
  break;

 case 135:
 case 133:
 case 134:
  VAR_11 = FUNC_4(VAR_9, VAR_1,
      VAR_4);
  break;

 case 146:
  VAR_11 = FUNC_3(VAR_9);
  break;

 case 145:
  VAR_11 = FUNC_2(VAR_9);
  break;

 case 144:
  if (VAR_9->cid.chip_rev == 0)
   VAR_11 = 38400 * 1000;
  else
   VAR_11 = FUNC_3(VAR_9);
  break;

 case 160:
 case 159:
 case 141:
 case 143:
  VAR_11 = FUNC_3(VAR_9);
  break;

 case 162:
 case 161:

  VAR_11 = 80000 * 1000;
  break;

 case 151:
 case 150:
 case 149:
 case 147:
  VAR_10 = VAR_9->io->rd_chipst(VAR_9->io_ctx);
  if (VAR_10 & VAR_7)
   VAR_11 = 120000 * 1000;
  else
   VAR_11 = 96000 * 1000;
  break;
 case 148:
  VAR_10 = VAR_9->io->rd_chipst(VAR_9->io_ctx);
  if (VAR_10 & VAR_8)
   VAR_11 = 96000 * 1000;
  else
   VAR_11 = 80000 * 1000;
  break;
 case 131:
  VAR_11 = FUNC_4(VAR_9, VAR_2,
      VAR_4);
  break;
 case 130:
 case 132:
  VAR_11 = FUNC_4(VAR_9, VAR_3,
      VAR_4);
  break;
 case 136:
  VAR_11 = FUNC_5(VAR_9, VAR_0,
      VAR_5);
  break;
 case 129:
  VAR_11 = 75000000;
  break;
 default:
  FUNC_1(VAR_9, "No backplane clock specified for chip %#hx rev "
      "%hhd pmurev %hhd, using default %dHz\n",
      VAR_9->cid.chip_id, VAR_9->cid.chip_rev, FUNC_0(VAR_9), VAR_11);
  break;
 }

 return (VAR_11);
}
