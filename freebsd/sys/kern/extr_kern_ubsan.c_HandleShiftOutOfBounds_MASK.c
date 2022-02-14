
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct CShiftOutOfBoundsData {TYPE_1__* mLHSType; TYPE_1__* mRHSType; int mLocation; } ;
struct TYPE_5__ {int mTypeName; } ;


 int FUNC_0 (struct CShiftOutOfBoundsData*) ;
 int FUNC_1 (char*,int,int *) ;
 int FUNC_2 (char*,char*,int,TYPE_1__*,unsigned long) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int,char*,char*,char*,...) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (char*,TYPE_1__*,unsigned long) ;
 scalar_t__ FUNC_6 (char*,TYPE_1__*,unsigned long,char*) ;
 char* FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_8(bool VAR_2, struct CShiftOutOfBoundsData *VAR_3, unsigned long VAR_4, unsigned long VAR_5)
{
 char VAR_6[VAR_0];
 char VAR_7[VAR_1];
 char VAR_8[VAR_1];

 FUNC_0(VAR_3);

 if (FUNC_4(&VAR_3->mLocation))
  return;

 FUNC_1(VAR_6, VAR_0, &VAR_3->mLocation);
 FUNC_2(VAR_6, VAR_7, VAR_1, VAR_3->mLHSType, VAR_4);
 FUNC_2(VAR_6, VAR_8, VAR_1, VAR_3->mRHSType, VAR_5);

 if (FUNC_5(VAR_6, VAR_3->mRHSType, VAR_5))
  FUNC_3(VAR_2, "UBSan: Undefined Behavior in %s, shift exponent %s is negative\n",
         VAR_6, VAR_8);
 else if (FUNC_6(VAR_6, VAR_3->mRHSType, VAR_5, FUNC_7(VAR_3->mLHSType)))
  FUNC_3(VAR_2, "UBSan: Undefined Behavior in %s, shift exponent %s is too large for %zu-bit type %s\n",
         VAR_6, VAR_8, FUNC_7(VAR_3->mLHSType), VAR_3->mLHSType->mTypeName);
 else if (FUNC_5(VAR_6, VAR_3->mLHSType, VAR_4))
  FUNC_3(VAR_2, "UBSan: Undefined Behavior in %s, left shift of negative value %s\n",
         VAR_6, VAR_7);
 else
  FUNC_3(VAR_2, "UBSan: Undefined Behavior in %s, left shift of %s by %s places cannot be represented in type %s\n",
         VAR_6, VAR_7, VAR_8, VAR_3->mLHSType->mTypeName);
}
