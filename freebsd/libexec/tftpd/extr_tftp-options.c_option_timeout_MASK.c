
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int o_reply; int * o_request; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int *) ;
 int VAR_9 ;
 int FUNC_1 (int) ;
 int VAR_10 ;
 TYPE_1__* VAR_11 ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,char*,int,...) ;
 int VAR_12 ;
 int VAR_13 ;

int
FUNC_6(int VAR_14)
{
 int VAR_15;

 if (VAR_11[VAR_5].o_request == ((void*)0))
  return (0);

 VAR_15 = FUNC_0(VAR_11[VAR_5].o_request);
 if (VAR_15 < VAR_7 || VAR_15 > VAR_6) {
  FUNC_5(VAR_8 ? VAR_3 : VAR_4,
      "Received bad value for timeout. "
      "Should be between %d and %d, received %d",
      VAR_7, VAR_6, VAR_15);
  FUNC_2(VAR_14, VAR_1);
  if (VAR_8)
   return (1);
  FUNC_1(1);
 } else {
  VAR_13 = VAR_15;
  VAR_11[VAR_5].o_reply =
   FUNC_4(VAR_11[VAR_5].o_request);
 }
 FUNC_3(VAR_13, VAR_12, VAR_10);

 if (VAR_9&VAR_0)
  FUNC_5(VAR_2, "Setting timeout to '%s'",
   VAR_11[VAR_5].o_reply);

 return (0);
}
