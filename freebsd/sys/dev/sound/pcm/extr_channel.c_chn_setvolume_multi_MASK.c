
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcm_channel {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pcm_channel*,int,int,int) ;

int
FUNC_1(struct pcm_channel *VAR_3, int VAR_4, int VAR_5, int VAR_6,
    int VAR_7)
{
 int VAR_8, VAR_9;

 VAR_9 = 0;

 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
  if ((1 << VAR_8) & VAR_0)
   VAR_9 |= FUNC_0(VAR_3, VAR_4, VAR_8, VAR_5);
  else if ((1 << VAR_8) & VAR_1)
   VAR_9 |= FUNC_0(VAR_3, VAR_4, VAR_8, VAR_6) << 8;
  else
   VAR_9 |= FUNC_0(VAR_3, VAR_4, VAR_8, VAR_7) << 16;
 }

 return (VAR_9);
}
