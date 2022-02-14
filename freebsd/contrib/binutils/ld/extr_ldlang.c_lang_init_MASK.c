
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct lang_definedness_hash_entry {int dummy; } ;
struct TYPE_3__ {int bfd_section; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,int,int) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *,int ,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int *) ;
 int VAR_9 ;
 TYPE_1__* FUNC_5 (int ) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 () ;
 int VAR_10 ;
 int * VAR_11 ;
 int VAR_12 ;

void
FUNC_8 (void)
{
  FUNC_6 (&VAR_10, 1000);

  VAR_11 = &VAR_12;

  FUNC_7 ();

  FUNC_4 (VAR_11);

  FUNC_4 (&VAR_5);
  FUNC_4 (&VAR_9);
  FUNC_4 (&VAR_3);
  VAR_4 = FUNC_3 (((void*)0), VAR_8,
        ((void*)0));
  VAR_1 =
    FUNC_5 (VAR_0);

  VAR_1->bfd_section = VAR_2;







  if (!FUNC_1 (&VAR_7,
         VAR_6,
         sizeof (struct lang_definedness_hash_entry),
         3))
    FUNC_2 (FUNC_0("%P%F: can not create hash table: %E\n"));
}
