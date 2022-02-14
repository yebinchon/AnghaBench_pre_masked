
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int sigset_t ;
struct TYPE_12__ {int sa_mask; scalar_t__ sa_flags; int sa_handler; } ;
struct TYPE_11__ {TYPE_1__* el_signal; } ;
struct TYPE_10__ {int sig_no; TYPE_5__* sig_action; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_4 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_2__* VAR_5 ;
 int FUNC_4 (int,TYPE_5__*,int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 int* VAR_6 ;
 int FUNC_7 (int ,int *,int *) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_11(int VAR_7)
{
 int VAR_8, VAR_9;
 sigset_t VAR_10, VAR_11;

 VAR_9 = VAR_4;
 (void) FUNC_6(&VAR_10);
 (void) FUNC_5(&VAR_10, VAR_7);
 (void) FUNC_7(VAR_1, &VAR_10, &VAR_11);

 VAR_5->el_signal->sig_no = VAR_7;

 switch (VAR_7) {
 case 129:
  FUNC_10(VAR_5);
  if (FUNC_0(VAR_5, 0) == VAR_0)
   FUNC_3(VAR_5);
  FUNC_8(VAR_5);
  break;

 case 128:
  FUNC_1(VAR_5);
  break;

 default:
  FUNC_9(VAR_5);
  break;
 }

 for (VAR_8 = 0; VAR_6[VAR_8] != -1; VAR_8++)
  if (VAR_7 == VAR_6[VAR_8])
   break;

 (void) FUNC_4(VAR_7, &VAR_5->el_signal->sig_action[VAR_8], ((void*)0));
 VAR_5->el_signal->sig_action[VAR_8].sa_handler = VAR_2;
 VAR_5->el_signal->sig_action[VAR_8].sa_flags = 0;
 FUNC_6(&VAR_5->el_signal->sig_action[VAR_8].sa_mask);
 (void) FUNC_7(VAR_3, &VAR_11, ((void*)0));
 (void) FUNC_2(0, VAR_7);
 VAR_4 = VAR_9;
}
