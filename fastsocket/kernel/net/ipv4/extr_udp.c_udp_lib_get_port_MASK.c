
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct udp_table {struct udp_hslot* hash; } ;
struct udp_hslot {int lock; int head; } ;
struct sock {unsigned short sk_hash; TYPE_2__* sk_prot; } ;
struct net {int dummy; } ;
struct TYPE_6__ {unsigned short num; } ;
struct TYPE_4__ {struct udp_table* udp_table; } ;
struct TYPE_5__ {TYPE_1__ h; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int*,int*) ;
 int FUNC_3 (unsigned short) ;
 TYPE_3__* FUNC_4 (struct sock*) ;
 unsigned int FUNC_5 () ;
 int FUNC_6 (struct sock*,int *) ;
 scalar_t__ FUNC_7 (struct sock*) ;
 struct net* FUNC_8 (struct sock*) ;
 int FUNC_9 (struct net*,TYPE_2__*,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (unsigned short,int *) ;
 size_t FUNC_13 (struct net*,unsigned short) ;
 scalar_t__ FUNC_14 (struct net*,unsigned short,struct udp_hslot*,int *,struct sock*,int (*) (struct sock const*,struct sock const*)) ;

int FUNC_15(struct sock *VAR_3, unsigned short VAR_4,
         int (*VAR_5)(const struct sock *VAR_6,
      const struct sock *VAR_7))
{
 struct udp_hslot *VAR_8;
 struct udp_table *VAR_9 = VAR_3->sk_prot->h.udp_table;
 int VAR_10 = 1;
 struct net *VAR_11 = FUNC_8(VAR_3);

 if (!VAR_4) {
  int VAR_12, VAR_13, VAR_14;
  unsigned VAR_15;
  unsigned short VAR_16, VAR_17;
  FUNC_0(VAR_2, VAR_0);

  FUNC_2(&VAR_12, &VAR_13);
  VAR_14 = (VAR_13 - VAR_12) + 1;

  VAR_15 = FUNC_5();
  VAR_16 = (((u64)VAR_15 * VAR_14) >> 32) + VAR_12;



  VAR_15 = (VAR_15 | 1) * VAR_1;
  for (VAR_17 = VAR_16 + VAR_1; VAR_16 != VAR_17; VAR_16++) {
   VAR_8 = &VAR_9->hash[FUNC_13(VAR_11, VAR_16)];
   FUNC_1(VAR_2, VAR_0);
   FUNC_10(&VAR_8->lock);
   FUNC_14(VAR_11, VAR_4, VAR_8, VAR_2, VAR_3,
         VAR_5);

   VAR_4 = VAR_16;





   do {
    if (VAR_12 <= VAR_4 && VAR_4 <= VAR_13 &&
        !FUNC_12(VAR_4 / VAR_1, VAR_2) &&
        !FUNC_3(VAR_4))
     goto found;
    VAR_4 += VAR_15;
   } while (VAR_4 != VAR_16);
   FUNC_11(&VAR_8->lock);
  }
  goto fail;
 } else {
  VAR_8 = &VAR_9->hash[FUNC_13(VAR_11, VAR_4)];
  FUNC_10(&VAR_8->lock);
  if (FUNC_14(VAR_11, VAR_4, VAR_8, ((void*)0), VAR_3, VAR_5))
   goto fail_unlock;
 }
found:
 FUNC_4(VAR_3)->num = VAR_4;
 VAR_3->sk_hash = VAR_4;
 if (FUNC_7(VAR_3)) {
  FUNC_6(VAR_3, &VAR_8->head);
  FUNC_9(FUNC_8(VAR_3), VAR_3->sk_prot, 1);
 }
 VAR_10 = 0;
fail_unlock:
 FUNC_11(&VAR_8->lock);
fail:
 return VAR_10;
}
