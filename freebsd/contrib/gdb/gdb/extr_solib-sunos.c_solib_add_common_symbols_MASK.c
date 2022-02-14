
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct rtc_symb {int rtc_next; int rtc_sp; } ;
struct TYPE_6__ {int n_strx; int n_name; } ;
struct nlist {scalar_t__ n_type; int n_value; TYPE_1__ n_un; } ;
typedef int inferior_rtc_symb ;
typedef int inferior_rtc_nlist ;
struct TYPE_7__ {int * msymbols; scalar_t__ minimal_symbol_count; int objfile_obstack; } ;
typedef scalar_t__ CORE_ADDR ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 () ;
 int VAR_1 ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*,int,int ,TYPE_2__*) ;
 int FUNC_8 (scalar_t__,char*,int) ;
 TYPE_2__* VAR_2 ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (char*) ;
 char* FUNC_11 (int) ;

__attribute__((used)) static void
FUNC_12 (CORE_ADDR VAR_3)
{
  struct rtc_symb VAR_4;
  struct nlist VAR_5;
  int VAR_6;
  char *VAR_7;



  if (VAR_2 != ((void*)0) && VAR_2->minimal_symbol_count)
    {
      FUNC_5 (&VAR_2->objfile_obstack, 0);
      FUNC_6 (&VAR_2->objfile_obstack);
      VAR_2->minimal_symbol_count = 0;
      VAR_2->msymbols = ((void*)0);
      FUNC_9 (VAR_2);
    }

  FUNC_2 ();
  FUNC_4 ();

  while (VAR_3)
    {
      FUNC_8 (VAR_3,
     (char *) &VAR_4,
     sizeof (VAR_4));
      FUNC_8 (FUNC_0 (VAR_4.rtc_sp),
     (char *) &VAR_5,
     sizeof (VAR_5));
      if (VAR_5.n_type == VAR_0)
 {



   VAR_6 = VAR_5.n_value - VAR_5.n_un.n_strx;

   VAR_7 = FUNC_11 (VAR_6);
   FUNC_8 (FUNC_0 (VAR_5.n_un.n_name),
         VAR_7, VAR_6);


   if (VAR_2 == ((void*)0))
     FUNC_1 ();

   FUNC_7 (VAR_7, VAR_5.n_value,
          VAR_1, VAR_2);
   FUNC_10 (VAR_7);
 }
      VAR_3 = FUNC_0 (VAR_4.rtc_next);
    }




  FUNC_3 (VAR_2);
}
