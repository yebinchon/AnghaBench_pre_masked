
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct pt_query_decoder {unsigned int pos; int config; int tcal; int time; } ;
struct pt_packet_decoder {int dummy; } ;
struct TYPE_2__ {int cyc; int mtc; int tma; int cbr; int tsc; } ;
struct pt_packet {int type; TYPE_1__ payload; } ;
typedef int packet ;
 int FUNC_0 (struct pt_packet_decoder*,scalar_t__*) ;
 int FUNC_1 (struct pt_packet_decoder*,struct pt_packet*,int) ;
 int FUNC_2 (struct pt_packet_decoder*,scalar_t__) ;
 int FUNC_3 (int *,int *,int *,int *) ;
 int FUNC_4 (int *,int *,int *,int *) ;
 int FUNC_5 (int *,int *,int *,int *) ;
 int FUNC_6 (int *,int *,int *,int *) ;
 int FUNC_7 (int *,int *,int *,int *) ;
 int FUNC_8 (struct pt_query_decoder*) ;
 int FUNC_9 (struct pt_query_decoder*,scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_10(struct pt_query_decoder *VAR_2,
     struct pt_packet_decoder *VAR_3,
     unsigned int VAR_4)
{
 uint64_t VAR_5, VAR_6;
 int VAR_7;

 if (!VAR_2)
  return -VAR_1;

 VAR_7 = FUNC_9(VAR_2, &VAR_5);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_7 = FUNC_2(VAR_3, VAR_5);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_6 = VAR_5 + VAR_4;
 for (;;) {
  struct pt_packet VAR_8;
  uint64_t VAR_9;

  VAR_7 = FUNC_1(VAR_3, &VAR_8, sizeof(VAR_8));
  if (VAR_7 < 0) {

   if (VAR_7 == -VAR_0)
    VAR_7 = 0;

   return VAR_7;
  }


  VAR_7 = FUNC_0(VAR_3, &VAR_9);
  if (VAR_7 < 0)
   return VAR_7;
  if (VAR_6 <= VAR_9) {
   if (VAR_6 < VAR_9)
    return -VAR_1;

   break;
  }

  switch (VAR_8.type) {
  default:

   break;

  case 133:
  case 131:
  case 128:





   return -VAR_1;

  case 129:

   VAR_7 = FUNC_7(&VAR_2->time,
         &VAR_2->tcal,
         &VAR_8.payload.tsc,
         &VAR_2->config);
   if (VAR_7 < 0)
    return VAR_7;

   break;

  case 135:

   VAR_7 = FUNC_3(&VAR_2->time,
         &VAR_2->tcal,
         &VAR_8.payload.cbr,
         &VAR_2->config);
   if (VAR_7 < 0)
    return VAR_7;

   break;

  case 130:

   VAR_7 = FUNC_6(&VAR_2->time,
         &VAR_2->tcal,
         &VAR_8.payload.tma,
         &VAR_2->config);
   if (VAR_7 < 0)
    return VAR_7;

   break;

  case 132:

   VAR_7 = FUNC_5(&VAR_2->time,
         &VAR_2->tcal,
         &VAR_8.payload.mtc,
         &VAR_2->config);
   if (VAR_7 < 0)
    return VAR_7;

   break;

  case 134:

   VAR_7 = FUNC_4(&VAR_2->time,
         &VAR_2->tcal,
         &VAR_8.payload.cyc,
         &VAR_2->config);
   if (VAR_7 < 0)
    return VAR_7;

   break;
  }
 }

 VAR_2->pos += VAR_4;

 return FUNC_8(VAR_2);
}
