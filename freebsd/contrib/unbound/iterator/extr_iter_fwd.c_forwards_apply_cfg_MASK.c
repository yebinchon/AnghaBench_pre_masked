
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iter_forwards {int tree; } ;
struct config_file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct iter_forwards*) ;
 int FUNC_1 (struct iter_forwards*) ;
 int FUNC_2 (struct iter_forwards*,struct config_file*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct iter_forwards*,struct config_file*) ;

int
FUNC_5(struct iter_forwards* VAR_1, struct config_file* VAR_2)
{
 FUNC_0(VAR_1);
 VAR_1->tree = FUNC_3(VAR_0);
 if(!VAR_1->tree)
  return 0;


 if(!FUNC_4(VAR_1, VAR_2))
  return 0;
 if(!FUNC_2(VAR_1, VAR_2))
  return 0;
 FUNC_1(VAR_1);
 return 1;
}
