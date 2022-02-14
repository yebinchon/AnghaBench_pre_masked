
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct partial_die_info {int tag; int is_declaration; int highpc; int lowpc; int has_pc_info; int * name; } ;
struct objfile {int * obfd; } ;
struct dwarf2_cu {struct objfile* objfile; } ;
typedef int bfd ;
typedef int CORE_ADDR ;
 char* FUNC_0 (struct partial_die_info*,char*,struct dwarf2_cu*,char const*) ;
 char* FUNC_1 (struct partial_die_info*,char*,int *,int *,struct dwarf2_cu*,char const*) ;
 char* FUNC_2 (struct partial_die_info*,char*,struct dwarf2_cu*,char const*) ;
 int FUNC_3 (struct partial_die_info*,struct dwarf2_cu*,char const*) ;
 char* FUNC_4 (struct partial_die_info*,char*,int *,struct dwarf2_cu*) ;
 char* FUNC_5 (struct partial_die_info*,int *,char*,struct dwarf2_cu*) ;

__attribute__((used)) static char *
FUNC_6 (char *VAR_0, CORE_ADDR *VAR_1,
        CORE_ADDR *VAR_2, struct dwarf2_cu *VAR_3,
        const char *VAR_4)
{
  struct objfile *VAR_5 = VAR_3->objfile;
  bfd *VAR_6 = VAR_5->obfd;
  struct partial_die_info VAR_7;





  while (1)
    {


      int VAR_8 = 0;

      VAR_0 = FUNC_5 (&VAR_7, VAR_6, VAR_0, VAR_3);





      if (VAR_7.name != ((void*)0) || VAR_7.tag == 134
   || VAR_7.tag == 135)
 {
   switch (VAR_7.tag)
     {
     case 132:
       if (VAR_7.has_pc_info)
  {
    if (VAR_7.lowpc < *VAR_1)
      {
        *VAR_1 = VAR_7.lowpc;
      }
    if (VAR_7.highpc > *VAR_2)
      {
        *VAR_2 = VAR_7.highpc;
      }
    if (!VAR_7.is_declaration)
      {
        FUNC_3 (&VAR_7, VAR_3, VAR_4);
      }
  }
       break;
     case 128:
     case 130:
     case 129:
       if (!VAR_7.is_declaration)
  {
    FUNC_3 (&VAR_7, VAR_3, VAR_4);
  }
       break;
     case 136:
     case 133:
       if (!VAR_7.is_declaration)
  {
    VAR_0 = FUNC_2 (&VAR_7, VAR_0, VAR_3,
          VAR_4);
    VAR_8 = 1;
  }
       break;
     case 135:
       if (!VAR_7.is_declaration)
  {
    VAR_0 = FUNC_0 (&VAR_7, VAR_0, VAR_3,
            VAR_4);
    VAR_8 = 1;
  }
       break;
     case 137:
            case 131:


       FUNC_3 (&VAR_7, VAR_3, VAR_4);
       break;
     case 134:



       if (VAR_4 == ((void*)0))
  VAR_4 = "";
       VAR_0 = FUNC_1 (&VAR_7, VAR_0, VAR_1, VAR_2,
      VAR_3, VAR_4);
       VAR_8 = 1;
       break;
     default:
       break;
     }
 }

      if (VAR_7.tag == 0)
 break;
      if (!VAR_8)
 VAR_0 = FUNC_4 (&VAR_7, VAR_0, VAR_6, VAR_3);
    }

  return VAR_0;
}
