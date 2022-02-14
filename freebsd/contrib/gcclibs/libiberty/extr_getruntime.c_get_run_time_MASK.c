
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tms {int tms_utime; int tms_stime; } ;
struct TYPE_4__ {int tv_sec; long tv_usec; } ;
struct TYPE_3__ {int tv_sec; long tv_usec; } ;
struct rusage {TYPE_2__ ru_stime; TYPE_1__ ru_utime; } ;


 long VAR_0 ;
 int VAR_1 ;
 long const FUNC_0 () ;
 int FUNC_1 (int ,struct rusage*) ;
 int FUNC_2 (struct tms*) ;

long
FUNC_3 (void)
{
  const long VAR_2 = VAR_0;
  if (VAR_2 <= 1000000)
    return FUNC_0 () * (1000000 / VAR_2);
  else
    return FUNC_0 () / VAR_2;


}
