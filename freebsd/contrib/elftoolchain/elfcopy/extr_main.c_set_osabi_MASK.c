
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct elfcopy {int abi; } ;
struct TYPE_2__ {int abi; int * name; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char const*) ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_1 (int *,char const*) ;

__attribute__((used)) static void
FUNC_2(struct elfcopy *VAR_2, const char *VAR_3)
{
 int VAR_4, VAR_5;

 VAR_5 = 0;
 for (VAR_4 = 0; VAR_1[VAR_4].name != ((void*)0); VAR_4++)
  if (FUNC_1(VAR_1[VAR_4].name, VAR_3) == 0) {
   VAR_2->abi = VAR_1[VAR_4].abi;
   VAR_5 = 1;
   break;
  }
 if (!VAR_5)
  FUNC_0(VAR_0, "unrecognized OSABI %s", VAR_3);
}
