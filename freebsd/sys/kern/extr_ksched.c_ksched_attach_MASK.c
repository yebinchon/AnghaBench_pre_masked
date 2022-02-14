
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {long tv_nsec; scalar_t__ tv_sec; } ;
struct ksched {TYPE_1__ rr_interval; } ;


 int VAR_0 ;
 int VAR_1 ;
 long VAR_2 ;
 struct ksched* FUNC_0 (int,int ,int ) ;
 long FUNC_1 () ;

int
FUNC_2(struct ksched **VAR_3)
{
 struct ksched *VAR_4;

 VAR_4 = FUNC_0(sizeof(*VAR_4), VAR_0, VAR_1);
 VAR_4->rr_interval.tv_sec = 0;
 VAR_4->rr_interval.tv_nsec = 1000000000L / VAR_2 * FUNC_1();
 *VAR_3 = VAR_4;
 return (0);
}
