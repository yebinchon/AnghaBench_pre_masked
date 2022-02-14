
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timeval {scalar_t__ tv_sec; } ;
struct tac_msg {int seq_no; int length; int flags; } ;
struct tac_handle {int last_seq_no; size_t cur_server; scalar_t__ fd; TYPE_1__* servers; scalar_t__ single_connect; struct tac_msg request; } ;
typedef int fd_set ;
struct TYPE_2__ {scalar_t__ timeout; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct tac_handle*,struct tac_msg*) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (struct tac_handle*) ;
 int FUNC_4 (struct tac_msg*) ;
 int FUNC_5 (struct tac_handle*,char*,...) ;
 int FUNC_6 (struct timeval*,int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (scalar_t__,int *,int *,int *,struct timeval*) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (struct timeval*,struct timeval*,struct timeval*) ;
 int FUNC_11 (scalar_t__,char*,int) ;

__attribute__((used)) static int
FUNC_12(struct tac_handle *VAR_4)
{
 struct timeval VAR_5;
 struct tac_msg *VAR_6;
 char *VAR_7;
 int VAR_8;

 if (VAR_4->last_seq_no & 1) {
  FUNC_5(VAR_4, "Attempt to send message out of sequence");
  return -1;
 }

 if (FUNC_3(VAR_4) == -1)
  return -1;

 VAR_6 = &VAR_4->request;
 VAR_6->seq_no = ++VAR_4->last_seq_no;
 if (VAR_6->seq_no == 1)
  FUNC_4(VAR_6);
 FUNC_2(VAR_4, VAR_6);

 if (VAR_4->single_connect)
  VAR_6->flags |= VAR_2;
 else
  VAR_6->flags &= ~VAR_2;
 FUNC_6(&VAR_5, ((void*)0));
 VAR_5.tv_sec += VAR_4->servers[VAR_4->cur_server].timeout;
 VAR_8 = VAR_1 + FUNC_7(VAR_6->length);
 VAR_7 = (char *)VAR_6;
 while (VAR_8 > 0) {
  int VAR_9;

  VAR_9 = FUNC_11(VAR_4->fd, VAR_7, VAR_8);
  if (VAR_9 == -1) {
   struct timeval VAR_10;
   int VAR_11;

   if (VAR_3 != VAR_0) {
    FUNC_5(VAR_4, "Network write error: %s",
        FUNC_9(VAR_3));
    return -1;
   }


   FUNC_6(&VAR_10, ((void*)0));
   FUNC_10(&VAR_5, &VAR_10, &VAR_10);
   if (VAR_10.tv_sec >= 0) {
    fd_set VAR_12;

    FUNC_1(&VAR_12);
    FUNC_0(VAR_4->fd, &VAR_12);
    VAR_11 =
        FUNC_8(VAR_4->fd + 1, ((void*)0), &VAR_12, ((void*)0), &VAR_10);
    if (VAR_11 == -1) {
     FUNC_5(VAR_4, "select: %s",
         FUNC_9(VAR_3));
     return -1;
    }
   } else
    VAR_11 = 0;
   if (VAR_11 == 0) {
    FUNC_5(VAR_4, "Network write timed out");
    return -1;
   }
  } else {
   VAR_7 += VAR_9;
   VAR_8 -= VAR_9;
  }
 }
 return 0;
}
