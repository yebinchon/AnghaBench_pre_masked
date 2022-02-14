
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct knlist {int kl_lockarg; int (* kl_unlock ) (int ) ;scalar_t__ kl_autodestroy; } ;


 int VAR_0 ;
 int FUNC_0 (struct knlist*,int ) ;
 int FUNC_1 (struct knlist*) ;
 scalar_t__ FUNC_2 (struct knlist*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(struct knlist *VAR_1)
{
 bool VAR_2;

 if (VAR_1 == ((void*)0))
  return;
 VAR_2 = VAR_1->kl_autodestroy && FUNC_2(VAR_1);
 VAR_1->kl_unlock(VAR_1->kl_lockarg);
 if (VAR_2) {
  FUNC_1(VAR_1);
  FUNC_0(VAR_1, VAR_0);
 }
}
