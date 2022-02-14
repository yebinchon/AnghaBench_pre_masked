
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcm_channel {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct pcm_channel*) ;
 int FUNC_1 (struct pcm_channel*) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_2(struct pcm_channel *VAR_2, struct pcm_channel *VAR_3, int VAR_4)
{







 if (!(VAR_4 == 1 || VAR_4 == 0))
  return (VAR_1);






 VAR_4 ^= 0x00000001;

 if (VAR_2 != ((void*)0)) {
  FUNC_0(VAR_2);
  VAR_2->flags &= ~VAR_0;
  VAR_2->flags |= (VAR_4 != 0) ? VAR_0 : 0x00000000;
  FUNC_1(VAR_2);
 }

 if (VAR_3 != ((void*)0)) {
  FUNC_0(VAR_3);
  VAR_3->flags &= ~VAR_0;
  VAR_3->flags |= (VAR_4 != 0) ? VAR_0 : 0x00000000;
  FUNC_1(VAR_3);
 }

 return (0);
}
