
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned long long u64 ;
typedef int cputime64_t ;
struct TYPE_3__ {int idle; } ;
struct TYPE_4__ {TYPE_1__ cpustat; } ;


 unsigned long long FUNC_0 (int,int *) ;
 TYPE_2__ FUNC_1 (int) ;
 int FUNC_2 (unsigned long long) ;

__attribute__((used)) static cputime64_t FUNC_3(int VAR_0)
{
 u64 VAR_1 = FUNC_0(VAR_0, ((void*)0));
 cputime64_t VAR_2;

 if (VAR_1 == -1ULL)

  VAR_2 = FUNC_1(VAR_0).cpustat.idle;
 else
  VAR_2 = FUNC_2(VAR_1);

 return VAR_2;
}
