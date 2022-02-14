
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct setlist {int dummy; } ;
struct cpuset {scalar_t__ cs_id; int cs_ref; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct setlist*,struct cpuset*,int ) ;
 int FUNC_1 (struct cpuset*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct setlist *VAR_4, struct cpuset *VAR_5)
{

 if (FUNC_4(&VAR_5->cs_ref) == 0)
  return;
 FUNC_2(&VAR_1);
 FUNC_1(VAR_5, VAR_3);
 if (VAR_5->cs_id != VAR_0)
  FUNC_1(VAR_5, VAR_2);
 FUNC_0(VAR_4, VAR_5, VAR_2);
 FUNC_3(&VAR_1);
}
