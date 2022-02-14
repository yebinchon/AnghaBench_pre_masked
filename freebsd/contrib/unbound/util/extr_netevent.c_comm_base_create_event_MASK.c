
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ub_event_base {int dummy; } ;
struct internal_base {struct ub_event_base* base; } ;
struct comm_base {struct internal_base* eb; } ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (struct comm_base*) ;
 int FUNC_2 (struct comm_base*) ;

struct comm_base*
FUNC_3(struct ub_event_base* VAR_0)
{
 struct comm_base* VAR_1 = (struct comm_base*)FUNC_0(1,
  sizeof(struct comm_base));
 if(!VAR_1)
  return ((void*)0);
 VAR_1->eb = (struct internal_base*)FUNC_0(1, sizeof(struct internal_base));
 if(!VAR_1->eb) {
  FUNC_1(VAR_1);
  return ((void*)0);
 }
 VAR_1->eb->base = VAR_0;
 FUNC_2(VAR_1);
 return VAR_1;
}
