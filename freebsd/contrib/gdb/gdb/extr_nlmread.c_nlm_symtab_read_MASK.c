
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct objfile {int dummy; } ;
struct cleanup {int dummy; } ;
typedef enum minimal_symbol_type { ____Placeholder_minimal_symbol_type } minimal_symbol_type ;
typedef int bfd ;
struct TYPE_5__ {int name; TYPE_4__* section; scalar_t__ value; } ;
typedef TYPE_1__ asymbol ;
struct TYPE_6__ {int flags; scalar_t__ vma; } ;
typedef scalar_t__ CORE_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__ VAR_2 ;
 long FUNC_0 (int *,TYPE_1__**) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 long FUNC_4 (int *) ;
 int FUNC_5 (struct cleanup*) ;
 int FUNC_6 (char*,int ,char*) ;
 struct cleanup* FUNC_7 (int ,TYPE_1__**) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (int ,scalar_t__,int,struct objfile*) ;
 int VAR_6 ;
 scalar_t__ FUNC_9 (long) ;

__attribute__((used)) static void
FUNC_10 (bfd *VAR_7, CORE_ADDR VAR_8, struct objfile *VAR_9)
{
  long VAR_10;
  asymbol *VAR_11;
  asymbol **VAR_12;
  long VAR_13;
  long VAR_14;
  struct cleanup *VAR_15;
  CORE_ADDR VAR_16;
  enum minimal_symbol_type VAR_17;

  VAR_10 = FUNC_4 (VAR_7);
  if (VAR_10 < 0)
    FUNC_6 ("Can't read symbols from %s: %s", FUNC_3 (VAR_7),
    FUNC_1 (FUNC_2 ()));
  if (VAR_10 > 0)
    {
      VAR_12 = (asymbol **) FUNC_9 (VAR_10);
      VAR_15 = FUNC_7 (VAR_6, VAR_12);
      VAR_13 = FUNC_0 (VAR_7, VAR_12);
      if (VAR_13 < 0)
 FUNC_6 ("Can't read symbols from %s: %s", FUNC_3 (VAR_7),
        FUNC_1 (FUNC_2 ()));

      for (VAR_14 = 0; VAR_14 < VAR_13; VAR_14++)
 {
   VAR_11 = VAR_12[VAR_14];
   if ( 1)
     {

       VAR_16 = VAR_11->value + VAR_11->section->vma;

       if (VAR_11->section != &VAR_2)
  VAR_16 += VAR_8;




       if (VAR_11->section->flags & VAR_0)
  VAR_17 = VAR_4;
       else if (VAR_11->section->flags & VAR_1)
  VAR_17 = VAR_3;
       else
  VAR_17 = VAR_5;

       FUNC_8 (VAR_11->name, VAR_16, VAR_17,
       VAR_9);
     }
 }
      FUNC_5 (VAR_15);
    }
}
