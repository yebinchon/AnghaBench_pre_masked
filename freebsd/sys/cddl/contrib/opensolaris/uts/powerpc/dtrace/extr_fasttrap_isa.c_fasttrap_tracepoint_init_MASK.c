
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int proc_t ;
typedef int instr ;
struct TYPE_3__ {scalar_t__ ftt_type; int ftt_instr; int ftt_dest; int ftt_flags; void* ftt_bi; void* ftt_bo; } ;
typedef TYPE_1__ fasttrap_tracepoint_t ;
typedef int fasttrap_probe_type_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (int) ;
 void* FUNC_3 (int) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int *,int*,int,uintptr_t) ;

int
FUNC_9(proc_t *VAR_8, fasttrap_tracepoint_t *VAR_9, uintptr_t VAR_10,
    fasttrap_probe_type_t VAR_11)
{
 uint32_t VAR_12;
 if (FUNC_8(VAR_8, &VAR_12, 4, VAR_10) != 0)
  return (-1);
 VAR_9->ftt_type = VAR_4;
 VAR_9->ftt_instr = VAR_12;

 switch (FUNC_0(VAR_12)) {

 case 0:
 case 1:
 case 2:
 case 4:
 case 5:
 case 6:
 case 30:
 case 39:
 case 58:
 case 62:
 case 3:
  return (-1);
 case 31:
  if (FUNC_2(VAR_12) == 4)
   return (-1);
  else if (FUNC_2(VAR_12) == 444 && FUNC_7(VAR_12) == FUNC_5(VAR_12) &&
      FUNC_7(VAR_12) == FUNC_6(VAR_12))
   VAR_9->ftt_type = VAR_5;
  break;
 case 16:
  VAR_9->ftt_type = VAR_2;
  VAR_9->ftt_dest = VAR_12 & 0x0000FFFC;
  if (VAR_12 & 0x00008000)
   VAR_9->ftt_dest |= 0xFFFF0000;

  if (!(VAR_12 & 0x02))
   VAR_9->ftt_dest += VAR_10;
  VAR_9->ftt_bo = FUNC_4(VAR_12);
  VAR_9->ftt_bi = FUNC_3(VAR_12);
  break;
 case 18:
  VAR_9->ftt_type = VAR_1;
  VAR_9->ftt_dest = VAR_12 & 0x03FFFFFC;
  if (VAR_12 & 0x02000000)
   VAR_9->ftt_dest |= 0xFC000000;

  if (!(VAR_12 & 0x02))
   VAR_9->ftt_dest += VAR_10;
  break;
 case 19:
  switch (FUNC_2(VAR_12)) {
  case 528:
   VAR_9->ftt_type = VAR_3;
   VAR_9->ftt_bo = FUNC_4(VAR_12);
   VAR_9->ftt_bi = FUNC_3(VAR_12);
   break;
  case 16:
   VAR_9->ftt_type = VAR_3;
   VAR_9->ftt_bo = FUNC_4(VAR_12);
   VAR_9->ftt_bi = FUNC_3(VAR_12);
   break;
  };
  break;
 case 24:
  if (FUNC_7(VAR_12) == FUNC_5(VAR_12) &&
      (VAR_12 & 0x0000FFFF) == 0)
   VAR_9->ftt_type = VAR_5;
  break;
 };
 return (0);
}
