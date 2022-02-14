
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u_int16_t ;
struct thread {int dummy; } ;
struct sockopt {int sopt_valsize; int * sopt_td; void* sopt_val; int sopt_name; int sopt_level; int sopt_dir; } ;
struct socket {int so_state; int so_snd; int so_rcv; } ;
struct sockaddr_l2cap {int l2cap_len; void* l2cap_bdaddr_type; scalar_t__ l2cap_cid; int l2cap_bdaddr; void* l2cap_psm; void* l2cap_family; } ;
struct sockaddr {int dummy; } ;
struct rfcomm_frame_hdr {int dummy; } ;
typedef TYPE_1__* ng_btsocket_rfcomm_session_p ;
typedef int mtu ;
typedef int l2sa ;
typedef int * bdaddr_p ;
struct TYPE_7__ {int session_mtx; struct socket* l2so; int state; scalar_t__ flags; scalar_t__ mtu; int dlcs; int outq; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,TYPE_1__*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int *,int ) ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 void* FUNC_8 (int ) ;
 int VAR_21 ;
 TYPE_1__* FUNC_9 (int,int ,int) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,char*,int *,int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_15 (struct socket*,struct sockaddr*,struct thread*) ;
 int FUNC_16 (struct socket*,struct sockaddr*,struct thread*) ;
 int FUNC_17 (struct socket*,int,struct thread*) ;
 int FUNC_18 (struct socket*,struct sockopt*) ;
 int FUNC_19 (struct socket*,int ) ;
 int FUNC_20 (struct socket*,int ,int ,int *) ;

__attribute__((used)) static int
FUNC_21(ng_btsocket_rfcomm_session_p *VAR_26,
  struct socket *VAR_27, bdaddr_p VAR_28, bdaddr_p VAR_29,
  struct thread *VAR_30)
{
 ng_btsocket_rfcomm_session_p VAR_31 = ((void*)0);
 struct sockaddr_l2cap VAR_32;
 struct sockopt VAR_33;
 int VAR_34;
 u_int16_t VAR_35;

 FUNC_10(&VAR_24, VAR_3);


        VAR_31 = FUNC_9(sizeof(*VAR_31),
  VAR_6, VAR_7 | VAR_8);
        if (VAR_31 == ((void*)0))
                return (VAR_2);


 VAR_31->mtu = VAR_14;
 VAR_31->flags = 0;
 VAR_31->state = VAR_9;
 FUNC_2(&VAR_31->outq, VAR_21);
 FUNC_12(&VAR_31->session_mtx, "btsocks_rfcomm_session_mtx", ((void*)0),
  VAR_4|VAR_5);

 FUNC_0(&VAR_31->dlcs);


 FUNC_3(&VAR_27->so_rcv);
 FUNC_20(VAR_27, VAR_18, VAR_25, ((void*)0));
 FUNC_4(&VAR_27->so_rcv);
 FUNC_3(&VAR_27->so_snd);
 FUNC_20(VAR_27, VAR_19, VAR_25, ((void*)0));
 FUNC_4(&VAR_27->so_snd);
 VAR_27->so_state |= VAR_20;
 VAR_31->l2so = VAR_27;

 FUNC_13(&VAR_31->session_mtx);






 if (VAR_28 == ((void*)0) && VAR_29 == ((void*)0))
  goto done;







 VAR_35 = VAR_31->mtu + sizeof(struct rfcomm_frame_hdr) + 1 + 1;

 VAR_33.sopt_dir = VAR_16;
 VAR_33.sopt_level = VAR_15;
 VAR_33.sopt_name = VAR_17;
 VAR_33.sopt_val = (void *) &VAR_35;
 VAR_33.sopt_valsize = sizeof(VAR_35);
 VAR_33.sopt_td = ((void*)0);

 VAR_34 = FUNC_18(VAR_31->l2so, &VAR_33);
 if (VAR_34 != 0)
  goto bad;


 VAR_32.l2cap_len = sizeof(VAR_32);
 VAR_32.l2cap_family = VAR_0;
 VAR_32.l2cap_psm = (VAR_29 == ((void*)0))? FUNC_8(VAR_13) : 0;
 FUNC_5(VAR_28, &VAR_32.l2cap_bdaddr, sizeof(VAR_32.l2cap_bdaddr));
 VAR_32.l2cap_cid = 0;
 VAR_32.l2cap_bdaddr_type = VAR_1;

 VAR_34 = FUNC_15(VAR_31->l2so, (struct sockaddr *) &VAR_32, VAR_30);
 if (VAR_34 != 0)
  goto bad;


 if (VAR_29 == ((void*)0)) {
  VAR_31->flags = 0;
  VAR_31->state = VAR_12;

  VAR_34 = FUNC_17(VAR_31->l2so, 10, VAR_30);
  if (VAR_34 != 0)
   goto bad;
 } else {
  VAR_31->flags = VAR_11;
  VAR_31->state = VAR_10;

  VAR_32.l2cap_len = sizeof(VAR_32);
  VAR_32.l2cap_family = VAR_0;
  VAR_32.l2cap_psm = FUNC_8(VAR_13);
         FUNC_5(VAR_29, &VAR_32.l2cap_bdaddr, sizeof(VAR_32.l2cap_bdaddr));
  VAR_32.l2cap_cid = 0;
  VAR_32.l2cap_bdaddr_type = VAR_1;

  VAR_34 = FUNC_16(VAR_31->l2so, (struct sockaddr *) &VAR_32, VAR_30);
  if (VAR_34 != 0)
   goto bad;
 }

done:
 FUNC_1(&VAR_23, VAR_31, VAR_22);
 *VAR_26 = VAR_31;

 FUNC_14(&VAR_31->session_mtx);

 return (0);

bad:
 FUNC_14(&VAR_31->session_mtx);


 FUNC_3(&VAR_27->so_rcv);
 FUNC_19(VAR_31->l2so, VAR_18);
 FUNC_4(&VAR_27->so_rcv);
 FUNC_3(&VAR_27->so_snd);
 FUNC_19(VAR_31->l2so, VAR_19);
 FUNC_4(&VAR_27->so_snd);
 VAR_27->so_state &= ~VAR_20;

 FUNC_11(&VAR_31->session_mtx);
 FUNC_6(VAR_31, sizeof(*VAR_31));
 FUNC_7(VAR_31, VAR_6);

 return (VAR_34);
}
