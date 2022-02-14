
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_set_type {int revision; int family; int name; int list; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int ,int ,int ) ;
 int FUNC_6 (char*,int ,int ,int ) ;
 int FUNC_7 () ;

void
FUNC_8(struct ip_set_type *VAR_0)
{
 FUNC_2();
 if (!FUNC_1(VAR_0->name, VAR_0->family, VAR_0->revision)) {
  FUNC_6("ip_set type %s, family %s, revision %u "
      "not registered\n", VAR_0->name,
      FUNC_0(VAR_0->family), VAR_0->revision);
  goto unlock;
 }
 FUNC_4(&VAR_0->list);
 FUNC_5("type %s, family %s, revision %u unregistered.\n",
   VAR_0->name, FUNC_0(VAR_0->family), VAR_0->revision);
unlock:
 FUNC_3();

 FUNC_7();
}
