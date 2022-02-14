
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct objfile {unsigned int export_list_size; TYPE_1__* export_list; int objfile_obstack; int obfd; } ;
typedef int asection ;
struct TYPE_2__ {char* name; int address; } ;
typedef TYPE_1__ ExportEntry ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int *,...) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (unsigned int) ;

int
FUNC_7 (struct objfile *VAR_2)
{
  unsigned int VAR_3;
  unsigned int VAR_4;
  unsigned int VAR_5;
  unsigned int VAR_6;
  char *VAR_7;
  int VAR_8;
  int VAR_9;
  int VAR_10;
  asection *VAR_11;
  unsigned int VAR_12[12];


  typedef struct
    {
      int next;
      int name;
      int value;
      int dont_care1;
      unsigned char type;
      char dont_care2;
      short dont_care3;
    }
  SomExportEntry;




  SomExportEntry VAR_13[100];


  VAR_2->export_list = ((void*)0);
  VAR_2->export_list_size = 0;



  VAR_11 = FUNC_0 (VAR_2->obfd, "$SHLIB_INFO$");
  if (!VAR_11)
    return 0;

  FUNC_1 (VAR_2->obfd, VAR_11, VAR_12, 0, 12 * sizeof (int));




  if (VAR_12[0] != 93092112)
    return 0;

  VAR_3 = VAR_12[8];
  VAR_4 = VAR_12[9];
  if (!VAR_4)
    return 0;
  VAR_5 = VAR_12[10];
  VAR_6 = VAR_12[11];
  if (!VAR_6)
    return 0;


  VAR_7 = (char *) FUNC_6 (VAR_6);
  FUNC_1 (VAR_2->obfd, VAR_11, VAR_7,
       VAR_5, VAR_6);




  VAR_2->export_list
    = (ExportEntry *) FUNC_2 (&VAR_2->objfile_obstack,
       VAR_4 * sizeof (ExportEntry));


  for (VAR_9 = 0, VAR_10 = 0;
       VAR_9 < (VAR_4 / 100);
       VAR_9++)
    {
      FUNC_1 (VAR_2->obfd, VAR_11, VAR_13,
         VAR_3 + VAR_9 * (sizeof (SomExportEntry) * 100),
    (sizeof (SomExportEntry) * 100));
      for (VAR_8 = 0; VAR_8 < 100; VAR_8++, VAR_10++)
 {
   if (VAR_13[VAR_8].type != (unsigned char) 0)
     {
       VAR_2->export_list[VAR_10].name
  = (char *) FUNC_2 (&VAR_2->objfile_obstack, FUNC_4 (VAR_7 + VAR_13[VAR_8].name) + 1);
       FUNC_3 (VAR_2->export_list[VAR_10].name, VAR_7 + VAR_13[VAR_8].name);
       VAR_2->export_list[VAR_10].address = VAR_13[VAR_8].value;

     }
   else

     {
       VAR_2->export_list[VAR_10].name = ((void*)0);
       VAR_2->export_list[VAR_10].address = 0;
     }
 }
    }


  if (VAR_10 < VAR_4)
    FUNC_1 (VAR_2->obfd, VAR_11, VAR_13,
         VAR_3 + VAR_10 * sizeof (SomExportEntry),
     (VAR_4 - VAR_10) * sizeof (SomExportEntry));
  for (VAR_8 = 0; VAR_10 < VAR_4; VAR_8++, VAR_10++)
    {
      if (VAR_13[VAR_8].type != (unsigned char) 0)
 {
   VAR_2->export_list[VAR_10].name
     = (char *) FUNC_2 (&VAR_2->objfile_obstack, FUNC_4 (VAR_7 + VAR_13[VAR_8].name) + 1);
   FUNC_3 (VAR_2->export_list[VAR_10].name, VAR_7 + VAR_13[VAR_8].name);

   VAR_2->export_list[VAR_10].address = VAR_13[VAR_8].value;
 }
      else
 {
   VAR_2->export_list[VAR_10].name = ((void*)0);
   VAR_2->export_list[VAR_10].address = 0;
 }
    }

  VAR_2->export_list_size = VAR_4;
  FUNC_5 (VAR_7);
  return VAR_4;
}
