
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct uio {long uio_resid; } ;
struct TYPE_9__ {int ru_msgsnd; } ;
struct thread {TYPE_2__ td_ru; } ;
struct TYPE_12__ {int sb_state; } ;
struct socket {scalar_t__ so_type; int so_options; int so_error; int so_state; TYPE_4__* so_proto; TYPE_5__ so_snd; } ;
struct sockaddr {int dummy; } ;
struct TYPE_8__ {long len; } ;
struct mbuf {int m_len; int m_flags; TYPE_1__ m_pkthdr; } ;
typedef long ssize_t ;
struct TYPE_11__ {int pr_flags; TYPE_3__* pr_usrreqs; } ;
struct TYPE_10__ {int (* pru_send ) (struct socket*,int ,struct mbuf*,struct sockaddr*,struct mbuf*,struct thread*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*) ;
 scalar_t__ VAR_21 ;
 int FUNC_3 (struct socket*) ;
 int FUNC_4 (struct socket*) ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_5 (struct socket*) ;
 int FUNC_6 (struct mbuf*) ;
 struct mbuf* FUNC_7 (struct uio*,int ,long,int ,int) ;
 int VAR_25 ;
 long FUNC_8 (TYPE_5__*) ;
 int FUNC_9 (struct socket*,int ,struct mbuf*,struct sockaddr*,struct mbuf*,struct thread*) ;

int
FUNC_10(struct socket *VAR_26, struct sockaddr *VAR_27, struct uio *VAR_28,
    struct mbuf *VAR_29, struct mbuf *VAR_30, int VAR_31, struct thread *VAR_32)
{
 long VAR_33;
 ssize_t VAR_34;
 int VAR_35 = 0, VAR_36, VAR_37;

 FUNC_0(VAR_26->so_type == VAR_21, ("sosend_dgram: !SOCK_DGRAM"));
 FUNC_0(VAR_26->so_proto->pr_flags & VAR_17,
     ("sosend_dgram: !PR_ATOMIC"));

 if (VAR_28 != ((void*)0))
  VAR_34 = VAR_28->uio_resid;
 else
  VAR_34 = VAR_29->m_pkthdr.len;







 if (VAR_34 < 0) {
  VAR_36 = VAR_2;
  goto out;
 }

 VAR_37 =
     (VAR_31 & VAR_6) && (VAR_26->so_options & VAR_22) == 0;
 if (VAR_32 != ((void*)0))
  VAR_32->td_ru.ru_msgsnd++;
 if (VAR_30 != ((void*)0))
  VAR_35 = VAR_30->m_len;

 FUNC_1(&VAR_26->so_snd);
 if (VAR_26->so_snd.sb_state & VAR_20) {
  FUNC_2(&VAR_26->so_snd);
  VAR_36 = VAR_5;
  goto out;
 }
 if (VAR_26->so_error) {
  VAR_36 = VAR_26->so_error;
  VAR_26->so_error = 0;
  FUNC_2(&VAR_26->so_snd);
  goto out;
 }
 if ((VAR_26->so_state & VAR_24) == 0) {





  if ((VAR_26->so_proto->pr_flags & VAR_18) &&
      (VAR_26->so_proto->pr_flags & VAR_19) == 0) {
   if ((VAR_26->so_state & VAR_23) == 0 &&
       !(VAR_34 == 0 && VAR_35 != 0)) {
    FUNC_2(&VAR_26->so_snd);
    VAR_36 = VAR_4;
    goto out;
   }
  } else if (VAR_27 == ((void*)0)) {
   if (VAR_26->so_proto->pr_flags & VAR_18)
    VAR_36 = VAR_4;
   else
    VAR_36 = VAR_0;
   FUNC_2(&VAR_26->so_snd);
   goto out;
  }
 }





 VAR_33 = FUNC_8(&VAR_26->so_snd);
 if (VAR_31 & VAR_10)
  VAR_33 += 1024;
 VAR_33 -= VAR_35;
 FUNC_2(&VAR_26->so_snd);
 if (VAR_34 > VAR_33) {
  VAR_36 = VAR_3;
  goto out;
 }
 if (VAR_28 == ((void*)0)) {
  VAR_34 = 0;
  if (VAR_31 & VAR_8)
   VAR_29->m_flags |= VAR_11;
 } else {





  VAR_29 = FUNC_7(VAR_28, VAR_13, VAR_33, VAR_25,
      (VAR_12 | ((VAR_31 & VAR_8) ? VAR_11 : 0)));
  if (VAR_29 == ((void*)0)) {
   VAR_36 = VAR_1;
   goto out;
  }
  VAR_33 -= VAR_34 - VAR_28->uio_resid;
  VAR_34 = VAR_28->uio_resid;
 }
 FUNC_0(VAR_34 == 0, ("sosend_dgram: resid != 0"));




 if (VAR_37) {
  FUNC_3(VAR_26);
  VAR_26->so_options |= VAR_22;
  FUNC_4(VAR_26);
 }
 FUNC_5(VAR_26);
 VAR_36 = (*VAR_26->so_proto->pr_usrreqs->pru_send)(VAR_26,
     (VAR_31 & VAR_10) ? VAR_16 :




     ((VAR_31 & VAR_7) &&
      (VAR_26->so_proto->pr_flags & VAR_19) &&
      (VAR_34 <= 0)) ?
  VAR_14 :

  (VAR_31 & VAR_9) ||
  (VAR_34 > 0 && VAR_33 > 0) ? VAR_15 : 0,
  VAR_29, VAR_27, VAR_30, VAR_32);
 if (VAR_37) {
  FUNC_3(VAR_26);
  VAR_26->so_options &= ~VAR_22;
  FUNC_4(VAR_26);
 }
 VAR_35 = 0;
 VAR_30 = ((void*)0);
 VAR_29 = ((void*)0);
out:
 if (VAR_29 != ((void*)0))
  FUNC_6(VAR_29);
 if (VAR_30 != ((void*)0))
  FUNC_6(VAR_30);
 return (VAR_36);
}
