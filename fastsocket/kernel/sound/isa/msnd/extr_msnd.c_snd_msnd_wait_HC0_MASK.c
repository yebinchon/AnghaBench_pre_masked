
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_msnd {unsigned int io; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct snd_msnd *VAR_3)
{
 unsigned int VAR_4 = VAR_3->io;
 int VAR_5 = 1000;

 while (VAR_5-- > 0)
  if (!(FUNC_0(VAR_4 + VAR_2) & VAR_1))
   return 0;

 return -VAR_0;
}
