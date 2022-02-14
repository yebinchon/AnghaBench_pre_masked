
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int flags; } ;
typedef TYPE_2__ asection ;
struct TYPE_17__ {scalar_t__ check_section_addresses; scalar_t__ relax; scalar_t__ version_exports_section; } ;
struct TYPE_16__ {scalar_t__ text_read_only; } ;
struct TYPE_15__ {int * name; } ;
struct TYPE_14__ {int relax_pass; int relocatable; TYPE_5__* gc_sym_list; TYPE_1__* dynamic_list; } ;
struct TYPE_13__ {int head; } ;
struct TYPE_11__ {int head; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 TYPE_2__* FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,TYPE_4__*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 TYPE_8__ VAR_3 ;
 TYPE_7__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (int ) ;
 TYPE_5__ VAR_7 ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ) ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 int FUNC_17 () ;
 int FUNC_18 () ;
 int FUNC_19 () ;
 int FUNC_20 () ;
 int FUNC_21 (int *,int) ;
 int FUNC_22 () ;
 int FUNC_23 () ;
 int FUNC_24 () ;
 int FUNC_25 () ;
 int FUNC_26 () ;
 int FUNC_27 () ;
 int VAR_8 ;
 TYPE_5__* VAR_9 ;
 TYPE_4__ VAR_10 ;
 int FUNC_28 (int ,int *,int *) ;
 int FUNC_29 (int ,int ) ;
 int VAR_11 ;
 int FUNC_30 () ;
 TYPE_3__ VAR_12 ;
 int FUNC_31 (int ) ;

void
FUNC_32 (void)
{

  if (VAR_10.dynamic_list)
    FUNC_13 (&VAR_10.dynamic_list->head);

  VAR_5 = VAR_6;


  FUNC_14 (VAR_8);
  FUNC_6 ();

  FUNC_26 ();


  FUNC_17 ();

  if (!FUNC_4 ())
    FUNC_5 (FUNC_0("%P%F: Failed to create hash table\n"));


  VAR_5 = VAR_6;
  FUNC_29 (VAR_12.head, VAR_0);

  VAR_10.gc_sym_list = &VAR_7;
  if (VAR_7.name == ((void*)0))
    VAR_10.gc_sym_list = VAR_9;

  FUNC_24 ();

  FUNC_3 ();






  FUNC_7 ();


  if (VAR_3.version_exports_section)
    FUNC_11 ();



  FUNC_22 ();


  FUNC_15 ();


  FUNC_9 ();


  FUNC_31 (VAR_12.head);



  FUNC_28 (VAR_12.head, ((void*)0), ((void*)0));


  FUNC_16 ();

  if (! VAR_10.relocatable)
    {
      asection *VAR_13;





      FUNC_2 (VAR_11, &VAR_10);


      VAR_13 = FUNC_1 (VAR_11, ".text");

      if (VAR_13 != ((void*)0))
 {
   if (VAR_4.text_read_only)
     VAR_13->flags |= VAR_1;
   else
     VAR_13->flags &= ~VAR_1;
 }
    }



  FUNC_25 ();



  FUNC_18 ();


  FUNC_21 (((void*)0), !VAR_3.relax);


  if (VAR_3.relax)
    {

      int VAR_14 = VAR_10.relax_pass;


      VAR_10.relax_pass = 0;

      while (VAR_14--)
 {
   FUNC_30 ();
   VAR_10.relax_pass++;
 }


      FUNC_10 ();
      FUNC_19 ();
      FUNC_21 (((void*)0), VAR_2);
    }



  FUNC_23 ();


  FUNC_20 ();




  FUNC_10 ();

  FUNC_27 ();


  if (! VAR_10.relocatable
      && VAR_3.check_section_addresses)
    FUNC_8 ();

  FUNC_12 ();
}
