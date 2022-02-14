
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symtab {char* filename; char* dirname; int primary; } ;


 int FUNC_0 (struct symtab*) ;
 int FUNC_1 (struct symtab*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,struct symtab*,...) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_5 (struct symtab *VAR_1)
{
  FUNC_4 (VAR_0, "Symtab %p\n    File: %s; Dir: %s\n", VAR_1,
    VAR_1->filename, VAR_1->dirname);
  FUNC_4 (VAR_0, "    Blockvector: %p, Primary: %d\n",
    FUNC_0 (VAR_1), VAR_1->primary);
  FUNC_2 (FUNC_0 (VAR_1));
  FUNC_4 (VAR_0, "    Line table: %p\n", FUNC_1 (VAR_1));
  FUNC_3 (FUNC_1 (VAR_1));
}
