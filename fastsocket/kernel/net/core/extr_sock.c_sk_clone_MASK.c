
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * tail; int head; } ;
struct sock {size_t sk_family; int sk_userlocks; TYPE_3__* sk_prot; int * sk_sleep; int sk_refcnt; scalar_t__ sk_priority; scalar_t__ sk_err; int * sk_destruct; struct sk_filter* sk_filter; int sk_error_queue; int * sk_send_head; scalar_t__ sk_forward_alloc; scalar_t__ sk_wmem_queued; int * sk_dst_cache; int sk_callback_lock; int sk_dst_lock; int sk_async_wait_queue; int sk_write_queue; int sk_receive_queue; int sk_omem_alloc; int sk_wmem_alloc; int sk_rmem_alloc; TYPE_1__ sk_backlog; int sk_node; } ;
struct sk_filter {int dummy; } ;
typedef int gfp_t ;
struct TYPE_6__ {scalar_t__ len; } ;
struct TYPE_8__ {TYPE_2__ sk_backlog; } ;
struct TYPE_7__ {scalar_t__ sockets_allocated; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int * VAR_5 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,scalar_t__,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *) ;
 TYPE_4__* FUNC_7 (struct sock*) ;
 int FUNC_8 (struct sock*,struct sk_filter*) ;
 int FUNC_9 (struct sock*) ;
 int FUNC_10 (int *) ;
 struct sock* FUNC_11 (TYPE_3__*,int const,size_t) ;
 int FUNC_12 (struct sock*) ;
 int FUNC_13 (struct sock*,int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 () ;
 int FUNC_16 (struct sock*,struct sock const*) ;
 scalar_t__ FUNC_17 (struct sock*,int ) ;
 int FUNC_18 (struct sock*) ;
 int FUNC_19 (struct sock*) ;
 int FUNC_20 (struct sock*,int ) ;
 scalar_t__ FUNC_21 (int ) ;
 int FUNC_22 (struct sock*) ;

struct sock *FUNC_23(const struct sock *VAR_6, const gfp_t VAR_7)
{
 struct sock *VAR_8;

 VAR_8 = FUNC_11(VAR_6->sk_prot, VAR_7, VAR_6->sk_family);
 if (VAR_8 != ((void*)0)) {
  struct sk_filter *VAR_9;

  FUNC_16(VAR_8, VAR_6);


  FUNC_2(FUNC_19(VAR_8));
  FUNC_10(&VAR_8->sk_node);
  FUNC_18(VAR_8);
  FUNC_1(VAR_8);
  VAR_8->sk_backlog.head = *(VAR_8->sk_backlog.tail = ((void*)0));
  FUNC_7(VAR_8)->sk_backlog.len = 0;

  FUNC_0(&VAR_8->sk_rmem_alloc, 0);



  FUNC_0(&VAR_8->sk_wmem_alloc, 1);
  FUNC_0(&VAR_8->sk_omem_alloc, 0);
  FUNC_14(&VAR_8->sk_receive_queue);
  FUNC_14(&VAR_8->sk_write_queue);




  FUNC_6(&VAR_8->sk_dst_lock);
  FUNC_6(&VAR_8->sk_callback_lock);
  FUNC_3(&VAR_8->sk_callback_lock,
    VAR_4 + VAR_8->sk_family,
    VAR_5[VAR_8->sk_family]);

  VAR_8->sk_dst_cache = ((void*)0);
  VAR_8->sk_wmem_queued = 0;
  VAR_8->sk_forward_alloc = 0;
  VAR_8->sk_send_head = ((void*)0);
  VAR_8->sk_userlocks = VAR_6->sk_userlocks & ~VAR_0;

  FUNC_20(VAR_8, VAR_1);
  FUNC_14(&VAR_8->sk_error_queue);

  VAR_9 = VAR_8->sk_filter;
  if (VAR_9 != ((void*)0))
   FUNC_8(VAR_8, VAR_9);

  if (FUNC_21(FUNC_22(VAR_8))) {


   VAR_8->sk_destruct = ((void*)0);
   FUNC_9(VAR_8);
   VAR_8 = ((void*)0);
   goto out;
  }

  VAR_8->sk_err = 0;
  VAR_8->sk_priority = 0;




  FUNC_15();
  FUNC_0(&VAR_8->sk_refcnt, 2);
  FUNC_12(VAR_8);
  FUNC_13(VAR_8, ((void*)0));
  VAR_8->sk_sleep = ((void*)0);

  if (VAR_8->sk_prot->sockets_allocated)
   FUNC_5(VAR_8->sk_prot->sockets_allocated);

  if (FUNC_17(VAR_8, VAR_2) ||
      FUNC_17(VAR_8, VAR_3))
   FUNC_4();
 }
out:
 return VAR_8;
}
