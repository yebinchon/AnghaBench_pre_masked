
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef enum bfd_endian { ____Placeholder_bfd_endian } bfd_endian ;
struct TYPE_8__ {int byteorder; TYPE_1__* alternative_target; } ;
typedef TYPE_2__ bfd_target ;
typedef int bfd ;
struct TYPE_11__ {scalar_t__ endian; } ;
struct TYPE_10__ {int * hash; } ;
struct TYPE_9__ {scalar_t__ name; } ;
struct TYPE_7__ {int byteorder; scalar_t__ name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 () ;
 int * FUNC_2 (int *) ;
 int VAR_6 ;
 int * FUNC_3 (char const*,scalar_t__) ;
 TYPE_2__* FUNC_4 (int ,void*) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ) ;
 int VAR_7 ;
 TYPE_5__ VAR_8 ;
 int VAR_9 ;
 int FUNC_8 (int ,...) ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_9 () ;
 int VAR_12 ;
 int VAR_13 ;
 TYPE_4__ VAR_14 ;
 scalar_t__ VAR_15 ;
 TYPE_3__* VAR_16 ;

__attribute__((used)) static bfd *
FUNC_10 (const char *VAR_17)
{
  bfd *VAR_18;

  VAR_15 = FUNC_9 ();



  if (VAR_8.endian != VAR_3)
    {
      const bfd_target *VAR_19;
      enum bfd_endian VAR_20;


      VAR_19 = FUNC_4 (VAR_11, (void *) VAR_15);


      if (VAR_19 != ((void*)0))
 {
   if (VAR_8.endian == VAR_2)
     VAR_20 = VAR_0;
   else
     VAR_20 = VAR_1;





   if (VAR_19->byteorder != VAR_20)
     {


       if (VAR_19->alternative_target != ((void*)0)
    && (VAR_19->alternative_target->byteorder == VAR_20))
  VAR_15 = VAR_19->alternative_target->name;
       else
  {



    FUNC_4 (VAR_7,
      (void *) VAR_19);



    if (VAR_16 == ((void*)0))
      FUNC_8 (FUNC_0("%P: warning: could not find any targets"
        " that match endianness requirement\n"));
    else
      VAR_15 = VAR_16->name;
  }
     }
 }
    }

  VAR_18 = FUNC_3 (VAR_17, VAR_15);

  if (VAR_18 == ((void*)0))
    {
      if (FUNC_1 () == VAR_5)
 FUNC_8 (FUNC_0("%P%F: target %s not found\n"), VAR_15);

      FUNC_8 (FUNC_0("%P%F: cannot open output file %s: %E\n"), VAR_17);
    }

  VAR_9 = VAR_4;

  if (! FUNC_6 (VAR_18, VAR_6))
    FUNC_8 (FUNC_0("%P%F:%s: can not make object file: %E\n"), VAR_17);
  if (! FUNC_5 (VAR_18,
      VAR_12,
      VAR_13))
    FUNC_8 (FUNC_0("%P%F:%s: can not set architecture: %E\n"), VAR_17);

  VAR_14.hash = FUNC_2 (VAR_18);
  if (VAR_14.hash == ((void*)0))
    FUNC_8 (FUNC_0("%P%F: can not create hash table: %E\n"));

  FUNC_7 (VAR_18, VAR_10);
  return VAR_18;
}
