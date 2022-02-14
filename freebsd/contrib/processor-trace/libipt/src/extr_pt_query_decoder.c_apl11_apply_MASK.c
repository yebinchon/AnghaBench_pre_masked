
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct pt_time_cal {int dummy; } ;
struct pt_time {int dummy; } ;
struct TYPE_8__ {scalar_t__ begin; } ;
struct pt_query_decoder {TYPE_2__ config; scalar_t__ pos; struct pt_time_cal tcal; struct pt_time time; } ;
struct pt_packet_decoder {int dummy; } ;
struct TYPE_7__ {int cyc; int mtc; int tma; int cbr; int tsc; } ;
struct pt_packet {int type; TYPE_1__ payload; } ;
typedef int packet ;
 int FUNC_0 (struct pt_packet_decoder*,scalar_t__*) ;
 int FUNC_1 (struct pt_packet_decoder*,struct pt_packet*,int) ;
 int FUNC_2 (struct pt_time*,struct pt_time_cal*,int *,TYPE_2__*) ;
 int FUNC_3 (struct pt_time*,struct pt_time_cal*,int *,TYPE_2__*) ;
 int FUNC_4 (struct pt_time*,struct pt_time_cal*,int *,TYPE_2__*) ;
 int FUNC_5 (struct pt_time*,struct pt_time_cal*,int *,TYPE_2__*) ;
 int FUNC_6 (struct pt_time*,struct pt_time_cal*,int *,TYPE_2__*) ;
 int FUNC_7 (struct pt_query_decoder*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_8(struct pt_query_decoder *VAR_3,
         struct pt_packet_decoder *VAR_4)
{
 struct pt_time_cal VAR_5;
 struct pt_time VAR_6;

 if (!VAR_3)
  return -VAR_2;

 VAR_6 = VAR_3->time;
 VAR_5 = VAR_3->tcal;
 for (;;) {
  struct pt_packet VAR_7;
  int VAR_8;

  VAR_8 = FUNC_1(VAR_4, &VAR_7, sizeof(VAR_7));
  if (VAR_8 < 0)
   return VAR_8;

  switch (VAR_7.type) {
  case 135: {
   uint64_t VAR_9;





   VAR_8 = FUNC_0(VAR_4, &VAR_9);
   if (VAR_8 < 0)
    return VAR_8;

   VAR_3->time = VAR_6;
   VAR_3->tcal = VAR_5;
   VAR_3->pos = VAR_3->config.begin + VAR_9;

   return FUNC_7(VAR_3);
  }

  case 150:
   return -VAR_1;

  case 151:
  case 142:
  case 134:
  case 137:
  case 145:
  case 148:
  case 143:
  case 128:
  case 152:
  case 146:
  case 139:
  case 138:
  case 140:

   return 1;

  case 129:
  case 144:
  case 149:

   break;

  case 141:
  case 136:
  case 131:
  case 132:
   return -VAR_0;


  case 130:

   VAR_8 = FUNC_6(&VAR_6, &VAR_5,
         &VAR_7.payload.tsc,
         &VAR_3->config);
   if (VAR_8 < 0)
    return VAR_8;

   break;

  case 154:

   VAR_8 = FUNC_2(&VAR_6, &VAR_5,
         &VAR_7.payload.cbr,
         &VAR_3->config);
   if (VAR_8 < 0)
    return VAR_8;

   break;

  case 133:

   VAR_8 = FUNC_5(&VAR_6, &VAR_5,
         &VAR_7.payload.tma,
         &VAR_3->config);
   if (VAR_8 < 0)
    return VAR_8;

   break;

  case 147:

   VAR_8 = FUNC_4(&VAR_6, &VAR_5,
         &VAR_7.payload.mtc,
         &VAR_3->config);
   if (VAR_8 < 0)
    return VAR_8;

   break;

  case 153:

   VAR_8 = FUNC_3(&VAR_6, &VAR_5,
         &VAR_7.payload.cyc,
         &VAR_3->config);
   if (VAR_8 < 0)
    return VAR_8;

   break;
  }
 }
}
