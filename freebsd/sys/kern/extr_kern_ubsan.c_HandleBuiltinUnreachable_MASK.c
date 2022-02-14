
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct CUnreachableData {int mLocation; } ;


 int FUNC_0 (struct CUnreachableData*) ;
 int FUNC_1 (char*,int,int *) ;
 int VAR_0 ;
 int FUNC_2 (int,char*,char*) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(bool VAR_1, struct CUnreachableData *VAR_2)
{
 char VAR_3[VAR_0];

 FUNC_0(VAR_2);

 if (FUNC_3(&VAR_2->mLocation))
  return;

 FUNC_1(VAR_3, VAR_0, &VAR_2->mLocation);

 FUNC_2(VAR_1, "UBSan: Undefined Behavior in %s, calling __builtin_unreachable()\n",
        VAR_3);
}
