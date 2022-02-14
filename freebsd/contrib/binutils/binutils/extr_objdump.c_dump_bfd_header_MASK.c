
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int flags; int start_address; } ;
typedef TYPE_1__ bfd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,char*) ;
 int VAR_10 ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 char* FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (char*,...) ;

__attribute__((used)) static void
FUNC_7 (bfd *VAR_11)
{
  char *VAR_12 = "";

  FUNC_6 (FUNC_1("architecture: %s, "),
   FUNC_4 (FUNC_2 (VAR_11),
       FUNC_3 (VAR_11)));
  FUNC_6 (FUNC_1("flags 0x%08x:\n"), VAR_11->flags);


  if (VAR_11->flags & VAR_8) {FUNC_6("%s%s", VAR_12, "HAS_RELOC"); VAR_12=", ";};
  if (VAR_11->flags & VAR_3) {FUNC_6("%s%s", VAR_12, "EXEC_P"); VAR_12=", ";};
  if (VAR_11->flags & VAR_5) {FUNC_6("%s%s", VAR_12, "HAS_LINENO"); VAR_12=", ";};
  if (VAR_11->flags & VAR_4) {FUNC_6("%s%s", VAR_12, "HAS_DEBUG"); VAR_12=", ";};
  if (VAR_11->flags & VAR_9) {FUNC_6("%s%s", VAR_12, "HAS_SYMS"); VAR_12=", ";};
  if (VAR_11->flags & VAR_7) {FUNC_6("%s%s", VAR_12, "HAS_LOCALS"); VAR_12=", ";};
  if (VAR_11->flags & VAR_1) {FUNC_6("%s%s", VAR_12, "DYNAMIC"); VAR_12=", ";};
  if (VAR_11->flags & VAR_10) {FUNC_6("%s%s", VAR_12, "WP_TEXT"); VAR_12=", ";};
  if (VAR_11->flags & VAR_2) {FUNC_6("%s%s", VAR_12, "D_PAGED"); VAR_12=", ";};
  if (VAR_11->flags & VAR_0) {FUNC_6("%s%s", VAR_12, "BFD_IS_RELAXABLE"); VAR_12=", ";};
  if (VAR_11->flags & VAR_6) {FUNC_6("%s%s", VAR_12, "HAS_LOAD_PAGE"); VAR_12=", ";};
  FUNC_6 (FUNC_1("\nstart address 0x"));
  FUNC_5 (VAR_11, VAR_11->start_address);
  FUNC_6 ("\n");
}
