
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct COverflowData {TYPE_1__* mType; int mLocation; } ;
struct TYPE_2__ {int mTypeName; int mTypeInfo; } ;


 int FUNC_0 (struct COverflowData*) ;
 int FUNC_1 (char*,int,int *) ;
 int FUNC_2 (char*,char*,int,TYPE_1__*,unsigned long) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int,char*,char*,char*,char*,char const*,char*,int ) ;
 scalar_t__ FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(bool VAR_3, struct COverflowData *VAR_4, unsigned long VAR_5, unsigned long VAR_6, const char *VAR_7)
{
 char VAR_8[VAR_0];
 char VAR_9[VAR_1];
 char VAR_10[VAR_1];

 FUNC_0(VAR_4);

 if (FUNC_5(&VAR_4->mLocation))
  return;

 FUNC_1(VAR_8, VAR_0, &VAR_4->mLocation);
 FUNC_2(VAR_8, VAR_9, VAR_1, VAR_4->mType, VAR_5);
 FUNC_2(VAR_8, VAR_10, VAR_1, VAR_4->mType, VAR_6);

 FUNC_4(VAR_3, "UBSan: Undefined Behavior in %s, %s integer overflow: %s %s %s cannot be represented in type %s\n",
        VAR_8, FUNC_3(VAR_4->mType->mTypeInfo, VAR_2) ? "signed" : "unsigned", VAR_9, VAR_7, VAR_10, VAR_4->mType->mTypeName);
}
