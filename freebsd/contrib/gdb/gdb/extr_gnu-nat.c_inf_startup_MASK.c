
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inf {int event_port; } ;
typedef scalar_t__ error_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct inf*) ;
 int FUNC_2 (struct inf*,char*,int) ;
 int FUNC_3 (struct inf*,int) ;
 scalar_t__ FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (scalar_t__) ;

void
FUNC_8 (struct inf *VAR_2, int VAR_3)
{
  error_t VAR_4;

  FUNC_2 (VAR_2, "startup: pid = %d", VAR_3);

  FUNC_1 (VAR_2);


  VAR_4 = FUNC_4 (FUNC_6 (),
       VAR_1, &VAR_2->event_port);
  if (VAR_4)
    FUNC_0 ("Error allocating event port: %s", FUNC_7 (VAR_4));


  FUNC_5 (FUNC_6 (), VAR_2->event_port,
     VAR_2->event_port, VAR_0);
  FUNC_3 (VAR_2, VAR_3);
}
