
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ index; } ;
struct TYPE_7__ {TYPE_2__ dnttp; } ;
struct TYPE_8__ {TYPE_3__ beginscope; } ;
struct TYPE_5__ {int kind; } ;
union dnttentry {TYPE_4__ dend; TYPE_1__ dblock; } ;
struct objfile {int dummy; } ;
struct dntt_type_block {int dummy; } ;
 char* FUNC_0 (struct objfile*) ;
 union dnttentry* FUNC_1 (int,struct objfile*) ;

__attribute__((used)) static int
FUNC_2 (union dnttentry *VAR_0, struct objfile *VAR_1,
   int VAR_2)
{
  int VAR_3;
  union dnttentry *VAR_4;
  short VAR_5 = 0;

  return 0;


  VAR_3 = (((char *) VAR_0) - FUNC_0 (VAR_1)) / (sizeof (struct dntt_type_block));

  while (--VAR_3 >= 0)
    {
      VAR_4 = FUNC_1 (VAR_3, VAR_1);
      switch (VAR_4->dblock.kind)
 {
 case 129:
   return VAR_5;
 case 131:

   VAR_3 = (int) VAR_4->dend.beginscope.dnttp.index;
   break;
 case 135:
 case 130:
 case 132:
 case 128:
 case 133:
 case 134:
   VAR_5++;
   if (VAR_2)
     return 1;
   break;
 default:
   break;
 }
    }
  return VAR_5;
}
