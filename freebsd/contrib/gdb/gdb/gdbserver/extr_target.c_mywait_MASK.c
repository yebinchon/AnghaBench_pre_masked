
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned char (* wait ) (char*) ;} ;


 int VAR_0 ;
 unsigned char FUNC_0 (char*) ;
 TYPE_1__* VAR_1 ;

unsigned char
FUNC_1 (char *VAR_2, int VAR_3)
{
  unsigned char VAR_4;

  if (VAR_3)
    VAR_0 = 1;

  VAR_4 = (*VAR_1->wait) (VAR_2);

  if (VAR_3)
    VAR_0 = 0;

  return VAR_4;
}
