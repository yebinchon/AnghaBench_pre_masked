
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct COverflowData {TYPE_1__* mType; int mLocation; } ;
struct TYPE_2__ {int mTypeName; } ;


 int FUNC_0 (struct COverflowData*) ;
 int FUNC_1 (char*,int,int *) ;
 int FUNC_2 (char*,char*,int,TYPE_1__*,unsigned long) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int,char*,char*,char*,int ) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(bool VAR_2, struct COverflowData *VAR_3, unsigned long VAR_4)
{
 char VAR_5[VAR_0];
 char VAR_6[VAR_1];

 FUNC_0(VAR_3);

 if (FUNC_4(&VAR_3->mLocation))
  return;

 FUNC_1(VAR_5, VAR_0, &VAR_3->mLocation);
 FUNC_2(VAR_5, VAR_6, VAR_1, VAR_3->mType, VAR_4);

 FUNC_3(VAR_2, "UBSan: Undefined Behavior in %s, negation of %s cannot be represented in type %s\n",
        VAR_5, VAR_6, VAR_3->mType->mTypeName);
}
