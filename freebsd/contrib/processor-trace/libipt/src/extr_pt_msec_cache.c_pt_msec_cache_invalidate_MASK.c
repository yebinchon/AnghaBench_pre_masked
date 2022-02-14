
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pt_section {int dummy; } ;
struct TYPE_2__ {int * section; } ;
struct pt_msec_cache {TYPE_1__ msec; } ;


 struct pt_section* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct pt_section*) ;
 int FUNC_2 (struct pt_section*) ;
 int VAR_0 ;

int FUNC_3(struct pt_msec_cache *VAR_1)
{
 struct pt_section *VAR_2;
 int VAR_3;

 if (!VAR_1)
  return -VAR_0;

 VAR_2 = FUNC_0(&VAR_1->msec);
 if (!VAR_2)
  return 0;

 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_1->msec.section = ((void*)0);

 return FUNC_1(VAR_2);
}
