
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * mFilename; } ;
struct CAlignmentAssumptionData {TYPE_1__ mAssumptionLocation; TYPE_1__ mLocation; } ;


 int FUNC_0 (struct CAlignmentAssumptionData*) ;
 int FUNC_1 (char*,int,TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_2 (int,char*,char*,unsigned long,unsigned long,unsigned long,...) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_4(bool VAR_1, struct CAlignmentAssumptionData *VAR_2, unsigned long VAR_3, unsigned long VAR_4, unsigned long VAR_5)
{
 char VAR_6[VAR_0];
 char VAR_7[VAR_0];
 unsigned long VAR_8;

 FUNC_0(VAR_2);

 if (FUNC_3(&VAR_2->mLocation))
  return;

 FUNC_1(VAR_6, VAR_0, &VAR_2->mLocation);

 VAR_8 = VAR_3 - VAR_5;

 if (VAR_2->mAssumptionLocation.mFilename != ((void*)0)) {
  FUNC_1(VAR_7, VAR_0,
      &VAR_2->mAssumptionLocation);
  FUNC_2(VAR_1, "UBSan: Undefined Behavior in %s, alignment assumption of %#lx for pointer %#lx (offset %#lx), asumption made in %s\n",
      VAR_6, VAR_4, VAR_8, VAR_5,
      VAR_7);
 } else {
  FUNC_2(VAR_1, "UBSan: Undefined Behavior in %s, alignment assumption of %#lx for pointer %#lx (offset %#lx)\n",
      VAR_6, VAR_4, VAR_8, VAR_5);
 }
}
