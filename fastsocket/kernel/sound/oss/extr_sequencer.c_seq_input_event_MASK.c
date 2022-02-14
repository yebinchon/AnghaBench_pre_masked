
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long (* get_time ) (int ) ;} ;


 unsigned char VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned char VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_0 (unsigned char*,int) ;
 scalar_t__ VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long FUNC_1 (int ) ;
 TYPE_1__* VAR_7 ;
 int VAR_8 ;

void FUNC_2(unsigned char *VAR_9, int VAR_10)
{
 unsigned long VAR_11;

 if (VAR_5 == VAR_1)
  VAR_11 = VAR_7->get_time(VAR_8);
 else
  VAR_11 = VAR_3 - VAR_6;

 if (VAR_11 != VAR_4)
 {
  unsigned char VAR_12[8];

  VAR_12[0] = VAR_0;
  VAR_12[1] = VAR_2;
  VAR_12[2] = 0;
  VAR_12[3] = 0;
  *(unsigned int *) &VAR_12[4] = VAR_11;

  FUNC_0(VAR_12, 8);
  VAR_4 = VAR_11;
 }
 FUNC_0(VAR_9, VAR_10);
}
