
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ mFilename; } ;
struct CNonNullArgData {TYPE_1__ mAttributeLocation; int mArgIndex; TYPE_1__ mLocation; } ;


 int FUNC_0 (struct CNonNullArgData*) ;
 int FUNC_1 (char*,int,TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_2 (int,char*,char*,int ,char*,char*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_4(bool VAR_1, struct CNonNullArgData *VAR_2)
{
 char VAR_3[VAR_0];
 char VAR_4[VAR_0];

 FUNC_0(VAR_2);

 if (FUNC_3(&VAR_2->mLocation))
  return;

 FUNC_1(VAR_3, VAR_0, &VAR_2->mLocation);
 if (VAR_2->mAttributeLocation.mFilename)
  FUNC_1(VAR_4, VAR_0, &VAR_2->mAttributeLocation);
 else
  VAR_4[0] = '\0';

 FUNC_2(VAR_1, "UBSan: Undefined Behavior in %s, null pointer passed as argument %d, which is declared to never be null%s%s\n",
        VAR_3, VAR_2->mArgIndex, VAR_2->mAttributeLocation.mFilename ? ", nonnull/_Nonnull specified in " : "", VAR_4);
}
