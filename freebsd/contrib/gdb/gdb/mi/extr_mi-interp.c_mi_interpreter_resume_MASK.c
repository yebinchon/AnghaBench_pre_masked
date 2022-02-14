
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mi_interp {int targ; int log; int err; int out; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 () ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_3 () ;
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
 scalar_t__ VAR_21 ;

__attribute__((used)) static int
FUNC_4 (void *VAR_22)
{
  struct mi_interp *VAR_23 = VAR_22;


  FUNC_3 ();

  if (VAR_6)
    {


      VAR_4 = VAR_7;
      VAR_13 = VAR_17;
      FUNC_0 (VAR_12, VAR_20, 0);
      VAR_3 = 0;






      VAR_21 = 0;
    }

  VAR_10 = VAR_23->out;

  VAR_8 = VAR_23->err;
  VAR_9 = VAR_23->log;

  VAR_11 = VAR_23->targ;



  FUNC_1 ();

  VAR_19 = VAR_18;


  if (FUNC_2 (VAR_0))
    VAR_5 = VAR_14;
  else if (FUNC_2 (VAR_1))
    VAR_5 = VAR_15;
  else if (FUNC_2 (VAR_2))
    VAR_5 = VAR_16;
  else
    VAR_5 = VAR_15;

  return 1;
}
