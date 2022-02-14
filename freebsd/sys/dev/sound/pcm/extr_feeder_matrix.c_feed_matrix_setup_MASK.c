
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
struct pcmchan_matrix {scalar_t__ channels; scalar_t__ id; int mask; int* offset; TYPE_1__* map; } ;
struct feed_matrix_info {int bps; TYPE_2__* matrix; int out; int in; } ;
struct TYPE_4__ {int* chn; int mul; int shift; } ;
struct TYPE_3__ {scalar_t__ type; size_t members; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_1 (struct feed_matrix_info*) ;
 int FUNC_2 (int ,char*,...) ;
 int VAR_16 ;

__attribute__((used)) static int
FUNC_3(struct feed_matrix_info *VAR_17, struct pcmchan_matrix *VAR_18,
    struct pcmchan_matrix *VAR_19)
{
 uint32_t VAR_20, VAR_21, VAR_22, VAR_23, VAR_24;
 int VAR_25, VAR_26;


 if (VAR_17 == ((void*)0) || VAR_18 == ((void*)0) || VAR_19 == ((void*)0) ||
     FUNC_0(VAR_17->in) != VAR_18->channels ||
     FUNC_0(VAR_17->out) != VAR_19->channels ||
     VAR_18->channels < VAR_6 || VAR_18->channels > VAR_5 ||
     VAR_19->channels < VAR_6 || VAR_19->channels > VAR_5)
  return (VAR_0);

 FUNC_1(VAR_17);





 if (VAR_18->id == VAR_19->id && !(VAR_18->id < VAR_3 ||
     VAR_18->id > VAR_4))
  return (0);






 if (VAR_18->id == VAR_2) {
  if (VAR_19->id == VAR_2)
   VAR_23 = VAR_11;
  else if (VAR_19->mask & VAR_10)
   VAR_23 = VAR_10;
  else
   VAR_23 = VAR_11 | VAR_12;
 } else
  VAR_23 = VAR_18->mask;


 for (VAR_22 = VAR_7; VAR_22 <= VAR_8 &&
     VAR_19->map[VAR_22].type != VAR_13; VAR_22 += VAR_15) {
  VAR_24 = VAR_19->map[VAR_22].members & VAR_23;
  if (VAR_24 == 0) {
   VAR_17->matrix[VAR_22].chn[0] = VAR_14;
   continue;
  }

  VAR_21 = 0;
  for (VAR_20 = VAR_7; VAR_20 <= VAR_8;
      VAR_20 += VAR_15) {
   if (VAR_24 & (1 << VAR_20)) {
    if (VAR_18->offset[VAR_20] >= 0 &&
        VAR_18->offset[VAR_20] < (int)VAR_18->channels)
     VAR_17->matrix[VAR_22].chn[VAR_21++] =
         VAR_18->offset[VAR_20] * VAR_17->bps;
    else {
     VAR_17->matrix[VAR_22].chn[VAR_21++] =
         VAR_9;
     break;
    }
   }
  }



  if (VAR_21 > 1) {





   VAR_25 = (1 << (16 - 1)) + 143 - VAR_21;
   VAR_26 = 16;
   while ((VAR_25 & 1) == 0 && VAR_26 > 0) {
    VAR_25 >>= 1;
    VAR_26--;
   }
   VAR_17->matrix[VAR_22].mul = VAR_25;
   VAR_17->matrix[VAR_22].shift = VAR_26;
  }
 }


 FUNC_2(VAR_16, "Total: %zu\n", VAR_22);

 for (VAR_20 = 0; VAR_17->matrix[VAR_20].chn[0] != VAR_9; VAR_20++) {
  FUNC_2(VAR_16, "%zu: [", VAR_20);
  for (VAR_21 = 0; VAR_17->matrix[VAR_20].chn[VAR_21] != VAR_9; VAR_21++) {
   if (VAR_21 != 0)
    FUNC_2(VAR_16, ", ");
   FUNC_2(VAR_16, "%d",
       (VAR_17->matrix[VAR_20].chn[VAR_21] == VAR_14) ?
       0xffffffff : VAR_17->matrix[VAR_20].chn[VAR_21] / VAR_17->bps);
  }
  FUNC_2(VAR_16, "] attn: (x * %d) >> %d\n",
      VAR_17->matrix[VAR_20].mul, VAR_17->matrix[VAR_20].shift);
 }


 return (0);
}
