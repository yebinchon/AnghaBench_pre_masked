
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct CInvalidBuiltinData {int mKind; int mLocation; } ;


 int FUNC_0 (struct CInvalidBuiltinData*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int,int *) ;
 int VAR_0 ;
 int FUNC_3 (int,char*,char*,int ) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(bool VAR_1, struct CInvalidBuiltinData *VAR_2)
{
 char VAR_3[VAR_0];

 FUNC_0(VAR_2);

 if (FUNC_4(&VAR_2->mLocation))
  return;

 FUNC_2(VAR_3, VAR_0, &VAR_2->mLocation);

 FUNC_3(VAR_1, "UBSan: Undefined Behavior in %s, passing zero to %s, which is not a valid argument\n",
        VAR_3, FUNC_1(VAR_2->mKind));
}
