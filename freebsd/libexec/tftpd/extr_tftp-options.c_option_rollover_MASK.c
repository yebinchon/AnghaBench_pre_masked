
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * o_reply; int * o_request; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 TYPE_1__* VAR_8 ;
 int FUNC_0 (int,int ) ;
 scalar_t__ FUNC_1 (int *,char*) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int ,char*,int *) ;

int
FUNC_4(int VAR_9)
{

 if (VAR_8[VAR_5].o_request == ((void*)0))
  return (0);

 if (FUNC_1(VAR_8[VAR_5].o_request, "0") != 0
  && FUNC_1(VAR_8[VAR_5].o_request, "1") != 0) {
  FUNC_3(VAR_6 ? VAR_3 : VAR_4,
      "Bad value for rollover, "
      "should be either 0 or 1, received '%s', "
      "ignoring request",
      VAR_8[VAR_5].o_request);
  if (VAR_6) {
   FUNC_0(VAR_9, VAR_1);
   return (1);
  }
  return (0);
 }
 VAR_8[VAR_5].o_reply =
  FUNC_2(VAR_8[VAR_5].o_request);

 if (VAR_7&VAR_0)
  FUNC_3(VAR_2, "Setting rollover to '%s'",
   VAR_8[VAR_5].o_reply);

 return (0);
}
