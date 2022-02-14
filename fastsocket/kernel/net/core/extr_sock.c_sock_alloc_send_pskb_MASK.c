
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sock {int sk_allocation; int sk_shutdown; scalar_t__ sk_sndbuf; TYPE_1__* sk_socket; int sk_wmem_alloc; } ;
struct sk_buff {unsigned long truesize; } ;
struct page {int dummy; } ;
struct TYPE_5__ {int size; scalar_t__ page_offset; struct page* page; } ;
typedef TYPE_2__ skb_frag_t ;
typedef int gfp_t ;
struct TYPE_6__ {int nr_frags; TYPE_2__* frags; } ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct page* FUNC_0 (int,int ) ;
 struct sk_buff* FUNC_1 (unsigned long,int) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_12 ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct sk_buff*,struct sock*) ;
 TYPE_3__* FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sock*) ;
 int FUNC_9 (long) ;
 long FUNC_10 (struct sock*,int) ;
 long FUNC_11 (struct sock*,long) ;

struct sk_buff *FUNC_12(struct sock *VAR_13, unsigned long VAR_14,
         unsigned long VAR_15, int VAR_16,
         int *VAR_17)
{
 struct sk_buff *VAR_18;
 gfp_t VAR_19;
 long VAR_20;
 int VAR_21;

 VAR_19 = VAR_13->sk_allocation;
 if (VAR_19 & VAR_11)
  VAR_19 |= VAR_10;

 VAR_20 = FUNC_10(VAR_13, VAR_16);
 while (1) {
  int VAR_22;
  VAR_21 = FUNC_8(VAR_13);
  if (VAR_21 != 0)
   goto failure;

  VAR_21 = -VAR_3;
  if (VAR_13->sk_shutdown & VAR_7)
   goto failure;

  VAR_21 = -VAR_1;
  VAR_22 = (VAR_15 + (VAR_6 - 1)) >> VAR_5;
  if (VAR_22 > VAR_4)
   goto failure;

  if (FUNC_2(&VAR_13->sk_wmem_alloc) < VAR_13->sk_sndbuf) {
   VAR_18 = FUNC_1(VAR_14, VAR_19);
   if (VAR_18) {
    int VAR_23;


    if (!VAR_15)
     break;

    VAR_18->truesize += VAR_15;
    FUNC_7(VAR_18)->nr_frags = VAR_22;
    for (VAR_23 = 0; VAR_23 < VAR_22; VAR_23++) {
     struct page *VAR_24;
     skb_frag_t *VAR_25;

     VAR_24 = FUNC_0(VAR_13->sk_allocation, 0);
     if (!VAR_24) {
      VAR_21 = -VAR_2;
      FUNC_7(VAR_18)->nr_frags = VAR_23;
      FUNC_3(VAR_18);
      goto failure;
     }

     VAR_25 = &FUNC_7(VAR_18)->frags[VAR_23];
     VAR_25->page = VAR_24;
     VAR_25->page_offset = 0;
     VAR_25->size = (VAR_15 >= VAR_6 ?
            VAR_6 :
            VAR_15);
     VAR_15 -= VAR_6;
    }


    break;
   }
   VAR_21 = -VAR_2;
   goto failure;
  }
  FUNC_4(VAR_8, &VAR_13->sk_socket->flags);
  FUNC_4(VAR_9, &VAR_13->sk_socket->flags);
  VAR_21 = -VAR_0;
  if (!VAR_20)
   goto failure;
  if (FUNC_5(VAR_12))
   goto interrupted;
  VAR_20 = FUNC_11(VAR_13, VAR_20);
 }

 FUNC_6(VAR_18, VAR_13);
 return VAR_18;

interrupted:
 VAR_21 = FUNC_9(VAR_20);
failure:
 *VAR_17 = VAR_21;
 return ((void*)0);
}
