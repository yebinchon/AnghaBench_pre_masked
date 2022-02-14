
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int * oact; } ;
struct TYPE_6__ {int progname; } ;
typedef int SCR ;
typedef TYPE_1__ GS ;
typedef TYPE_2__ CL_PRIVATE ;


 TYPE_2__* FUNC_0 (TYPE_1__*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
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
 int FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int ,int *,int ) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;

int
FUNC_6(GS *VAR_14, SCR *VAR_15)
{
 CL_PRIVATE *VAR_16;

 VAR_16 = FUNC_0(VAR_14);

 if (VAR_15 == ((void*)0)) {
  (void)FUNC_5(&VAR_9);
  if (FUNC_4(&VAR_9, VAR_5) ||
      FUNC_3(VAR_5, &VAR_16->oact[VAR_0], VAR_10) ||
      FUNC_4(&VAR_9, VAR_6) ||
      FUNC_3(VAR_6, &VAR_16->oact[VAR_1], VAR_11) ||
      FUNC_4(&VAR_9, VAR_7) ||
      FUNC_3(VAR_7, &VAR_16->oact[VAR_2], VAR_12)





      ) {
   FUNC_2(VAR_14->progname, ((void*)0));
   return (1);
  }
 } else
  if (FUNC_3(VAR_5, ((void*)0), VAR_10) ||
      FUNC_3(VAR_6, ((void*)0), VAR_11) ||
      FUNC_3(VAR_7, ((void*)0), VAR_12)




      ) {
   FUNC_1(VAR_15, VAR_4, "signal-reset");
  }
 return (0);
}
