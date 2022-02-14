
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int tv_sec; int tv_usec; } ;
struct TYPE_3__ {int tv_sec; int tv_usec; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_0 (char*,long long,float,int) ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static void FUNC_1(void)
{
 float VAR_3;

 VAR_3 = (VAR_1.tv_sec - VAR_2.tv_sec) * 1000000 + (VAR_1.tv_usec - VAR_2.tv_usec);

 FUNC_0("%lld bytes in %.2f seconds = %.2f Gb/sec\n",
        (long long) VAR_0, VAR_3 / 1000000., (VAR_0 * 8) / (1000. * VAR_3));
}
