
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct thread_debug {int thr_debug_on; scalar_t__ thr_brk; int thr_map; } ;
struct minimal_symbol {int dummy; } ;
struct breakpoint {int dummy; } ;
typedef int one ;
struct TYPE_4__ {int (* to_xfer_memory ) (scalar_t__,char*,int,int,int *,TYPE_1__*) ;} ;
typedef scalar_t__ CORE_ADDR ;


 scalar_t__ FUNC_0 (struct minimal_symbol*) ;
 TYPE_1__ VAR_0 ;
 struct breakpoint* FUNC_1 (scalar_t__) ;
 TYPE_1__ VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 (struct breakpoint*) ;
 struct minimal_symbol* FUNC_4 (char*,int *,int *) ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct thread_debug*) ;
 int FUNC_8 (scalar_t__,char*,int,int,int *,TYPE_1__*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_9 (char*) ;

__attribute__((used)) static void
FUNC_10 (void)
{
  struct minimal_symbol *VAR_8;
  struct thread_debug VAR_9;
  CORE_ADDR VAR_10;
  struct breakpoint *VAR_11;
  int VAR_12 = 1;


  if (VAR_6)
    return;


  if (!(VAR_8 = FUNC_4 ("_thr_debug", ((void*)0), ((void*)0))))
    return;


  if (!(VAR_4 = FUNC_0 (VAR_8)))
    return;


  VAR_0 = VAR_1;


  if (!FUNC_7 (&VAR_9))
    return;



  if (!VAR_9.thr_map)
    return;



  FUNC_6 (&VAR_7);
  VAR_6 = 1;

  if (!VAR_2)


    FUNC_5 ();

  else
    {

      VAR_3 = (CORE_ADDR)VAR_9.thr_brk;
      if (!(VAR_11 = FUNC_1 (VAR_3)))
 goto err;


      VAR_10 = (CORE_ADDR)&((struct thread_debug *)VAR_4)->thr_debug_on;
      if (!VAR_0.to_xfer_memory ((CORE_ADDR)VAR_10, (char *)&VAR_12,
        sizeof (VAR_12), 1, ((void*)0), &VAR_0))
 {
   FUNC_3 (VAR_11);
   goto err;
 }


      VAR_5 = 0;
    }

  return;

 err:
  FUNC_9 ("uw-thread: unable to initialize user-mode thread debugging\n");
  FUNC_2 ();
}
