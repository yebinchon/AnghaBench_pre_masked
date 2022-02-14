
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ttrace_events ;
struct TYPE_2__ {int tte_events; } ;
typedef TYPE_1__ ttevent_t ;
typedef int TTRACE_ARG_TYPE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int,int ,int ,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void
FUNC_2 (int VAR_6)
{
  int VAR_7;
  ttevent_t VAR_8;


  VAR_7 = FUNC_0 (VAR_3,
      VAR_6,
      (TTRACE_ARG_TYPE) & VAR_8,
      (TTRACE_ARG_TYPE) sizeof (VAR_8),
      VAR_2);
  if (VAR_5)
    FUNC_1 ("ttrace");


  VAR_8.tte_events &= ~VAR_0;
  VAR_8.tte_events &= ~VAR_1;

  VAR_7 = FUNC_0 (VAR_4,
      VAR_6,
      (TTRACE_ARG_TYPE) & VAR_8,
      (TTRACE_ARG_TYPE) sizeof (VAR_8),
      VAR_2);
  if (VAR_5)
    FUNC_1 ("ttrace");
}
