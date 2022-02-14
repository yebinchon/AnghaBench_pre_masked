
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ resp_delim; } ;
struct TYPE_8__ {scalar_t__ resp_delim; } ;
struct TYPE_7__ {scalar_t__ resp_delim; } ;
struct monitor_ops {scalar_t__ magic; int flags; char** init; int num_breakpoints; char* clr_all_break; char* line_term; int * set_break; scalar_t__ stop; int stopbits; TYPE_3__ setreg; TYPE_2__ setmem; TYPE_1__ getmem; scalar_t__ register_pattern; TYPE_4__* target; } ;
struct TYPE_10__ {char* to_shortname; } ;
typedef int CORE_ADDR ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_0 (scalar_t__,int *,int ) ;
 struct monitor_ops* VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (char*,...) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (char*) ;
 int VAR_9 ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 () ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int) ;
 int FUNC_10 (char*,char*,scalar_t__) ;
 int FUNC_11 (TYPE_4__*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (scalar_t__) ;
 int FUNC_15 (int ) ;
 scalar_t__ FUNC_16 (int ,int) ;
 int FUNC_17 (int ,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_18 () ;
 TYPE_4__* VAR_16 ;
 int FUNC_19 (int) ;
 int FUNC_20 (TYPE_4__*) ;
 int FUNC_21 (scalar_t__) ;
 scalar_t__ FUNC_22 (int) ;
 scalar_t__ FUNC_23 (char*) ;

void
FUNC_24 (char *VAR_17, struct monitor_ops *VAR_18, int VAR_19)
{
  char *VAR_20;
  char **VAR_21;

  if (VAR_18->magic != VAR_0)
    FUNC_1 ("Magic number of monitor_ops struct wrong.");

  VAR_16 = VAR_18->target;
  VAR_20 = VAR_16->to_shortname;

  if (!VAR_17)
    FUNC_1 ("Use `target %s DEVICE-NAME' to use a serial port, or \n`target %s HOST-NAME:PORT-NUMBER' to use a network connection.", VAR_20, VAR_20);


  FUNC_19 (VAR_19);



  if (VAR_18->register_pattern)
    FUNC_0 (VAR_18->register_pattern, &VAR_11,
       VAR_10);

  if (VAR_18->getmem.resp_delim)
    FUNC_0 (VAR_18->getmem.resp_delim, &VAR_7,
       VAR_6);

  if (VAR_18->setmem.resp_delim)
    FUNC_0 (VAR_18->setmem.resp_delim, &VAR_13,
                     VAR_12);

  if (VAR_18->setreg.resp_delim)
    FUNC_0 (VAR_18->setreg.resp_delim, &VAR_15,
                     VAR_14);

  FUNC_20 (VAR_16);

  if (VAR_5)
    FUNC_21 (VAR_5);
  VAR_5 = FUNC_23 (VAR_17);

  VAR_9 = FUNC_14 (VAR_5);

  if (!VAR_9)
    FUNC_8 (VAR_5);

  if (VAR_2 != -1)
    {
      if (FUNC_16 (VAR_9, VAR_2))
 {
   FUNC_12 (VAR_9);
   FUNC_8 (VAR_5);
 }
    }

  FUNC_15 (VAR_9);

  FUNC_13 (VAR_9);



  FUNC_17 (VAR_9, VAR_18->stopbits);

  VAR_4 = VAR_18;




  if (VAR_4->stop)
    {
      FUNC_7 ();
      if ((VAR_4->flags & VAR_1) == 0)
 {
   FUNC_3 ("EXP Open echo\n");
   FUNC_4 (((void*)0), 0);
 }
    }


  for (VAR_21 = VAR_18->init; *VAR_21 != ((void*)0); VAR_21++)
    {



      if ((VAR_4->flags & VAR_1) == 0)
 FUNC_5 (*VAR_21);
      else
 FUNC_6 (*VAR_21);
      FUNC_4 (((void*)0), 0);
    }

  FUNC_13 (VAR_9);


  if (VAR_18->set_break != ((void*)0))
    {
      if (VAR_18->num_breakpoints == 0)
 VAR_18->num_breakpoints = 8;

      VAR_3 = (CORE_ADDR *) FUNC_22 (VAR_18->num_breakpoints * sizeof (CORE_ADDR));
      FUNC_2 (VAR_3, 0, VAR_18->num_breakpoints * sizeof (CORE_ADDR));
    }



  if (VAR_18->clr_all_break)
    {
      FUNC_5 (VAR_18->clr_all_break);
      FUNC_4 (((void*)0), 0);
    }

  if (VAR_19)
    FUNC_10 ("Remote target %s connected to %s\n", VAR_20, VAR_5);

  FUNC_11 (VAR_16);

  VAR_8 = FUNC_9 (42000);



  FUNC_5 (VAR_4->line_term);

  FUNC_18 ();
}
