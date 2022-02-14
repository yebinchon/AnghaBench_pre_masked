
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct die_info {unsigned int num_attrs; TYPE_1__* attrs; int * child; int offset; int abbrev; int tag; } ;
struct TYPE_7__ {int size; } ;
struct TYPE_6__ {int form; int name; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_3__* FUNC_1 (TYPE_1__*) ;
 char* FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,char*,...) ;
 int VAR_0 ;
 int FUNC_9 (int ,int,int ) ;

__attribute__((used)) static void
FUNC_10 (struct die_info *VAR_1)
{
  unsigned int VAR_2;

  FUNC_8 (VAR_0, "Die: %s (abbrev = %d, offset = %d)\n",
    FUNC_7 (VAR_1->tag), VAR_1->abbrev, VAR_1->offset);
  FUNC_8 (VAR_0, "\thas children: %s\n",
    FUNC_5 (VAR_1->child != ((void*)0)));

  FUNC_8 (VAR_0, "\tattributes:\n");
  for (VAR_2 = 0; VAR_2 < VAR_1->num_attrs; ++VAR_2)
    {
      FUNC_8 (VAR_0, "\t\t%s (%s) ",
        FUNC_4 (VAR_1->attrs[VAR_2].name),
        FUNC_6 (VAR_1->attrs[VAR_2].form));
      switch (VAR_1->attrs[VAR_2].form)
 {
 case 132:
 case 147:
   FUNC_8 (VAR_0, "address: ");
   FUNC_9 (FUNC_0 (&VAR_1->attrs[VAR_2]), 1, VAR_0);
   break;
 case 144:
 case 143:
 case 146:
 case 145:
   FUNC_8 (VAR_0, "block: size %d", FUNC_1 (&VAR_1->attrs[VAR_2])->size);
   break;
 case 142:
 case 141:
 case 140:
 case 139:
 case 135:
 case 134:
 case 133:
 case 128:
 case 131:
   FUNC_8 (VAR_0, "constant: %ld", FUNC_3 (&VAR_1->attrs[VAR_2]));
   break;
 case 130:
 case 129:
   FUNC_8 (VAR_0, "string: \"%s\"",
     FUNC_2 (&VAR_1->attrs[VAR_2])
     ? FUNC_2 (&VAR_1->attrs[VAR_2]) : "");
   break;
 case 138:
   if (FUNC_3 (&VAR_1->attrs[VAR_2]))
     FUNC_8 (VAR_0, "flag: TRUE");
   else
     FUNC_8 (VAR_0, "flag: FALSE");
   break;
 case 137:
   FUNC_8 (VAR_0, "flag: TRUE");
   break;
 case 136:


   FUNC_8 (VAR_0, "unexpected attribute form: DW_FORM_indirect");
   break;
 default:
   FUNC_8 (VAR_0, "unsupported attribute form: %d.",
     VAR_1->attrs[VAR_2].form);
 }
      FUNC_8 (VAR_0, "\n");
    }
}
