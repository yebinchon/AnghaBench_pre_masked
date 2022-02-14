
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlink {struct mlink* fsec; struct mlink* name; struct mlink* arch; struct mlink* dsec; } ;


 int FUNC_0 (struct mlink*) ;

__attribute__((used)) static void
FUNC_1(struct mlink *VAR_0)
{

 FUNC_0(VAR_0->dsec);
 FUNC_0(VAR_0->arch);
 FUNC_0(VAR_0->name);
 FUNC_0(VAR_0->fsec);
 FUNC_0(VAR_0);
}
