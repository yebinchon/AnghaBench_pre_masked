
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int io; } ;
typedef TYPE_1__ multisound_dev_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(multisound_dev_t *VAR_3)
{
 register unsigned int VAR_4 = VAR_3->io;
 register int VAR_5 = 1000;

 while(VAR_5-- > 0)
  if (FUNC_0(VAR_4 + VAR_2) & VAR_1)
   return 0;

 return -VAR_0;
}
