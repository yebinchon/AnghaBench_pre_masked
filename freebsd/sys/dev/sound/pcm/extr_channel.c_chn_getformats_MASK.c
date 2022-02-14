
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct pcm_channel {int dummy; } ;
struct TYPE_2__ {int* fmtlist; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct pcm_channel*) ;
 TYPE_1__* FUNC_2 (struct pcm_channel*) ;
 scalar_t__ VAR_1 ;

u_int32_t
FUNC_3(struct pcm_channel *VAR_2)
{
 u_int32_t *VAR_3, VAR_4;
 int VAR_5;

 VAR_3 = FUNC_2(VAR_2)->fmtlist;
 VAR_4 = 0;
 for (VAR_5 = 0; VAR_3[VAR_5]; VAR_5++)
  VAR_4 |= VAR_3[VAR_5];


 if (!FUNC_1(VAR_2) && VAR_1)
  VAR_4 |= VAR_0;

 return (FUNC_0(VAR_4));
}
