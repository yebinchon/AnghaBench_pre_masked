
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct objfile {char** import_list; unsigned int import_list_size; int objfile_obstack; int obfd; } ;
typedef int asection ;
typedef char* ImportEntry ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int *,...) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (unsigned int) ;

__attribute__((used)) static int
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
      int name;
      short dont_care1;
      unsigned char type;
      unsigned int reserved2:8;
    }
  SomImportEntry;




  SomImportEntry VAR_13[100];


  VAR_2->import_list = ((void*)0);
  VAR_2->import_list_size = 0;



  VAR_11 = FUNC_0 (VAR_2->obfd, "$SHLIB_INFO$");
  if (!VAR_11)
    return 0;

  FUNC_1 (VAR_2->obfd, VAR_11, VAR_12, 0, 12 * sizeof (int));




  if (VAR_12[0] != 93092112)
    return 0;

  VAR_3 = VAR_12[4];
  VAR_4 = VAR_12[5];
  if (!VAR_4)
    return 0;
  VAR_5 = VAR_12[10];
  VAR_6 = VAR_12[11];
  if (!VAR_6)
    return 0;


  VAR_7 = (char *) FUNC_6 (VAR_6);
  FUNC_1 (VAR_2->obfd, VAR_11, VAR_7,
       VAR_5, VAR_6);




  VAR_2->import_list
    = (ImportEntry *) FUNC_2 (&VAR_2->objfile_obstack,
       VAR_4 * sizeof (ImportEntry));


  for (VAR_9 = 0, VAR_10 = 0;
       VAR_9 < (VAR_4 / 100);
       VAR_9++)
    {
      FUNC_1 (VAR_2->obfd, VAR_11, VAR_13,
         VAR_3 + VAR_9 * (sizeof (SomImportEntry) * 100),
    (sizeof (SomImportEntry) * 100));
      for (VAR_8 = 0; VAR_8 < 100; VAR_8++, VAR_10++)
 {
   if (VAR_13[VAR_8].type != (unsigned char) 0)
     {
       VAR_2->import_list[VAR_10]
  = (char *) FUNC_2 (&VAR_2->objfile_obstack, FUNC_4 (VAR_7 + VAR_13[VAR_8].name) + 1);
       FUNC_3 (VAR_2->import_list[VAR_10], VAR_7 + VAR_13[VAR_8].name);

     }
   else
     VAR_2->import_list[VAR_10] = ((void*)0);

 }
    }


  if (VAR_10 < VAR_4)
    FUNC_1 (VAR_2->obfd, VAR_11, VAR_13,
         VAR_3 + VAR_10 * sizeof (SomImportEntry),
     (VAR_4 - VAR_10) * sizeof (SomImportEntry));
  for (VAR_8 = 0; VAR_10 < VAR_4; VAR_8++, VAR_10++)
    {
      if (VAR_13[VAR_8].type != (unsigned char) 0)
 {
   VAR_2->import_list[VAR_10]
     = (char *) FUNC_2 (&VAR_2->objfile_obstack, FUNC_4 (VAR_7 + VAR_13[VAR_8].name) + 1);
   FUNC_3 (VAR_2->import_list[VAR_10], VAR_7 + VAR_13[VAR_8].name);

 }
      else
 VAR_2->import_list[VAR_10] = ((void*)0);
    }

  VAR_2->import_list_size = VAR_4;
  FUNC_5 (VAR_7);
  return VAR_4;
}
