
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iter_donotq {int tree; int region; } ;
struct config_file {scalar_t__ do_ip6; scalar_t__ donotquery_localhost; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct iter_donotq*,char*) ;
 int FUNC_3 (struct iter_donotq*,struct config_file*) ;
 int FUNC_4 (int ) ;

int
FUNC_5(struct iter_donotq* VAR_0, struct config_file* VAR_1)
{
 FUNC_4(VAR_0->region);
 FUNC_0(&VAR_0->tree);
 if(!FUNC_3(VAR_0, VAR_1))
  return 0;
 if(VAR_1->donotquery_localhost) {
  if(!FUNC_2(VAR_0, "127.0.0.0/8"))
   return 0;
  if(VAR_1->do_ip6) {
   if(!FUNC_2(VAR_0, "::1"))
    return 0;
  }
 }
 FUNC_1(&VAR_0->tree);
 return 1;
}
