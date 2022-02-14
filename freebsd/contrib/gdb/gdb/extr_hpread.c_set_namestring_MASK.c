
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {char* name; } ;
struct TYPE_3__ {int kind; } ;
union dnttentry {TYPE_2__ dsfile; TYPE_1__ dblock; } ;
struct objfile {int dummy; } ;


 int FUNC_0 (struct objfile*) ;
 unsigned int FUNC_1 (struct objfile*) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_4 (union dnttentry *VAR_2, char **VAR_3, struct objfile *VAR_4)
{


  if (! FUNC_3 (VAR_2->dblock.kind))
    *VAR_3 = "";
  else if ((unsigned) VAR_2->dsfile.name >= FUNC_1 (VAR_4))
    {
      FUNC_2 (&VAR_0, "bad string table offset in symbol %d",
   VAR_1);
      *VAR_3 = "";
    }
  else
    *VAR_3 = VAR_2->dsfile.name + FUNC_0 (VAR_4);
}
