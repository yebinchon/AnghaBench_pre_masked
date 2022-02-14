
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ta_root_mode; int ta_size_max; int ta_version; } ;
struct tmpfstestargs {TYPE_1__ ta_uargs; } ;
typedef int off_t ;
typedef int atf_tc_t ;


 int VAR_0 ;
 struct tmpfstestargs* FUNC_0 (int,int) ;
 int FUNC_1 () ;

int
FUNC_2(const atf_tc_t *VAR_1, void **VAR_2, const char *VAR_3,
    off_t VAR_4, void *VAR_5)
{
 int VAR_6;
 struct tmpfstestargs *VAR_7;

 VAR_6 = FUNC_1();
 if (VAR_6 != 0)
  return VAR_6;

 VAR_7 = FUNC_0(1, sizeof(*VAR_7));
 if (VAR_7 == ((void*)0))
  return -1;

 VAR_7->ta_uargs.ta_version = VAR_0;
 VAR_7->ta_uargs.ta_root_mode = 0777;
 VAR_7->ta_uargs.ta_size_max = VAR_4;

 *VAR_2 = VAR_7;

 return 0;
}
