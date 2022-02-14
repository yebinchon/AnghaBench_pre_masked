
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct local_bp_list_entry {struct local_bp_list_entry* next; } ;
struct TYPE_6__ {int bytesex; int fpe; int rditype; int heartbeat_on; int flags; } ;
struct TYPE_5__ {int reset; int * hostosarg; int gets; int write; int readc; int writec; int * dbgarg; int dbgpause; int dbgprint; } ;


 int FUNC_0 () ;
 int FUNC_1 (char*,char*,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (int ,unsigned long*,unsigned long*) ;
 int FUNC_3 (int,TYPE_2__*,TYPE_1__*,int *) ;
 int FUNC_4 (int ) ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_5 (char*,...) ;
 TYPE_2__ VAR_16 ;
 TYPE_1__ VAR_17 ;
 int VAR_18 ;
 struct local_bp_list_entry* VAR_19 ;
 unsigned long VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_6 (int) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int) ;
 int VAR_27 ;
 scalar_t__ VAR_28 ;
 char* FUNC_10 (char*,char) ;
 int FUNC_11 (int) ;
 int VAR_29 ;
 int FUNC_12 (struct local_bp_list_entry*) ;
 char* FUNC_13 (char*) ;

__attribute__((used)) static void
FUNC_14 (char *VAR_30, int VAR_31)
{
  int VAR_32, VAR_33;
  unsigned long VAR_34, VAR_35;
  char *VAR_36 = ((void*)0);
  char *VAR_37 = ((void*)0);
  char *VAR_38;

  if (VAR_30 == ((void*)0))
    FUNC_5 ("To open an RDI connection, you need to specify what serial\ndevice is attached to the remote system (e.g. /dev/ttya).");




  VAR_37 = FUNC_13 (VAR_30);
  VAR_38 = FUNC_10 (VAR_37, ' ');
  if (VAR_38)
    {
      *VAR_38 = '\0';
      ++VAR_38;

      while (*VAR_38 == ' ')
 ++VAR_38;

      VAR_36 = VAR_38;
    }



  FUNC_4 (0);
  VAR_32 = FUNC_1 (VAR_37, VAR_36, VAR_27);

  if (VAR_32 != VAR_13)
    FUNC_5 ("Could not open device \"%s\"", VAR_30);

  VAR_16.bytesex = 2 | (VAR_12 == VAR_0 ? 1 : 0);
  VAR_16.fpe = 1;
  VAR_16.rditype = 2;
  VAR_16.heartbeat_on = 1;
  VAR_16.flags = 2;

  VAR_17.dbgprint = VAR_23;
  VAR_17.dbgpause = VAR_22;
  VAR_17.dbgarg = ((void*)0);
  VAR_17.writec = VAR_26;
  VAR_17.readc = VAR_24;
  VAR_17.write = VAR_25;
  VAR_17.gets = VAR_21;
  VAR_17.hostosarg = ((void*)0);
  VAR_17.reset = VAR_29;

  VAR_32 = FUNC_3 (10, &VAR_16, &VAR_17, ((void*)0));
  if (VAR_32 == VAR_1 || VAR_32 == VAR_2)
    ;
  else if (VAR_32 != VAR_3)
    {
      FUNC_7 ("RDI_open: %s\n", FUNC_9 (VAR_32));
      FUNC_0 ();
      FUNC_5 ("RDI_open failed\n");
    }

  VAR_32 = FUNC_2 (VAR_9, &VAR_34, &VAR_35);
  if (VAR_32 != VAR_3)
    {
      FUNC_7 ("RDI_info: %s\n", FUNC_9 (VAR_32));
    }
  VAR_32 = FUNC_2 (VAR_6, &VAR_34, &VAR_35);
  if (VAR_32 != VAR_3)
    {
      FUNC_7 ("RDI_info: %s\n", FUNC_9 (VAR_32));
    }
  VAR_32 = FUNC_2 (VAR_8, &VAR_34, &VAR_35);
  if (VAR_32 != VAR_3)
    {
      FUNC_7 ("RDI_info: %s\n", FUNC_9 (VAR_32));
    }
  VAR_32 = FUNC_2 (VAR_4, &VAR_34, &VAR_35);
  if (VAR_32 != VAR_3)
    {
      FUNC_7 ("RDI_info: %s\n", FUNC_9 (VAR_32));
    }
  VAR_32 = FUNC_2 (VAR_7, &VAR_34, &VAR_35);
  if (VAR_32 != VAR_3)
    {
      FUNC_7 ("RDI_info: %s\n", FUNC_9 (VAR_32));
    }

  VAR_32 = FUNC_2 (VAR_5, &VAR_34, &VAR_35);
  if (VAR_32 != VAR_3)
    {
      FUNC_7 ("RDI_info: %s\n", FUNC_9 (VAR_32));
    }
  VAR_20 = VAR_34;

  FUNC_8 (&VAR_14);

  FUNC_11 (-1);

  VAR_32 = FUNC_3 (1, &VAR_16, ((void*)0), ((void*)0));
  if (VAR_32 != VAR_3)
    {
      FUNC_7 ("RDI_open: %s\n", FUNC_9 (VAR_32));
    }

  VAR_34 = VAR_28 ? 0x0 : 0x13b;

  VAR_32 = FUNC_2 (VAR_11, &VAR_34, &VAR_35);
  if (VAR_32 != VAR_3)
    {
      FUNC_7 ("RDI_info: %s\n", FUNC_9 (VAR_32));
    }

  VAR_34 = (unsigned long) "";
  VAR_32 = FUNC_2 (VAR_10, &VAR_34, &VAR_35);
  if (VAR_32 != VAR_3)
    {
      FUNC_7 ("RDI_info: %s\n", FUNC_9 (VAR_32));
    }


  {
    struct local_bp_list_entry *VAR_39, *VAR_40 = ((void*)0);

    for (VAR_39 = VAR_19; VAR_39 != ((void*)0); VAR_39 = VAR_39->next)
      {
 if (VAR_40)
   FUNC_12 (VAR_40);
      }
  }

  FUNC_7 ("Connected to ARM RDI target.\n");
  VAR_15 = 0;
  VAR_18 = FUNC_6 (42);
}
