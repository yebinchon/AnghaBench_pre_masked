
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rt_spare {scalar_t__ rts_router; scalar_t__ rts_gate; int rts_time; int rts_metric; struct interface* rts_ifp; } ;
struct rt_entry {scalar_t__ rt_router; int rt_state; struct interface* rt_ifp; } ;
struct interface {int int_state; int int_if_flags; scalar_t__ int_addr; int int_mask; int int_name; int int_transitions; int int_metric; int int_net; int int_dstaddr; } ;
typedef int naddr ;
struct TYPE_2__ {int tv_sec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct interface*) ;
 int FUNC_1 (struct interface*) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ) ;
 TYPE_1__ VAR_10 ;
 int FUNC_4 (int ,int ,int,struct rt_spare*) ;
 int FUNC_5 (struct rt_entry*,int,struct rt_spare*,int ) ;
 int FUNC_6 (struct rt_entry*) ;
 struct rt_entry* FUNC_7 (int ,int ) ;
 int FUNC_8 (char*,int ) ;

__attribute__((used)) static int
FUNC_9(struct interface *VAR_11)
{
 struct rt_entry *VAR_12;
 static struct rt_spare VAR_13;
 naddr VAR_14;




 if (VAR_11->int_state & VAR_2)
  return 0;




 if (VAR_11->int_state & VAR_6)
  FUNC_0(VAR_11);

 VAR_14 = (0 != (VAR_11->int_if_flags & (VAR_1 | VAR_0))
        ? VAR_11->int_dstaddr
        : FUNC_3(VAR_11->int_net));

 VAR_13.rts_ifp = VAR_11;
 VAR_13.rts_router = VAR_11->int_addr;
 VAR_13.rts_gate = VAR_11->int_addr;
 VAR_13.rts_metric = VAR_11->int_metric;
 VAR_13.rts_time = VAR_10.tv_sec;




 if ((VAR_11->int_state & VAR_5)
     && !(VAR_11->int_state & VAR_4)
     && !FUNC_1(VAR_11))
  return 0;





 FUNC_2(VAR_14, VAR_11->int_mask, 0, 0);
 VAR_12 = FUNC_7(VAR_14, VAR_11->int_mask);
 if (VAR_12 != ((void*)0)) {
  if ((VAR_12->rt_ifp != VAR_11
       || VAR_12->rt_router != VAR_11->int_addr)
      && (!(VAR_11->int_state & VAR_3)
   || VAR_12->rt_ifp == 0
   || (VAR_12->rt_ifp->int_state & VAR_2))) {
   FUNC_6(VAR_12);
   VAR_12 = ((void*)0);
  } else {
   FUNC_5(VAR_12, ((VAR_12->rt_state | VAR_7)
          & ~(VAR_9 | VAR_8)),
     &VAR_13, 0);
  }
 }
 if (VAR_12 == ((void*)0)) {
  if (VAR_11->int_transitions++ > 0)
   FUNC_8("re-install interface %s",
      VAR_11->int_name);

  FUNC_4(VAR_14, VAR_11->int_mask, VAR_7, &VAR_13);
 }

 return 1;
}
