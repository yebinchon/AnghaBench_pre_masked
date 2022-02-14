
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef int* u_int ;
typedef int u_char ;
struct ssh {struct session_state* state; } ;
struct session_state {int server_side; scalar_t__ keep_alive_timeouts; } ;


 int FUNC_0 (int ) ;
 int* VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,char*,int ,int ,int*,int*) ;
 int FUNC_4 (int*) ;
 int FUNC_5 (struct ssh*,int*,int *) ;
 int FUNC_6 (struct ssh*) ;
 int FUNC_7 (struct ssh*) ;
 int FUNC_8 (struct ssh*,int**,int *) ;
 int FUNC_9 (struct ssh*,int**) ;
 int FUNC_10 (struct ssh*,int *) ;

int
FUNC_11(struct ssh *VAR_4, u_char *VAR_5, u_int32_t *VAR_6)
{
 struct session_state *VAR_7 = VAR_4->state;
 u_int VAR_8, VAR_9;
 int VAR_10;
 u_char *VAR_11;

 for (;;) {
  VAR_11 = ((void*)0);
  VAR_10 = FUNC_5(VAR_4, VAR_5, VAR_6);
  if (VAR_10 != 0)
   return VAR_10;
  if (*VAR_5) {
   VAR_7->keep_alive_timeouts = 0;
   FUNC_0(FUNC_1("received packet type %d", *VAR_5));
  }
  switch (*VAR_5) {
  case 129:
   FUNC_2("Received SSH2_MSG_IGNORE");
   break;
  case 131:
   if ((VAR_10 = FUNC_10(VAR_4, ((void*)0))) != 0 ||
       (VAR_10 = FUNC_8(VAR_4, &VAR_11, ((void*)0))) != 0 ||
       (VAR_10 = FUNC_8(VAR_4, ((void*)0), ((void*)0))) != 0) {
    FUNC_4(VAR_11);
    return VAR_10;
   }
   FUNC_1("Remote: %.900s", VAR_11);
   FUNC_4(VAR_11);
   break;
  case 130:
   if ((VAR_10 = FUNC_9(VAR_4, &VAR_8)) != 0 ||
       (VAR_10 = FUNC_8(VAR_4, &VAR_11, ((void*)0))) != 0)
    return VAR_10;

   FUNC_3(VAR_4->state->server_side &&
       VAR_8 == VAR_0 ?
       VAR_3 : VAR_2,
       "Received disconnect from %s port %d:"
       "%u: %.400s", FUNC_6(VAR_4),
       FUNC_7(VAR_4), VAR_8, VAR_11);
   FUNC_4(VAR_11);
   return VAR_1;
  case 128:
   if ((VAR_10 = FUNC_9(VAR_4, &VAR_9)) != 0)
    return VAR_10;
   FUNC_1("Received SSH2_MSG_UNIMPLEMENTED for %u",
       VAR_9);
   break;
  default:
   return 0;
  }
 }
}
