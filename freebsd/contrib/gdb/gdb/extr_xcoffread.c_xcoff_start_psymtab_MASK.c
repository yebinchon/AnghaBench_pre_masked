
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symloc {int first_symnum; } ;
struct partial_symtab {char* read_symtab_private; int read_symtab; } ;
struct partial_symbol {int dummy; } ;
struct objfile {int objfile_obstack; int section_offsets; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int VAR_0 ;
 struct partial_symtab* FUNC_2 (struct objfile*,int ,char*,int ,struct partial_symbol**,struct partial_symbol**) ;
 int VAR_1 ;

__attribute__((used)) static struct partial_symtab *
FUNC_3 (struct objfile *VAR_2, char *VAR_3, int VAR_4,
       struct partial_symbol **VAR_5,
       struct partial_symbol **VAR_6)
{
  struct partial_symtab *VAR_7 =
  FUNC_2 (VAR_2, VAR_2->section_offsets,
   VAR_3,

   0,
   VAR_5, VAR_6);

  VAR_7->read_symtab_private = (char *)
    FUNC_1 (&VAR_2->objfile_obstack, sizeof (struct symloc));
  ((struct symloc *) VAR_7->read_symtab_private)->first_symnum = VAR_4;
  VAR_7->read_symtab = VAR_1;


  VAR_0 = FUNC_0 (VAR_3);

  return VAR_7;
}
