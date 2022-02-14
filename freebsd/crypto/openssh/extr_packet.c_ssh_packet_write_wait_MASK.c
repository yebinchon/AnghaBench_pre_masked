
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int dummy; } ;
struct ssh {struct session_state* state; } ;
struct session_state {int packet_timeout_ms; scalar_t__ connection_out; } ;
typedef int fd_set ;
typedef int fd_mask ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_1 (int,int) ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (struct timeval*) ;
 int FUNC_6 (struct timeval*,int*) ;
 int FUNC_7 (struct timeval*,int) ;
 int FUNC_8 (scalar_t__,int *,int *,int *,struct timeval*) ;
 scalar_t__ FUNC_9 (struct ssh*) ;
 int FUNC_10 (struct ssh*) ;

int
FUNC_11(struct ssh *VAR_7)
{
 fd_set *VAR_8;
 int VAR_9, VAR_10, VAR_11 = 0;
 struct timeval VAR_12, VAR_13, *VAR_14 = ((void*)0);
 struct session_state *VAR_15 = VAR_7->state;

 VAR_8 = FUNC_1(FUNC_3(VAR_15->connection_out + 1,
     VAR_3), sizeof(fd_mask));
 if (VAR_8 == ((void*)0))
  return VAR_4;
 if ((VAR_10 = FUNC_10(VAR_7)) != 0) {
  FUNC_2(VAR_8);
  return VAR_10;
 }
 while (FUNC_9(VAR_7)) {
  FUNC_4(VAR_8, 0, FUNC_3(VAR_15->connection_out + 1,
      VAR_3) * sizeof(fd_mask));
  FUNC_0(VAR_15->connection_out, VAR_8);

  if (VAR_15->packet_timeout_ms > 0) {
   VAR_11 = VAR_15->packet_timeout_ms;
   VAR_14 = &VAR_13;
  }
  for (;;) {
   if (VAR_15->packet_timeout_ms != -1) {
    FUNC_7(&VAR_13, VAR_11);
    FUNC_5(&VAR_12);
   }
   if ((VAR_9 = FUNC_8(VAR_15->connection_out + 1,
       ((void*)0), VAR_8, ((void*)0), VAR_14)) >= 0)
    break;
   if (VAR_6 != VAR_0 && VAR_6 != VAR_1 &&
       VAR_6 != VAR_2)
    break;
   if (VAR_15->packet_timeout_ms == -1)
    continue;
   FUNC_6(&VAR_12, &VAR_11);
   if (VAR_11 <= 0) {
    VAR_9 = 0;
    break;
   }
  }
  if (VAR_9 == 0) {
   FUNC_2(VAR_8);
   return VAR_5;
  }
  if ((VAR_10 = FUNC_10(VAR_7)) != 0) {
   FUNC_2(VAR_8);
   return VAR_10;
  }
 }
 FUNC_2(VAR_8);
 return 0;
}
