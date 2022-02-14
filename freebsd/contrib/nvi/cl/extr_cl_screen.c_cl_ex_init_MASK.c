
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int c_lflag; int c_oflag; int c_iflag; } ;
struct TYPE_5__ {TYPE_2__ ex_enter; TYPE_2__ orig; int * rmso; int * smso; int * cuu1; int * el; int * cup; } ;
typedef int SCR ;
typedef TYPE_1__ CL_PRIVATE ;


 TYPE_1__* FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ) ;
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
 int FUNC_2 (int *,char*,int **) ;
 scalar_t__ VAR_18 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,char*) ;
 scalar_t__ FUNC_5 (int ,int,TYPE_2__*) ;

__attribute__((used)) static int
FUNC_6(SCR *VAR_19)
{
 CL_PRIVATE *VAR_20;

 VAR_20 = FUNC_0(VAR_19);


 if (FUNC_1(VAR_20, VAR_0))
  goto fast;


 if (!FUNC_1(VAR_20, VAR_1))
  return (0);


 (void)FUNC_2(VAR_19, "cup", &VAR_20->cup);
 (void)FUNC_2(VAR_19, "smso", &VAR_20->smso);
 (void)FUNC_2(VAR_19, "rmso", &VAR_20->rmso);
 (void)FUNC_2(VAR_19, "el", &VAR_20->el);
 (void)FUNC_2(VAR_19, "cuu1", &VAR_20->cuu1);


 if (VAR_20->smso == ((void*)0) || VAR_20->rmso == ((void*)0)) {
  if (VAR_20->smso != ((void*)0)) {
   FUNC_3(VAR_20->smso);
   VAR_20->smso = ((void*)0);
  }
  if (VAR_20->rmso != ((void*)0)) {
   FUNC_3(VAR_20->rmso);
   VAR_20->rmso = ((void*)0);
  }
 }
 VAR_20->ex_enter = VAR_20->orig;
 VAR_20->ex_enter.c_lflag |= VAR_2 | VAR_4 | VAR_5 | VAR_8 | VAR_10 | VAR_11;






 VAR_20->ex_enter.c_iflag |= VAR_9;
 VAR_20->ex_enter.c_oflag |= VAR_14;




fast: if (FUNC_5(VAR_15, VAR_16 | VAR_17, &VAR_20->ex_enter)) {
  if (VAR_18 == VAR_7)
   goto fast;
  FUNC_4(VAR_19, VAR_12, "tcsetattr");
  return (1);
 }
 return (0);
}
