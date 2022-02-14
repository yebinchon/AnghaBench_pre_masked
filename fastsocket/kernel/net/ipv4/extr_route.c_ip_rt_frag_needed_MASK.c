
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {int* metrics; int dev; int rt_next; } ;
struct TYPE_10__ {TYPE_5__ dst; } ;
struct TYPE_9__ {scalar_t__ fl4_dst; scalar_t__ fl4_src; int oif; scalar_t__ iif; } ;
struct rtable {scalar_t__ rt_dst; scalar_t__ rt_src; TYPE_2__ u; TYPE_1__ fl; } ;
struct net_device {int ifindex; } ;
struct net {int dummy; } ;
struct iphdr {scalar_t__ saddr; scalar_t__ daddr; int ihl; int tot_len; } ;
typedef scalar_t__ __be32 ;
struct TYPE_12__ {scalar_t__ no_pmtu_disc; } ;
struct TYPE_11__ {int chain; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_5__*) ;
 scalar_t__ FUNC_2 (TYPE_5__*,int) ;
 unsigned short FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_5__*,int ) ;
 unsigned short FUNC_5 (unsigned short) ;
 unsigned short VAR_2 ;
 int VAR_3 ;
 TYPE_4__ VAR_4 ;
 int FUNC_6 (int ,struct net*) ;
 unsigned short FUNC_7 (int ) ;
 struct rtable* FUNC_8 (int ) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (struct net*) ;
 unsigned int FUNC_12 (scalar_t__,scalar_t__,int,int ) ;
 TYPE_3__* VAR_5 ;
 scalar_t__ FUNC_13 (struct rtable*) ;

unsigned short FUNC_14(struct net *VAR_6, struct iphdr *VAR_7,
     unsigned short VAR_8,
     struct net_device *VAR_9)
{
 int VAR_10, VAR_11;
 unsigned short VAR_12 = FUNC_7(VAR_7->tot_len);
 struct rtable *VAR_13;
 int VAR_14[2] = { VAR_9->ifindex, 0 };
 __be32 VAR_15[2] = { VAR_7->saddr, 0, };
 __be32 VAR_16 = VAR_7->daddr;
 unsigned short VAR_17 = 0;

 if (VAR_4.no_pmtu_disc)
  return 0;

 for (VAR_11 = 0; VAR_11 < 2; VAR_11++) {
  for (VAR_10 = 0; VAR_10 < 2; VAR_10++) {
   unsigned VAR_18 = FUNC_12(VAR_16, VAR_15[VAR_10], VAR_14[VAR_11],
      FUNC_11(VAR_6));

   FUNC_9();
   for (VAR_13 = FUNC_8(VAR_5[VAR_18].chain); VAR_13;
        VAR_13 = FUNC_8(VAR_13->u.dst.rt_next)) {
    unsigned short VAR_19 = VAR_8;

    if (VAR_13->fl.fl4_dst != VAR_16 ||
        VAR_13->fl.fl4_src != VAR_15[VAR_10] ||
        VAR_13->rt_dst != VAR_16 ||
        VAR_13->rt_src != VAR_7->saddr ||
        VAR_13->fl.oif != VAR_14[VAR_11] ||
        VAR_13->fl.iif != 0 ||
        FUNC_2(&VAR_13->u.dst, VAR_1) ||
        !FUNC_6(FUNC_0(VAR_13->u.dst.dev), VAR_6) ||
        FUNC_13(VAR_13))
     continue;

    if (VAR_8 < 68 || VAR_8 >= VAR_12) {


     if (VAR_19 == 0 &&
         VAR_12 >= FUNC_3(&VAR_13->u.dst) &&
         VAR_12 >= 68 + (VAR_7->ihl << 2))
      VAR_12 -= VAR_7->ihl << 2;

     VAR_19 = FUNC_5(VAR_12);
    }
    if (VAR_19 <= FUNC_3(&VAR_13->u.dst)) {
     if (VAR_19 < FUNC_3(&VAR_13->u.dst)) {
      FUNC_1(&VAR_13->u.dst);
      if (VAR_19 < VAR_2) {
       VAR_19 = VAR_2;
       VAR_13->u.dst.metrics[VAR_0-1] |=
        (1 << VAR_1);
      }
      VAR_13->u.dst.metrics[VAR_1-1] = VAR_19;
      FUNC_4(&VAR_13->u.dst,
       VAR_3);
     }
     VAR_17 = VAR_19;
    }
   }
   FUNC_10();
  }
 }
 return VAR_17 ? : VAR_8;
}
