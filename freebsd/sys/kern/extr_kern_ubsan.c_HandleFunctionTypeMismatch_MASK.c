
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct CFunctionTypeMismatchData {TYPE_1__* mType; int mLocation; } ;
struct TYPE_2__ {int mTypeName; } ;


 int FUNC_0 (struct CFunctionTypeMismatchData*) ;
 int FUNC_1 (char*,int,int *) ;
 int VAR_0 ;
 int FUNC_2 (int,char*,char*,unsigned long,int ) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(bool VAR_1, struct CFunctionTypeMismatchData *VAR_2, unsigned long VAR_3)
{
 char VAR_4[VAR_0];
 FUNC_0(VAR_2);

 if (FUNC_3(&VAR_2->mLocation))
  return;

 FUNC_1(VAR_4, VAR_0, &VAR_2->mLocation);

 FUNC_2(VAR_1, "UBSan: Undefined Behavior in %s, call to function %#lx through pointer to incorrect function type %s\n",
       VAR_4, VAR_3, VAR_2->mType->mTypeName);
}
