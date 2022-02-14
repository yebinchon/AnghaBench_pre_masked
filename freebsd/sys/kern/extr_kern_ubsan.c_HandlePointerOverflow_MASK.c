
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct CPointerOverflowData {int mLocation; } ;


 int FUNC_0 (struct CPointerOverflowData*) ;
 int FUNC_1 (char*,int,int *) ;
 int VAR_0 ;
 int FUNC_2 (int,char*,char*,unsigned long,unsigned long) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(bool VAR_1, struct CPointerOverflowData *VAR_2, unsigned long VAR_3, unsigned long VAR_4)
{
 char VAR_5[VAR_0];

 FUNC_0(VAR_2);

 if (FUNC_3(&VAR_2->mLocation))
  return;

 FUNC_1(VAR_5, VAR_0, &VAR_2->mLocation);

 FUNC_2(VAR_1, "UBSan: Undefined Behavior in %s, pointer expression with base %#lx overflowed to %#lx\n",
        VAR_5, VAR_3, VAR_4);
}
