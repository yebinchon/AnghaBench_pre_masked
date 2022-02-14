
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
struct Func {char* name; int call_file; int call_line; struct Func* inlined_caller; } ;
struct CU {scalar_t__ nsrcfiles; char** srcfiles; } ;
typedef int demangled ;
typedef int Dwarf_Unsigned ;
typedef scalar_t__ Dwarf_Signed ;


 scalar_t__ VAR_0 ;
 char* FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*,char*,int,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (char*,...) ;
 char* VAR_4 ;

__attribute__((used)) static void
FUNC_3(struct CU *VAR_5, struct Func *VAR_6, Dwarf_Unsigned VAR_7,
    Dwarf_Unsigned VAR_8)
{
 char VAR_9[1024];
 char *VAR_10;

 if (VAR_7 > 0 && (Dwarf_Signed) VAR_7 <= VAR_5->nsrcfiles)
  VAR_10 = VAR_5->srcfiles[VAR_7 - 1];
 else
  VAR_10 = VAR_4;

 if (VAR_3)
  FUNC_2(" (inlined by) ");

 if (VAR_2) {
  if (VAR_1 && !FUNC_1(VAR_6->name, VAR_9,
      sizeof(VAR_9), 0)) {
   if (VAR_3)
    FUNC_2("%s at ", VAR_9);
   else
    FUNC_2("%s\n", VAR_9);
  } else {
   if (VAR_3)
    FUNC_2("%s at ", VAR_6->name);
   else
    FUNC_2("%s\n", VAR_6->name);
  }
 }
 (void) FUNC_2("%s:%ju\n", VAR_0 ? FUNC_0(VAR_10) : VAR_10,
     (uintmax_t) VAR_8);

 if (VAR_6->inlined_caller != ((void*)0))
  FUNC_3(VAR_5, VAR_6->inlined_caller, VAR_6->call_file,
      VAR_6->call_line);
}
