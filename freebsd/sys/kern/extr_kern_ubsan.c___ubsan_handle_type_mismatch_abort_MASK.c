
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct CTypeMismatchData {int mTypeCheckKind; int mLogAlignment; int mType; int mLocation; } ;


 int FUNC_0 (struct CTypeMismatchData*) ;
 int FUNC_1 (int,int *,int ,int ,int ,unsigned long) ;

void
FUNC_2(struct CTypeMismatchData *VAR_0, unsigned long VAR_1)
{

 FUNC_0(VAR_0);

 FUNC_1(1, &VAR_0->mLocation, VAR_0->mType, VAR_0->mLogAlignment, VAR_0->mTypeCheckKind, VAR_1);
}
