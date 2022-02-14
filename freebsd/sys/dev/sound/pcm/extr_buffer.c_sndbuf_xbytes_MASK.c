
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_dbuf {int dummy; } ;


 unsigned int FUNC_0 (unsigned int,int,int) ;
 int FUNC_1 (struct snd_dbuf*) ;
 int FUNC_2 (struct snd_dbuf*) ;

unsigned int
FUNC_3(unsigned int VAR_0, struct snd_dbuf *VAR_1, struct snd_dbuf *VAR_2)
{
 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0) || VAR_0 == 0)
  return 0;

 return FUNC_0(VAR_0, FUNC_1(VAR_1) * FUNC_2(VAR_1),
     FUNC_1(VAR_2) * FUNC_2(VAR_2));
}
