
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sockopt {int* sopt_val; int sopt_valsize; int sopt_name; int sopt_level; int sopt_dir; } ;
struct iscsi_bhs {int dummy; } ;
struct icl_conn {int ic_receive_len; int ic_disconnecting; int ic_max_data_segment_length; int ic_send_running; int ic_receive_running; int ic_send_cv; int ic_name; TYPE_1__* ic_socket; int ic_receive_state; } ;
typedef int opt ;
typedef int one ;
struct TYPE_7__ {int sb_flags; } ;
struct TYPE_6__ {TYPE_4__ so_rcv; TYPE_4__ so_snd; } ;


 int VAR_0 ;
 int FUNC_0 (struct icl_conn*) ;
 int VAR_1 ;
 int FUNC_1 (struct icl_conn*) ;
 int FUNC_2 (char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (struct sockopt*,int) ;
 int FUNC_6 (int *) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_7 (struct icl_conn*) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_8 (int ,struct icl_conn*,int *,int *,int ,int ,char*,int ) ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 int FUNC_9 (TYPE_1__*,size_t,size_t) ;
 int FUNC_10 (TYPE_1__*,struct sockopt*) ;
 int FUNC_11 (TYPE_1__*,int ,int ,struct icl_conn*) ;

__attribute__((used)) static int
FUNC_12(struct icl_conn *VAR_16)
{
 size_t VAR_17;
 struct sockopt VAR_18;
 int VAR_19, VAR_20 = 1;

 FUNC_0(VAR_16);




 if (VAR_16->ic_socket == ((void*)0)) {
  FUNC_1(VAR_16);
  return (VAR_0);
 }

 VAR_16->ic_receive_state = VAR_1;
 VAR_16->ic_receive_len = sizeof(struct iscsi_bhs);
 VAR_16->ic_disconnecting = 0;

 FUNC_1(VAR_16);
 VAR_17 = sizeof(struct iscsi_bhs) + VAR_16->ic_max_data_segment_length +
     VAR_4 + VAR_3 + 4;
 if (VAR_15 < VAR_17) {
  FUNC_2("kern.icl.sendspace too low; must be at least %zd",
      VAR_17);
  VAR_15 = VAR_17;
 }
 if (VAR_14 < VAR_17) {
  FUNC_2("kern.icl.recvspace too low; must be at least %zd",
      VAR_17);
  VAR_14 = VAR_17;
 }

 VAR_19 = FUNC_9(VAR_16->ic_socket, VAR_15, VAR_14);
 if (VAR_19 != 0) {
  FUNC_2("soreserve failed with error %d", VAR_19);
  FUNC_7(VAR_16);
  return (VAR_19);
 }
 VAR_16->ic_socket->so_snd.sb_flags |= VAR_5;
 VAR_16->ic_socket->so_rcv.sb_flags |= VAR_5;




 FUNC_5(&VAR_18, sizeof(VAR_18));
 VAR_18.sopt_dir = VAR_6;
 VAR_18.sopt_level = VAR_2;
 VAR_18.sopt_name = VAR_9;
 VAR_18.sopt_val = &VAR_20;
 VAR_18.sopt_valsize = sizeof(VAR_20);
 VAR_19 = FUNC_10(VAR_16->ic_socket, &VAR_18);
 if (VAR_19 != 0) {
  FUNC_2("disabling TCP_NODELAY failed with error %d", VAR_19);
  FUNC_7(VAR_16);
  return (VAR_19);
 }





 FUNC_3(&VAR_16->ic_socket->so_snd);
 FUNC_11(VAR_16->ic_socket, VAR_8, VAR_13, VAR_16);
 FUNC_4(&VAR_16->ic_socket->so_snd);
 FUNC_3(&VAR_16->ic_socket->so_rcv);
 FUNC_11(VAR_16->ic_socket, VAR_7, VAR_12, VAR_16);
 FUNC_4(&VAR_16->ic_socket->so_rcv);




 FUNC_0(VAR_16);
 VAR_16->ic_send_running = VAR_16->ic_receive_running = 1;
 FUNC_1(VAR_16);
 VAR_19 = FUNC_8(VAR_11, VAR_16, ((void*)0), ((void*)0), 0, 0, "%stx",
     VAR_16->ic_name);
 if (VAR_19 != 0) {
  FUNC_2("kthread_add(9) failed with error %d", VAR_19);
  FUNC_0(VAR_16);
  VAR_16->ic_send_running = VAR_16->ic_receive_running = 0;
  FUNC_6(&VAR_16->ic_send_cv);
  FUNC_1(VAR_16);
  FUNC_7(VAR_16);
  return (VAR_19);
 }
 VAR_19 = FUNC_8(VAR_10, VAR_16, ((void*)0), ((void*)0), 0, 0, "%srx",
     VAR_16->ic_name);
 if (VAR_19 != 0) {
  FUNC_2("kthread_add(9) failed with error %d", VAR_19);
  FUNC_0(VAR_16);
  VAR_16->ic_receive_running = 0;
  FUNC_6(&VAR_16->ic_send_cv);
  FUNC_1(VAR_16);
  FUNC_7(VAR_16);
  return (VAR_19);
 }

 return (0);
}
