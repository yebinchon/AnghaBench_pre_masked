
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pthread {int refcount; } ;


 int FUNC_0 (struct pthread*) ;
 int FUNC_1 (struct pthread*,struct pthread*) ;
 int FUNC_2 (struct pthread*,struct pthread*) ;

void
FUNC_3(struct pthread *VAR_0, struct pthread *VAR_1)
{
 FUNC_1(VAR_0, VAR_1);
 VAR_1->refcount--;
 FUNC_2(VAR_0, VAR_1);
 FUNC_0(VAR_0);
}
