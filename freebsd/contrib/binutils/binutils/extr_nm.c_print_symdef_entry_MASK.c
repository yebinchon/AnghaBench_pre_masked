
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ symindex ;
struct TYPE_3__ {char* name; } ;
typedef TYPE_1__ carsym ;
typedef scalar_t__ bfd_boolean ;
typedef int bfd ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int *,scalar_t__) ;
 char* FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,scalar_t__,TYPE_1__**) ;
 int FUNC_5 (char*,char*,int *) ;
 int FUNC_6 (char*,...) ;

__attribute__((used)) static void
FUNC_7 (bfd *VAR_3)
{
  symindex VAR_4 = VAR_0;
  carsym *VAR_5;
  bfd_boolean VAR_6 = VAR_1;

  for (VAR_4 = FUNC_4 (VAR_3, VAR_4, &VAR_5);
       VAR_4 != VAR_0;
       VAR_4 = FUNC_4 (VAR_3, VAR_4, &VAR_5))
    {
      bfd *VAR_7;
      if (!VAR_6)
 {
   FUNC_6 (FUNC_0("\nArchive index:\n"));
   VAR_6 = VAR_2;
 }
      VAR_7 = FUNC_2 (VAR_3, VAR_4);
      if (VAR_7 == ((void*)0))
 FUNC_1 ("bfd_get_elt_at_index");
      if (VAR_5->name != (char *) ((void*)0))
 {
   FUNC_5 ("%s", VAR_5->name, VAR_3);
   FUNC_6 (" in %s\n", FUNC_3 (VAR_7));
 }
    }
}
