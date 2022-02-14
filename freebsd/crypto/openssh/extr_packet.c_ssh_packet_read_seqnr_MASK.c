
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef scalar_t__ u_char ;
struct timeval {int dummy; } ;
struct ssh {struct session_state* state; } ;
struct session_state {int packet_timeout_ms; scalar_t__ connection_in; } ;
typedef int fd_set ;
typedef int fd_mask ;
typedef int buf ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (scalar_t__,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int * FUNC_2 (int,int) ;
 int FUNC_3 (char*) ;
 scalar_t__ VAR_9 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (int *,int ,int) ;
 int FUNC_7 (struct timeval*) ;
 int FUNC_8 (struct timeval*,int*) ;
 int FUNC_9 (struct timeval*,int) ;
 int FUNC_10 (scalar_t__,char*,int) ;
 int FUNC_11 (scalar_t__,int *,int *,int *,struct timeval*) ;
 int FUNC_12 (struct ssh*,char*,int) ;
 int FUNC_13 (struct ssh*,scalar_t__*,int *) ;
 int FUNC_14 (struct ssh*) ;

int
FUNC_15(struct ssh *VAR_10, u_char *VAR_11, u_int32_t *VAR_12)
{
 struct session_state *VAR_13 = VAR_10->state;
 int VAR_14, VAR_15, VAR_16;
 fd_set *VAR_17;
 char VAR_18[8192];
 struct timeval VAR_19, VAR_20, *VAR_21 = ((void*)0);

 FUNC_0(FUNC_3("packet_read()"));

 VAR_17 = FUNC_2(FUNC_5(VAR_13->connection_in + 1,
     VAR_3), sizeof(fd_mask));
 if (VAR_17 == ((void*)0))
  return VAR_4;





 if ((VAR_15 = FUNC_14(VAR_10)) != 0)
  goto out;


 for (;;) {

  VAR_15 = FUNC_13(VAR_10, VAR_11, VAR_12);
  if (VAR_15 != 0)
   break;

  if (*VAR_11 != VAR_8)
   break;




  FUNC_6(VAR_17, 0, FUNC_5(VAR_13->connection_in + 1,
      VAR_3) * sizeof(fd_mask));
  FUNC_1(VAR_13->connection_in, VAR_17);

  if (VAR_13->packet_timeout_ms > 0) {
   VAR_16 = VAR_13->packet_timeout_ms;
   VAR_21 = &VAR_19;
  }

  for (;;) {
   if (VAR_13->packet_timeout_ms != -1) {
    FUNC_9(&VAR_19, VAR_16);
    FUNC_7(&VAR_20);
   }
   if ((VAR_15 = FUNC_11(VAR_13->connection_in + 1, VAR_17,
       ((void*)0), ((void*)0), VAR_21)) >= 0)
    break;
   if (VAR_9 != VAR_0 && VAR_9 != VAR_1 &&
       VAR_9 != VAR_2) {
    VAR_15 = VAR_7;
    goto out;
   }
   if (VAR_13->packet_timeout_ms == -1)
    continue;
   FUNC_8(&VAR_20, &VAR_16);
   if (VAR_16 <= 0) {
    VAR_15 = 0;
    break;
   }
  }
  if (VAR_15 == 0) {
   VAR_15 = VAR_6;
   goto out;
  }

  VAR_14 = FUNC_10(VAR_13->connection_in, VAR_18, sizeof(VAR_18));
  if (VAR_14 == 0) {
   VAR_15 = VAR_5;
   goto out;
  }
  if (VAR_14 < 0) {
   VAR_15 = VAR_7;
   goto out;
  }


  if ((VAR_15 = FUNC_12(VAR_10, VAR_18, VAR_14)) != 0)
   goto out;
 }
 out:
 FUNC_4(VAR_17);
 return VAR_15;
}
