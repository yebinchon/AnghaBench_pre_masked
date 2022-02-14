
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ action; char* name; int ino; scalar_t__ mode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int) ;
 int VAR_4 ;
 int FUNC_1 (char*,char*,char*) ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_2(void)
{

 if (VAR_3 && VAR_2.action == VAR_1) {
  FUNC_1("Warning: %s %s\n",
      "End-of-input encountered while extracting", VAR_2.name);
 }
 VAR_2.name = "<name unknown>";
 VAR_2.action = VAR_0;
 VAR_2.mode = 0;
 VAR_2.ino = VAR_4;
 if (VAR_3) {
  VAR_3 = 0;
  FUNC_0(VAR_5, 1);
 }
}
