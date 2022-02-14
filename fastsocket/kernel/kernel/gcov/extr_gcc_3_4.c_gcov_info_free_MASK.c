
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gcov_info {struct gcov_info* filename; struct gcov_info* functions; TYPE_1__* counts; } ;
struct TYPE_2__ {int values; } ;


 int FUNC_0 (struct gcov_info*) ;
 unsigned int FUNC_1 (struct gcov_info*) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct gcov_info *VAR_0)
{
 unsigned int VAR_1 = FUNC_1(VAR_0);
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1 ; VAR_2++)
  FUNC_2(VAR_0->counts[VAR_2].values);
 FUNC_0(VAR_0->functions);
 FUNC_0(VAR_0->filename);
 FUNC_0(VAR_0);
}
