
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ak4114 {TYPE_1__** kctls; int card; } ;
struct TYPE_2__ {int id; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 unsigned char VAR_8 ;
 unsigned char VAR_9 ;
 unsigned char VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,int ,int *) ;

__attribute__((used)) static void FUNC_1(struct ak4114 *VAR_12,
     unsigned char VAR_13, unsigned char VAR_14,
     unsigned char VAR_15, unsigned char VAR_16)
{
 if (!VAR_12->kctls[0])
  return;

 if (VAR_13 & VAR_5)
  FUNC_0(VAR_12->card, VAR_11,
          &VAR_12->kctls[0]->id);
 if (VAR_13 & VAR_10)
  FUNC_0(VAR_12->card, VAR_11,
          &VAR_12->kctls[1]->id);
 if (VAR_14 & VAR_2)
  FUNC_0(VAR_12->card, VAR_11,
          &VAR_12->kctls[2]->id);
 if (VAR_14 & VAR_7)
  FUNC_0(VAR_12->card, VAR_11,
          &VAR_12->kctls[3]->id);


 if (VAR_16 & 0xf0)
  FUNC_0(VAR_12->card, VAR_11,
          &VAR_12->kctls[4]->id);

 if ((VAR_15 & VAR_6) | (VAR_15 & VAR_3))
  FUNC_0(VAR_12->card, VAR_11,
          &VAR_12->kctls[9]->id);
 if (VAR_15 & VAR_8)
  FUNC_0(VAR_12->card, VAR_11,
          &VAR_12->kctls[10]->id);

 if (VAR_15 & VAR_0)
  FUNC_0(VAR_12->card, VAR_11,
          &VAR_12->kctls[11]->id);
 if (VAR_15 & VAR_1)
  FUNC_0(VAR_12->card, VAR_11,
          &VAR_12->kctls[12]->id);
 if (VAR_15 & VAR_4)
  FUNC_0(VAR_12->card, VAR_11,
          &VAR_12->kctls[13]->id);
 if (VAR_15 & VAR_9)
  FUNC_0(VAR_12->card, VAR_11,
          &VAR_12->kctls[14]->id);
}
