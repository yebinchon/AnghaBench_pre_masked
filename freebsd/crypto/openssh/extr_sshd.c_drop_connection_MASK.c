
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int max_startups_begin; int max_startups; int max_startups_rate; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,int,int) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static int
FUNC_2(int VAR_1)
{
 int VAR_2, VAR_3;

 if (VAR_1 < VAR_0.max_startups_begin)
  return 0;
 if (VAR_1 >= VAR_0.max_startups)
  return 1;
 if (VAR_0.max_startups_rate == 100)
  return 1;

 VAR_2 = 100 - VAR_0.max_startups_rate;
 VAR_2 *= VAR_1 - VAR_0.max_startups_begin;
 VAR_2 /= VAR_0.max_startups - VAR_0.max_startups_begin;
 VAR_2 += VAR_0.max_startups_rate;
 VAR_3 = FUNC_0(100);

 FUNC_1("drop_connection: p %d, r %d", VAR_2, VAR_3);
 return (VAR_3 < VAR_2) ? 1 : 0;
}
