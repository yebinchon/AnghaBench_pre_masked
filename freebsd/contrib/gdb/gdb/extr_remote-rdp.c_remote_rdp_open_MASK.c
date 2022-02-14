
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* init ) (TYPE_1__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_7 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int,int) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int VAR_8 ;
 int FUNC_12 (char*,int ,int ,...) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (int ) ;
 int VAR_9 ;
 int FUNC_15 (char const*) ;
 int FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (int) ;

__attribute__((used)) static void
FUNC_18 (char *VAR_10, int VAR_11)
{
  int VAR_12;

  if (!VAR_10)
    FUNC_0 ("serial port device name");

  VAR_5 = 9600;

  FUNC_17 (VAR_11);

  VAR_7 = FUNC_13 (VAR_10);

  if (!VAR_7)
    FUNC_3 (VAR_10);

  FUNC_14 (VAR_7);

  FUNC_9 (1, VAR_11);


  if (VAR_11)
    {
      FUNC_5 ("Remote RDP debugging using %s at %d baud\n", VAR_10, VAR_5);
    }

  FUNC_8 ();


  FUNC_7 ();





  FUNC_12 ("bw-SB", VAR_2, VAR_3, &VAR_12);
  if (!VAR_12)
    {
      const char *VAR_13 = "ARM7TDI";
      int VAR_14;
      int VAR_15 = FUNC_15 (VAR_13);

      FUNC_12 ("bbbbw-p-SWZ",
  VAR_4,
  VAR_0,
  VAR_15,
  VAR_1,
  0,
  VAR_13, VAR_15,
  &VAR_14);
    }



  FUNC_6 (&VAR_8);

  VAR_6->init (VAR_6);
  FUNC_1 ();
  FUNC_11 ();
  VAR_9 = FUNC_10 ();
  FUNC_4 (FUNC_2 (), -1, 1);
}
