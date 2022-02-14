
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct inet6_ifaddr {int flags; unsigned long tstamp; unsigned long valid_lft; unsigned long prefered_lft; int lock; scalar_t__ regen_count; struct inet6_ifaddr* ifpub; TYPE_3__* idev; struct inet6_ifaddr* lst_next; } ;
struct TYPE_10__ {unsigned long expires; } ;
struct TYPE_7__ {unsigned long regen_max_retry; unsigned long dad_transmits; } ;
struct TYPE_9__ {TYPE_2__* nd_parms; TYPE_1__ cnf; } ;
struct TYPE_8__ {unsigned long retrans_time; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned long VAR_7 ;
 int FUNC_0 (TYPE_4__*) ;
 TYPE_4__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (struct inet6_ifaddr*) ;
 int FUNC_3 (struct inet6_ifaddr*) ;
 struct inet6_ifaddr** VAR_11 ;
 int FUNC_4 (struct inet6_ifaddr*,struct inet6_ifaddr*) ;
 int FUNC_5 (struct inet6_ifaddr*) ;
 int FUNC_6 (int ,struct inet6_ifaddr*) ;
 unsigned long VAR_12 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_14(unsigned long VAR_13)
{
 struct inet6_ifaddr *VAR_14;
 unsigned long VAR_15, VAR_16;
 int VAR_17;

 FUNC_10(&VAR_10);
 VAR_15 = VAR_12;
 VAR_16 = VAR_15 + VAR_0;

 FUNC_1(&VAR_8);

 for (VAR_17=0; VAR_17 < VAR_6; VAR_17++) {

restart:
  FUNC_7(&VAR_9);
  for (VAR_14=VAR_11[VAR_17]; VAR_14; VAR_14=VAR_14->lst_next) {
   unsigned long VAR_18;




   if (VAR_14->flags & VAR_3)
    continue;

   FUNC_9(&VAR_14->lock);
   VAR_18 = (VAR_15 - VAR_14->tstamp) / VAR_1;







   if (VAR_14->valid_lft != VAR_7 &&
       VAR_18 >= VAR_14->valid_lft) {
    FUNC_11(&VAR_14->lock);
    FUNC_2(VAR_14);
    FUNC_8(&VAR_9);
    FUNC_5(VAR_14);
    goto restart;
   } else if (VAR_14->prefered_lft == VAR_7) {
    FUNC_11(&VAR_14->lock);
    continue;
   } else if (VAR_18 >= VAR_14->prefered_lft) {

    int VAR_19 = 0;

    if (!(VAR_14->flags&VAR_2)) {
     VAR_19 = 1;
     VAR_14->flags |= VAR_2;
    }

    if (FUNC_13(VAR_14->tstamp + VAR_14->valid_lft * VAR_1, VAR_16))
     VAR_16 = VAR_14->tstamp + VAR_14->valid_lft * VAR_1;

    FUNC_11(&VAR_14->lock);

    if (VAR_19) {
     FUNC_2(VAR_14);
     FUNC_8(&VAR_9);

     FUNC_6(0, VAR_14);
     FUNC_3(VAR_14);
     goto restart;
    }
   } else {

    if (FUNC_13(VAR_14->tstamp + VAR_14->prefered_lft * VAR_1, VAR_16))
     VAR_16 = VAR_14->tstamp + VAR_14->prefered_lft * VAR_1;
    FUNC_11(&VAR_14->lock);
   }
  }
  FUNC_8(&VAR_9);
 }

 VAR_8.expires = FUNC_13(VAR_16, VAR_12 + VAR_1) ? VAR_12 + VAR_1 : VAR_16;
 FUNC_0(&VAR_8);
 FUNC_12(&VAR_10);
}
