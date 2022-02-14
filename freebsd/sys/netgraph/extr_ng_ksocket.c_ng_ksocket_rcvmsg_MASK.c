
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct thread {int dummy; } ;
struct sockopt {int sopt_valsize; int * sopt_td; int sopt_val; int sopt_name; int sopt_level; int sopt_dir; } ;
struct socket {int so_state; int so_options; TYPE_2__* so_proto; } ;
struct sockaddr {int sa_len; } ;
struct TYPE_9__ {int typecookie; int const cmd; int arglen; int token; } ;
struct ng_mesg {TYPE_3__ header; scalar_t__ data; } ;
struct ng_ksocket_sockopt {int value; int name; int level; } ;
typedef TYPE_4__* priv_p ;
typedef int node_p ;
typedef void* ng_ID_t ;
typedef int item_p ;
typedef int int32_t ;
typedef int hook_p ;
struct TYPE_10__ {int flags; void* response_addr; int response_token; struct socket* so; } ;
struct TYPE_8__ {TYPE_1__* pr_usrreqs; } ;
struct TYPE_7__ {int (* pru_peeraddr ) (struct socket*,struct sockaddr**) ;int (* pru_sockaddr ) (struct socket*,struct sockaddr**) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ,struct ng_mesg*) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (struct ng_mesg*) ;
 int VAR_11 ;
 int FUNC_4 (struct ng_mesg*,struct ng_mesg*,int,int ) ;
 TYPE_4__* FUNC_5 (int ) ;
 int FUNC_6 (int,int ,int ,struct ng_mesg*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_7 (struct sockaddr*,scalar_t__,int) ;
 struct thread* VAR_20 ;
 int FUNC_8 (struct sockaddr*,int ) ;
 int FUNC_9 (TYPE_4__* const) ;
 int FUNC_10 (struct socket* const,struct sockaddr* const,struct thread*) ;
 int FUNC_11 (struct socket* const,struct sockaddr* const,struct thread*) ;
 int FUNC_12 (struct socket* const,struct sockopt*) ;
 int FUNC_13 (struct socket* const,int ,struct thread*) ;
 int FUNC_14 (struct socket* const,struct sockopt*) ;
 int FUNC_15 (struct socket* const,struct sockaddr**) ;

__attribute__((used)) static int
FUNC_16(node_p VAR_21, item_p VAR_22, hook_p VAR_23)
{
 struct thread *VAR_24 = VAR_20;
 const priv_p VAR_25 = FUNC_5(VAR_21);
 struct socket *const VAR_26 = VAR_25->so;
 struct ng_mesg *VAR_27 = ((void*)0);
 int VAR_28 = 0;
 struct ng_mesg *VAR_29;
 ng_ID_t VAR_30;

 FUNC_1(VAR_22, VAR_29);
 switch (VAR_29->header.typecookie) {
 case 133:
  switch (VAR_29->header.cmd) {
  case 135:
      {
   struct sockaddr *const VAR_31
       = (struct sockaddr *)VAR_29->data;


   if (VAR_29->header.arglen < VAR_12
       || VAR_29->header.arglen < VAR_31->sa_len)
    FUNC_0(VAR_2);
   if (VAR_26 == ((void*)0))
    FUNC_0(VAR_5);


   VAR_28 = FUNC_10(VAR_26, VAR_31, VAR_24);
   break;
      }
  case 129:
      {

   if (VAR_29->header.arglen != sizeof(int32_t))
    FUNC_0(VAR_2);
   if (VAR_26 == ((void*)0))
    FUNC_0(VAR_5);


   VAR_26->so_state |= VAR_19;
   VAR_28 = FUNC_13(VAR_26, *((int32_t *)VAR_29->data), VAR_24);
   break;
      }

  case 136:
      {

   if (VAR_29->header.arglen != 0)
    FUNC_0(VAR_2);
   if (VAR_26 == ((void*)0))
    FUNC_0(VAR_5);


   if (!(VAR_26->so_options & VAR_15))
    FUNC_0(VAR_2);
   if (VAR_25->flags & VAR_7)
    FUNC_0(VAR_0);






   VAR_28 = FUNC_9(VAR_25);
   if (VAR_28 != 0 && VAR_28 != VAR_6)
    FUNC_0(VAR_28);
   VAR_25->response_token = VAR_29->header.token;
   VAR_30 = VAR_25->response_addr = FUNC_2(VAR_22);
   break;
      }

  case 134:
      {
   struct sockaddr *const VAR_32
       = (struct sockaddr *)VAR_29->data;


   if (VAR_29->header.arglen < VAR_12
       || VAR_29->header.arglen < VAR_32->sa_len)
    FUNC_0(VAR_2);
   if (VAR_26 == ((void*)0))
    FUNC_0(VAR_5);


   if ((VAR_26->so_state & VAR_18) != 0)
    FUNC_0(VAR_0);
   if ((VAR_28 = FUNC_11(VAR_26, VAR_32, VAR_24)) != 0) {
    VAR_26->so_state &= ~VAR_18;
    FUNC_0(VAR_28);
   }
   if ((VAR_26->so_state & VAR_18) != 0) {

    VAR_25->response_token = VAR_29->header.token;
    VAR_30 = VAR_25->response_addr = FUNC_2(VAR_22);
    VAR_25->flags |= VAR_8;
    FUNC_0(VAR_1);
   }
   break;
      }

  case 132:
  case 130:
      {
   int (*VAR_33)(struct socket *VAR_34, struct sockaddr **VAR_35);
   struct sockaddr *VAR_36 = ((void*)0);
   int VAR_37;


   if (VAR_29->header.arglen != 0)
    FUNC_0(VAR_2);
   if (VAR_26 == ((void*)0))
    FUNC_0(VAR_5);


   if (VAR_29->header.cmd == 130) {
    if ((VAR_26->so_state
        & (VAR_17|VAR_16)) == 0)
     FUNC_0(VAR_4);
    VAR_33 = VAR_26->so_proto->pr_usrreqs->pru_peeraddr;
   } else
    VAR_33 = VAR_26->so_proto->pr_usrreqs->pru_sockaddr;


   if ((VAR_28 = (*VAR_33)(VAR_26, &VAR_36)) != 0)
    goto bail;
   VAR_37 = (VAR_36 == ((void*)0)) ? 0 : VAR_36->sa_len;


   FUNC_4(VAR_27, VAR_29, VAR_37, VAR_9);
   if (VAR_27 == ((void*)0)) {
    VAR_28 = VAR_3;
    goto bail;
   }
   FUNC_7(VAR_36, VAR_27->data, VAR_37);

  bail:

   if (VAR_36 != ((void*)0))
    FUNC_8(VAR_36, VAR_10);
   break;
      }

  case 131:
      {
   struct ng_ksocket_sockopt *VAR_38 =
       (struct ng_ksocket_sockopt *)VAR_29->data;
   struct sockopt VAR_39;


   if (VAR_29->header.arglen != sizeof(*VAR_38))
    FUNC_0(VAR_2);
   if (VAR_26 == ((void*)0))
    FUNC_0(VAR_5);


   FUNC_4(VAR_27, VAR_29, sizeof(*VAR_38)
       + VAR_11, VAR_9);
   if (VAR_27 == ((void*)0))
    FUNC_0(VAR_3);


   VAR_39.sopt_dir = VAR_13;
   VAR_39.sopt_level = VAR_38->level;
   VAR_39.sopt_name = VAR_38->name;
   VAR_39.sopt_td = ((void*)0);
   VAR_39.sopt_valsize = VAR_11;
   VAR_38 = (struct ng_ksocket_sockopt *)VAR_27->data;
   VAR_39.sopt_val = VAR_38->value;
   if ((VAR_28 = FUNC_12(VAR_26, &VAR_39)) != 0) {
    FUNC_3(VAR_27);
    break;
   }


   VAR_27->header.arglen = sizeof(*VAR_38)
       + VAR_39.sopt_valsize;
   break;
      }

  case 128:
      {
   struct ng_ksocket_sockopt *const VAR_40 =
       (struct ng_ksocket_sockopt *)VAR_29->data;
   const int VAR_41 = VAR_29->header.arglen - sizeof(*VAR_40);
   struct sockopt VAR_42;


   if (VAR_41 < 0)
    FUNC_0(VAR_2);
   if (VAR_26 == ((void*)0))
    FUNC_0(VAR_5);


   VAR_42.sopt_dir = VAR_14;
   VAR_42.sopt_level = VAR_40->level;
   VAR_42.sopt_name = VAR_40->name;
   VAR_42.sopt_val = VAR_40->value;
   VAR_42.sopt_valsize = VAR_41;
   VAR_42.sopt_td = ((void*)0);
   VAR_28 = FUNC_14(VAR_26, &VAR_42);
   break;
      }

  default:
   VAR_28 = VAR_2;
   break;
  }
  break;
 default:
  VAR_28 = VAR_2;
  break;
 }
done:
 FUNC_6(VAR_28, VAR_21, VAR_22, VAR_27);
 FUNC_3(VAR_29);
 return (VAR_28);
}
