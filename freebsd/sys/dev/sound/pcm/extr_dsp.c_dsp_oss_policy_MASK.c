
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcm_channel {int dummy; } ;


 int FUNC_0 (struct pcm_channel*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct pcm_channel*) ;
 int VAR_2 ;
 int FUNC_2 (struct pcm_channel*,int) ;

__attribute__((used)) static int
FUNC_3(struct pcm_channel *VAR_3, struct pcm_channel *VAR_4, int VAR_5)
{
 int VAR_6;

 if (VAR_5 < VAR_1 || VAR_5 > VAR_0)
  return (VAR_2);


 VAR_6 = 0;

 if (VAR_4) {
  FUNC_0(VAR_4);
  VAR_6 = FUNC_2(VAR_4, VAR_5);
  FUNC_1(VAR_4);
 }

 if (VAR_3 && VAR_6 == 0) {
  FUNC_0(VAR_3);
  VAR_6 = FUNC_2(VAR_3, VAR_5);
  FUNC_1(VAR_3);
 }

 if (VAR_6)
  VAR_6 = VAR_2;

 return (VAR_6);
}
