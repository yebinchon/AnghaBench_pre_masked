
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct serial {int fd; } ;
struct dos_ttystate {int fifo; int baudrate; scalar_t__ oflo; scalar_t__ txbusy; scalar_t__ count; scalar_t__ first; TYPE_1__* intrupt; int irq; int refcnt; } ;
struct TYPE_2__ {struct dos_ttystate* port; } ;


 int VAR_0 ;
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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 () ;
 int VAR_26 ;
 int FUNC_4 (struct dos_ttystate*,int ) ;
 int FUNC_5 (struct dos_ttystate*,int ,int) ;
 struct dos_ttystate* VAR_27 ;
 int FUNC_6 (int) ;
 int FUNC_7 (char const*) ;
 scalar_t__ FUNC_8 (char const*,char*,int) ;

__attribute__((used)) static int
FUNC_9 (struct serial *VAR_28, const char *VAR_29)
{
  struct dos_ttystate *VAR_30;
  int VAR_31, VAR_32;

  if (FUNC_8 (VAR_29, "/dev/", 5) == 0)
    VAR_29 += 5;
  else if (FUNC_8 (VAR_29, "\\dev\\", 5) == 0)
    VAR_29 += 5;

  if (FUNC_7 (VAR_29) != 4 || FUNC_8 (VAR_29, "com", 3) != 0)
    {
      VAR_26 = VAR_3;
      return -1;
    }

  if (VAR_29[3] < '1' || VAR_29[3] > '4')
    {
      VAR_26 = VAR_3;
      return -1;
    }





  VAR_31 = VAR_29[3] - '1';
  VAR_30 = &VAR_27[VAR_31];
  if (VAR_30->refcnt++ > 0)
    {

      VAR_28->fd = VAR_31;
      return 0;
    }


  FUNC_5 (VAR_30, VAR_16, 0);
  FUNC_5 (VAR_30, VAR_22, 0);
  for (VAR_32 = 0; VAR_32 < 17; VAR_32++)
    {
      if ((FUNC_4 (VAR_30, VAR_22) & 0x38) == 0)
 goto ok;
      (void) FUNC_4 (VAR_30, VAR_17);
    }
  VAR_26 = VAR_2;
  return -1;

ok:

  FUNC_5 (VAR_30, VAR_21, 0);


  FUNC_5 (VAR_30, VAR_20,
 VAR_4 | VAR_5 | VAR_7 | VAR_6);
  FUNC_6 (1);
  VAR_30->fifo = ((FUNC_4 (VAR_30, VAR_22) & VAR_12) == VAR_12);


  (void) FUNC_4 (VAR_30, VAR_23);
  (void) FUNC_4 (VAR_30, VAR_25);


  FUNC_5 (VAR_30, VAR_24, VAR_14);


  VAR_30->intrupt = FUNC_2 (VAR_30->irq);
  if (!VAR_30->intrupt)
    {
      FUNC_5 (VAR_30, VAR_24, 0);
      FUNC_5 (VAR_30, VAR_20, 0);
      VAR_26 = VAR_2;
      return -1;
    }

  FUNC_0 ();


  VAR_30->intrupt->port = VAR_30;
  VAR_28->fd = VAR_31;


  VAR_30->first = VAR_30->count = 0;
  VAR_30->txbusy = 0;
  VAR_30->oflo = 0;


  VAR_32 = FUNC_1 (VAR_30->baudrate = 9600);
  FUNC_5 (VAR_30, VAR_16, VAR_1);
  FUNC_5 (VAR_30, VAR_19, VAR_32 & 0xff);
  FUNC_5 (VAR_30, VAR_18, VAR_32 >> 8);
  FUNC_5 (VAR_30, VAR_16, VAR_0);


  FUNC_5 (VAR_30, VAR_21, VAR_11 | VAR_10 | VAR_9 | VAR_8);


  FUNC_5 (VAR_30, VAR_24, VAR_13 | VAR_15 | VAR_14);

  FUNC_3 ();

  return 0;
}
