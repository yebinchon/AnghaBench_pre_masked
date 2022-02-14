
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct pf_addr {int dummy; } ;
struct TYPE_10__ {int v6; } ;
struct TYPE_7__ {TYPE_4__ mask; TYPE_4__ addr; } ;
struct TYPE_8__ {TYPE_1__ a; } ;
struct TYPE_9__ {TYPE_2__ v; } ;
struct node_host {scalar_t__ af; int ifa_flags; scalar_t__ ifindex; char* ifname; struct node_host* tail; struct node_host* next; TYPE_3__ addr; TYPE_4__ peer; TYPE_4__ bcast; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct node_host* FUNC_1 (int,int) ;
 int FUNC_2 (int,char*) ;
 struct node_host* FUNC_3 (char*,int) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (char*,struct node_host*) ;
 struct node_host* VAR_11 ;
 int FUNC_6 (TYPE_4__*,TYPE_4__*,int) ;
 int FUNC_7 (struct node_host*,int) ;
 scalar_t__ FUNC_8 (char const*,char*) ;
 char* FUNC_9 (char*) ;
 int FUNC_10 (char*,char*,int ) ;
 int FUNC_11 (TYPE_4__*,scalar_t__) ;

struct node_host *
FUNC_12(char *VAR_12, int VAR_13)
{
 struct node_host *VAR_14 = ((void*)0), *VAR_15 = ((void*)0), *VAR_16 = ((void*)0);
 int VAR_17 = 0, VAR_18 = 0;
 const char *VAR_19 = ((void*)0);

 if ((VAR_15 = FUNC_3(VAR_12, VAR_13)) != ((void*)0))
  return (VAR_15);

 if (!FUNC_10(VAR_12, "self", VAR_6))
  VAR_12 = ((void*)0);

 if (VAR_11 == ((void*)0))
  FUNC_4();

 for (VAR_14 = VAR_11; VAR_14; VAR_14 = VAR_14->next) {
  if (FUNC_5(VAR_12, VAR_14))
   continue;
  if ((VAR_13 & VAR_7) && VAR_14->af != VAR_0)
   continue;
  if ((VAR_13 & VAR_7) &&
      !(VAR_14->ifa_flags & VAR_2))
   continue;
  if ((VAR_13 & VAR_10) &&
      !(VAR_14->ifa_flags & VAR_5))
   continue;
  if ((VAR_13 & VAR_8) && VAR_14->ifindex > 0)
   continue;
  if (VAR_19 == ((void*)0) || FUNC_8(VAR_19, VAR_14->ifname))
   VAR_17 = VAR_18 = 0;
  VAR_19 = VAR_14->ifname;
  if ((VAR_13 & VAR_9) && VAR_14->af == VAR_0 && VAR_17)
   continue;
  if ((VAR_13 & VAR_9) && VAR_14->af == VAR_1 &&
      FUNC_0(&VAR_14->addr.v.a.addr.v6))
   continue;
  if ((VAR_13 & VAR_9) && VAR_14->af == VAR_1 && VAR_18)
   continue;
  if (VAR_14->af == VAR_0)
   VAR_17 = 1;
  else
   VAR_18 = 1;
  VAR_16 = FUNC_1(1, sizeof(struct node_host));
  if (VAR_16 == ((void*)0))
   FUNC_2(1, "address: calloc");
  VAR_16->af = VAR_14->af;
  if (VAR_13 & VAR_7)
   FUNC_6(&VAR_16->addr.v.a.addr, &VAR_14->bcast,
       sizeof(struct pf_addr));
  else if (VAR_13 & VAR_10)
   FUNC_6(&VAR_16->addr.v.a.addr, &VAR_14->peer,
       sizeof(struct pf_addr));
  else
   FUNC_6(&VAR_16->addr.v.a.addr, &VAR_14->addr.v.a.addr,
       sizeof(struct pf_addr));
  if (VAR_13 & VAR_8)
   FUNC_7(VAR_16, FUNC_11(&VAR_14->addr.v.a.mask, VAR_16->af));
  else {
   if (VAR_16->af == VAR_0) {
    if (VAR_14->ifa_flags & VAR_4 &&
        VAR_14->ifa_flags & VAR_3)
     FUNC_6(&VAR_16->addr.v.a.mask,
         &VAR_14->addr.v.a.mask,
         sizeof(struct pf_addr));
    else
     FUNC_7(VAR_16, 32);
   } else
    FUNC_7(VAR_16, 128);
  }
  VAR_16->ifindex = VAR_14->ifindex;
  VAR_16->ifname = FUNC_9(VAR_14->ifname);

  VAR_16->next = ((void*)0);
  VAR_16->tail = VAR_16;
  if (VAR_15 == ((void*)0))
   VAR_15 = VAR_16;
  else {
   VAR_15->tail->next = VAR_16;
   VAR_15->tail = VAR_16;
  }
 }
 return (VAR_15);
}
