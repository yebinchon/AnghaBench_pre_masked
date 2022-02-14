
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct objfile {scalar_t__ sym_private; int objfile_obstack; } ;
struct coff_symfile_info {char* strtbl; } ;
typedef int file_ptr ;
typedef int bfd ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int *) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 long FUNC_4 (int *,unsigned char*) ;
 scalar_t__ FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (char*,unsigned char*,int) ;
 scalar_t__ FUNC_8 (int *,long) ;

__attribute__((used)) static void
FUNC_9 (bfd *VAR_1, file_ptr VAR_2, struct objfile *VAR_3)
{
  long VAR_4;
  int VAR_5;
  unsigned char VAR_6[4];
  char *VAR_7;

  ((struct coff_symfile_info *) VAR_3->sym_private)->strtbl = ((void*)0);

  if (FUNC_5 (VAR_1, VAR_2, VAR_0) < 0)
    FUNC_6 ("cannot seek to string table in %s: %s",
    FUNC_3 (VAR_1), FUNC_1 (FUNC_2 ()));

  VAR_5 = FUNC_0 ((char *) VAR_6, sizeof VAR_6, VAR_1);
  VAR_4 = FUNC_4 (VAR_1, VAR_6);




  if (VAR_5 != sizeof VAR_6 || VAR_4 < sizeof VAR_6)
    return;




  VAR_7 = (char *) FUNC_8 (&VAR_3->objfile_obstack, VAR_4);
  ((struct coff_symfile_info *) VAR_3->sym_private)->strtbl = VAR_7;



  FUNC_7 (VAR_7, VAR_6, sizeof VAR_6);
  if (VAR_4 == sizeof VAR_6)
    return;

  VAR_5 = FUNC_0 (VAR_7 + sizeof VAR_6, VAR_4 - sizeof VAR_6, VAR_1);

  if (VAR_5 != VAR_4 - sizeof VAR_6)
    FUNC_6 ("cannot read string table from %s: %s",
    FUNC_3 (VAR_1), FUNC_1 (FUNC_2 ()));
  if (VAR_7[VAR_4 - 1] != '\0')
    FUNC_6 ("bad symbol file: string table does not end with null character");

  return;
}
