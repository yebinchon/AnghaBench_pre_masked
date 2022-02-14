
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
struct timeval {int tv_sec; } ;
struct TYPE_6__ {struct tac_msg* body; } ;
struct tac_msg {scalar_t__ type; scalar_t__ seq_no; int flags; TYPE_3__ u; int length; int session_id; } ;
struct TYPE_5__ {scalar_t__ type; int session_id; } ;
struct tac_handle {size_t cur_server; scalar_t__ last_seq_no; scalar_t__ single_connect; TYPE_2__ request; TYPE_1__* servers; struct tac_msg response; } ;
struct TYPE_4__ {scalar_t__ timeout; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct tac_handle*,struct tac_msg*) ;
 int FUNC_1 (struct tac_handle*,char*,...) ;
 int FUNC_2 (struct timeval*,int *) ;
 scalar_t__ FUNC_3 (int ,int ,int) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct tac_handle*,struct tac_msg*,scalar_t__,struct timeval*) ;

__attribute__((used)) static int
FUNC_6(struct tac_handle *VAR_3)
{
 struct timeval VAR_4;
 struct tac_msg *VAR_5;
 u_int32_t VAR_6;

 VAR_5 = &VAR_3->response;
 FUNC_2(&VAR_4, ((void*)0));
 VAR_4.tv_sec += VAR_3->servers[VAR_3->cur_server].timeout;


 if (FUNC_5(VAR_3, VAR_5, VAR_1, &VAR_4) == -1)
  return -1;
 if (FUNC_3(VAR_5->session_id, VAR_3->request.session_id,
     sizeof VAR_5->session_id) != 0) {
  FUNC_1(VAR_3, "Invalid session ID in received message");
  return -1;
 }
 if (VAR_5->type != VAR_3->request.type) {
  FUNC_1(VAR_3, "Invalid type in received message"
     " (got %u, expected %u)",
     VAR_5->type, VAR_3->request.type);
  return -1;
 }
 VAR_6 = FUNC_4(VAR_5->length);
 if (VAR_6 > VAR_0) {
  FUNC_1(VAR_3, "Received message too large (%u > %u)",
     VAR_6, VAR_0);
  return -1;
 }
 if (VAR_5->seq_no != ++VAR_3->last_seq_no) {
  FUNC_1(VAR_3, "Invalid sequence number in received message"
     " (got %u, expected %u)",
     VAR_5->seq_no, VAR_3->last_seq_no);
  return -1;
 }


 if (FUNC_5(VAR_3, VAR_5->u.body, VAR_6, &VAR_4) == -1)
  return -1;


 FUNC_0(VAR_3, VAR_5);





 if (!(VAR_5->flags & VAR_2))
  VAR_3->single_connect = 0;
 return 0;
}
