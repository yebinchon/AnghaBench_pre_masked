
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serial {size_t fd; } ;
struct intrupt {int port; } ;
struct dos_ttystate {int baudrate; scalar_t__ fifo; scalar_t__ oflo; struct intrupt* intrupt; int refcnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (struct intrupt*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,char*,...) ;
 int VAR_3 ;
 int FUNC_4 (struct dos_ttystate*,int ,int ) ;
 struct dos_ttystate* VAR_4 ;

__attribute__((used)) static void
FUNC_5 (struct serial *VAR_5)
{
  struct dos_ttystate *VAR_6;
  struct intrupt *VAR_7;

  if (!VAR_5)
    return;

  VAR_6 = &VAR_4[VAR_5->fd];

  if (VAR_6->refcnt-- > 1)
    return;

  if (!(VAR_7 = VAR_6->intrupt))
    return;


  FUNC_0 ();
  VAR_6->intrupt = 0;
  VAR_7->port = 0;
  FUNC_4 (VAR_6, VAR_0, 0);
  FUNC_4 (VAR_6, VAR_1, 0);
  FUNC_2 ();


  FUNC_1 (VAR_7);
  FUNC_4 (VAR_6, VAR_2, 0);


  if (VAR_6->oflo)
    {
      FUNC_3 (VAR_3,
     "Serial input overruns occurred.\n");
      FUNC_3 (VAR_3, "This system %s handle %d baud.\n",
     VAR_6->fifo ? "cannot" : "needs a 16550 to",
     VAR_6->baudrate);
    }
}
