
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct CFloatCastOverflowData {TYPE_1__* mToType; TYPE_2__* mFromType; int mLocation; } ;
struct TYPE_4__ {int mTypeName; } ;
struct TYPE_3__ {int mTypeName; } ;


 int FUNC_0 (struct CFloatCastOverflowData*) ;
 int FUNC_1 (char*,int,int *) ;
 int FUNC_2 (char*,char*,int,TYPE_2__*,unsigned long) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int,char*,char*,char*,int ,int ) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(bool VAR_2, struct CFloatCastOverflowData *VAR_3, unsigned long VAR_4)
{
 char VAR_5[VAR_0];
 char VAR_6[VAR_1];

 FUNC_0(VAR_3);

 if (FUNC_4(&VAR_3->mLocation))
  return;

 FUNC_1(VAR_5, VAR_0, &VAR_3->mLocation);
 FUNC_2(VAR_5, VAR_6, VAR_1, VAR_3->mFromType, VAR_4);

 FUNC_3(VAR_2, "UBSan: Undefined Behavior in %s, %s (of type %s) is outside the range of representable values of type %s\n",
        VAR_5, VAR_6, VAR_3->mFromType->mTypeName, VAR_3->mToType->mTypeName);
}
