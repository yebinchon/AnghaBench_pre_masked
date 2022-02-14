
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_key {int dummy; } ;
struct kvm_event {struct event_key key; } ;


 int FUNC_0 (char*) ;
 struct kvm_event* FUNC_1 (int) ;

__attribute__((used)) static struct kvm_event *FUNC_2(struct event_key *VAR_0)
{
 struct kvm_event *VAR_1;

 VAR_1 = FUNC_1(sizeof(*VAR_1));
 if (!VAR_1) {
  FUNC_0("Not enough memory\n");
  return ((void*)0);
 }

 VAR_1->key = *VAR_0;
 return VAR_1;
}
