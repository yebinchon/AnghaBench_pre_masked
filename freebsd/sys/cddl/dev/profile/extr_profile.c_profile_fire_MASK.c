
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int profile_probe_t ;
struct TYPE_2__ {scalar_t__ profc_expected; int profc_cyclic; scalar_t__ profc_interval; int * profc_probe; } ;
typedef TYPE_1__ profile_probe_percpu_t ;
typedef int hrtime_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,scalar_t__,int ,int) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void
FUNC_4(void *VAR_2)
{
 profile_probe_percpu_t *VAR_3 = VAR_2;
 profile_probe_t *VAR_4 = VAR_3->profc_probe;
 hrtime_t VAR_5;

 VAR_5 = FUNC_3(FUNC_2() - VAR_3->profc_expected);

 FUNC_1(VAR_4, VAR_5);
 VAR_3->profc_expected += VAR_3->profc_interval;
 FUNC_0(&VAR_3->profc_cyclic,
     VAR_3->profc_expected, 0, VAR_1 | VAR_0);
}
