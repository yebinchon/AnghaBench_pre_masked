
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {struct prison* cr_prison; } ;
struct prison {int dummy; } ;


 int VAR_0 ;
 struct prison* FUNC_0 (struct prison*,int ) ;
 int FUNC_1 (struct prison*) ;
 int FUNC_2 (struct prison*) ;

__attribute__((used)) static struct prison *
FUNC_3(struct ucred *VAR_1)
{
 struct prison *VAR_2, *VAR_3;

 VAR_2 = VAR_1->cr_prison;
 FUNC_1(VAR_2);
 VAR_3 = FUNC_0(VAR_2, VAR_0);
 FUNC_2(VAR_2);
 return VAR_3;
}
