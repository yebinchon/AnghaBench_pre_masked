
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcm_channel {int dummy; } ;


 int FUNC_0 (struct pcm_channel*) ;
 int FUNC_1 (struct pcm_channel*) ;
 int FUNC_2 (struct pcm_channel*,unsigned long long*) ;

__attribute__((used)) static int
FUNC_3(struct pcm_channel *VAR_0, struct pcm_channel *VAR_1, unsigned long long *VAR_2)
{
 int VAR_3;

 VAR_3 = 0;

 if (VAR_0 != ((void*)0)) {
  FUNC_0(VAR_0);
  VAR_3 = FUNC_2(VAR_0, VAR_2);
  FUNC_1(VAR_0);
 }

 if (VAR_3 == 0 && VAR_1 != ((void*)0)) {
  FUNC_0(VAR_1);
  VAR_3 = FUNC_2(VAR_1, VAR_2);
  FUNC_1(VAR_1);
 }

 return (VAR_3);
}
