
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct auth_zone {struct auth_zone* zonefile; struct auth_zone* name; int data; int lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct auth_zone*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int *) ;

__attribute__((used)) static void
FUNC_3(struct auth_zone* VAR_1)
{
 if(!VAR_1) return;
 FUNC_1(&VAR_1->lock);
 FUNC_2(&VAR_1->data, VAR_0, ((void*)0));
 FUNC_0(VAR_1->name);
 FUNC_0(VAR_1->zonefile);
 FUNC_0(VAR_1);
}
