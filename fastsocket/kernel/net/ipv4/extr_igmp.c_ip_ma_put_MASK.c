
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_mc_list {int interface; int refcnt; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ip_mc_list*) ;

__attribute__((used)) static void FUNC_3(struct ip_mc_list *VAR_0)
{
 if (FUNC_0(&VAR_0->refcnt)) {
  FUNC_1(VAR_0->interface);
  FUNC_2(VAR_0);
 }
}
