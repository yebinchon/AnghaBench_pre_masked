
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct CCFICheckFailData {scalar_t__ mCheckKind; TYPE_1__* mType; int mLocation; } ;
struct TYPE_2__ {int mTypeName; } ;


 int FUNC_0 (struct CCFICheckFailData*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,int,int *) ;
 int VAR_2 ;
 int FUNC_3 (int,char*,char*,int ,int ,unsigned long,...) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(bool VAR_3, struct CCFICheckFailData *VAR_4, unsigned long VAR_5, bool *VAR_6, bool *VAR_7, unsigned long *VAR_8, unsigned long *VAR_9)
{
 char VAR_10[VAR_2];






 FUNC_0(VAR_4);

 if (FUNC_4(&VAR_4->mLocation))
  return;

 FUNC_2(VAR_10, VAR_2, &VAR_4->mLocation);

 if (VAR_4->mCheckKind == VAR_0 || VAR_4->mCheckKind == VAR_1) {
  FUNC_3(VAR_3, "UBSan: Undefined Behavior in %s, control flow integrity check for type %s failed during %s (vtable address %#lx)\n",
        VAR_10, VAR_4->mType->mTypeName, FUNC_1(VAR_4->mCheckKind), VAR_5);
 } else {
  FUNC_3(VAR_3 || VAR_7, "UBSan: Undefined Behavior in %s, control flow integrity check for type %s failed during %s (vtable address %#lx; %s vtable; from %s handler; Program Counter %#lx; Frame Pointer %#lx)\n",
        VAR_10, VAR_4->mType->mTypeName, FUNC_1(VAR_4->mCheckKind), VAR_5, *VAR_6 ? "valid" : "invalid", *VAR_7 ? "unrecoverable" : "recoverable", *VAR_8, *VAR_9);
 }
}
