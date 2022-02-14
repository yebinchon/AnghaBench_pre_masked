
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct CVLABoundData {int mType; int mLocation; } ;


 int FUNC_0 (struct CVLABoundData*) ;
 int FUNC_1 (char*,int,int *) ;
 int FUNC_2 (char*,char*,int,int ,unsigned long) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int,char*,char*,char*) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(bool VAR_2, struct CVLABoundData *VAR_3, unsigned long VAR_4)
{
 char VAR_5[VAR_0];
 char VAR_6[VAR_1];

 FUNC_0(VAR_3);

 if (FUNC_4(&VAR_3->mLocation))
  return;

 FUNC_1(VAR_5, VAR_0, &VAR_3->mLocation);
 FUNC_2(VAR_5, VAR_6, VAR_1, VAR_3->mType, VAR_4);

 FUNC_3(VAR_2, "UBSan: Undefined Behavior in %s, variable length array bound value %s <= 0\n",
        VAR_5, VAR_6);
}
