
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcm_channel {int dummy; } ;


 int FUNC_0 (struct pcm_channel*) ;
 int FUNC_1 (struct pcm_channel*) ;
 int VAR_0 ;
 int FUNC_2 (struct pcm_channel*,unsigned long long*) ;

__attribute__((used)) static int
FUNC_3(struct pcm_channel *VAR_1, struct pcm_channel *VAR_2, unsigned long long *VAR_3)
{
 struct pcm_channel *VAR_4;
 int VAR_5;

 VAR_4 = (VAR_1 != ((void*)0)) ? VAR_1 : VAR_2;
 if (VAR_4 != ((void*)0)) {
  FUNC_0(VAR_4);
  VAR_5 = FUNC_2(VAR_4, VAR_3);
  FUNC_1(VAR_4);
 } else
  VAR_5 = VAR_0;

 return (VAR_5);
}
