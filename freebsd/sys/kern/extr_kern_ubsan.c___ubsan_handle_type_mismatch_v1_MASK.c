
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct CTypeMismatchData_v1 {int mTypeCheckKind; int mLogAlignment; int mType; int mLocation; } ;


 int FUNC_0 (struct CTypeMismatchData_v1*) ;
 int FUNC_1 (int,int *,int ,int ,int ,unsigned long) ;
 int FUNC_2 (int ) ;

void
FUNC_3(struct CTypeMismatchData_v1 *VAR_0, unsigned long VAR_1)
{

 FUNC_0(VAR_0);

 FUNC_1(0, &VAR_0->mLocation, VAR_0->mType, FUNC_2(VAR_0->mLogAlignment), VAR_0->mTypeCheckKind, VAR_1);
}
