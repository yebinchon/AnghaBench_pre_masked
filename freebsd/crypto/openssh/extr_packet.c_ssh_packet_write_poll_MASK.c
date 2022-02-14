
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssh {struct session_state* state; } ;
struct session_state {int output; int connection_out; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int) ;

int
FUNC_4(struct ssh *VAR_6)
{
 struct session_state *VAR_7 = VAR_6->state;
 int VAR_8 = FUNC_1(VAR_7->output);
 int VAR_9;

 if (VAR_8 > 0) {
  VAR_8 = FUNC_3(VAR_7->connection_out,
      FUNC_2(VAR_7->output), VAR_8);
  if (VAR_8 == -1) {
   if (VAR_5 == VAR_1 || VAR_5 == VAR_0 ||
       VAR_5 == VAR_2)
    return 0;
   return VAR_4;
  }
  if (VAR_8 == 0)
   return VAR_3;
  if ((VAR_9 = FUNC_0(VAR_7->output, VAR_8)) != 0)
   return VAR_9;
 }
 return 0;
}
