
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int index; } ;
struct TYPE_8__ {TYPE_2__ dnttp; } ;
struct TYPE_6__ {int bitoffset; int name; TYPE_3__ nextfield; int type; } ;
union dnttentry {TYPE_1__ dfield; } ;
struct type {int dummy; } ;
struct objfile {int dummy; } ;
typedef TYPE_3__ dnttpointer ;


 struct type* FUNC_0 (struct type*) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 scalar_t__ FUNC_2 (struct type*) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (struct type*) ;
 char* FUNC_4 (struct objfile*) ;
 int FUNC_5 (struct type*,int) ;
 union dnttentry* FUNC_6 (int ,struct objfile*) ;
 struct type* FUNC_7 (int ,struct objfile*) ;

__attribute__((used)) static dnttpointer
FUNC_8 (int VAR_1, dnttpointer VAR_2,
           union dnttentry **VAR_3,
           struct objfile *VAR_4)
{
  struct type *VAR_5;
  int VAR_6;
  int VAR_7;
  char *VAR_8;

  for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
    {


      VAR_5 = FUNC_7 ((*VAR_3)->dfield.type, VAR_4);
      VAR_5 = FUNC_0 (VAR_5);
      VAR_7 = (*VAR_3)->dfield.bitoffset;
      VAR_8 = FUNC_4 (VAR_4) + (*VAR_3)->dfield.name;

      VAR_2 = (*VAR_3)->dfield.nextfield;
      *VAR_3 = FUNC_6 (VAR_2.dnttp.index, VAR_4);


      if ((FUNC_2 (VAR_5) == VAR_0) &&
   (!VAR_8 || FUNC_1 (VAR_8, "")))
 {
   FUNC_5 (VAR_5, VAR_7);
   VAR_2 = FUNC_8 (FUNC_3 (VAR_5), VAR_2, VAR_3, VAR_4);
 }
    }
  return VAR_2;
}
