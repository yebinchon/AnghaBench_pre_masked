
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfnetlink_subsystem {size_t subsys_id; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 struct nfnetlink_subsystem const** VAR_1 ;

int FUNC_2(const struct nfnetlink_subsystem *VAR_2)
{
 FUNC_0();
 if (VAR_1[VAR_2->subsys_id]) {
  FUNC_1();
  return -VAR_0;
 }
 VAR_1[VAR_2->subsys_id] = VAR_2;
 FUNC_1();

 return 0;
}
