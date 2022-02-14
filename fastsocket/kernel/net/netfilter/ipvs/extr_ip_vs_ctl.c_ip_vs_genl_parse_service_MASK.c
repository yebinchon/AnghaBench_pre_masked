
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct ip_vs_flags {int mask; int flags; } ;
struct ip_vs_service_user_kern {int flags; void* netmask; void* timeout; int * pe_name; int * sched_name; void* port; struct ip_vs_flags addr; void* protocol; void* af; void* fwmark; } ;
struct ip_vs_service {int flags; } ;
typedef int flags ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 struct ip_vs_service* FUNC_0 (void*,void*,struct ip_vs_flags*,void*) ;
 struct ip_vs_service* FUNC_1 (void*,void*) ;
 int FUNC_2 (struct ip_vs_service*) ;
 int VAR_16 ;
 int FUNC_3 (struct ip_vs_service_user_kern*,int ,int) ;
 int * FUNC_4 (struct nlattr*) ;
 void* FUNC_5 (struct nlattr*) ;
 void* FUNC_6 (struct nlattr*) ;
 int FUNC_7 (struct ip_vs_flags*,struct nlattr*,int) ;
 scalar_t__ FUNC_8 (struct nlattr**,int ,struct nlattr*,int ) ;

__attribute__((used)) static int FUNC_9(struct ip_vs_service_user_kern *VAR_17,
        struct nlattr *VAR_18, int VAR_19)
{
 struct nlattr *VAR_20[VAR_9 + 1];
 struct nlattr *VAR_21, *VAR_22, *VAR_23, *VAR_24, *VAR_25;


 if (VAR_18 == ((void*)0) ||
     FUNC_8(VAR_20, VAR_9, VAR_18, VAR_16))
  return -VAR_3;

 VAR_21 = VAR_20[VAR_6];
 VAR_24 = VAR_20[VAR_13];
 VAR_25 = VAR_20[VAR_5];
 VAR_22 = VAR_20[VAR_12];
 VAR_23 = VAR_20[VAR_8];

 if (!(VAR_21 && (VAR_23 || (VAR_22 && VAR_24 && VAR_25))))
  return -VAR_3;

 FUNC_3(VAR_17, 0, sizeof(*VAR_17));

 VAR_17->af = FUNC_5(VAR_21);



 if (VAR_17->af != VAR_0)

  return -VAR_2;

 if (VAR_23) {
  VAR_17->protocol = VAR_4;
  VAR_17->fwmark = FUNC_6(VAR_23);
 } else {
  VAR_17->protocol = FUNC_5(VAR_24);
  FUNC_7(&VAR_17->addr, VAR_25, sizeof(VAR_17->addr));
  VAR_17->port = FUNC_5(VAR_22);
  VAR_17->fwmark = 0;
 }


 if (VAR_19) {
  struct nlattr *VAR_26, *VAR_27, *VAR_28, *VAR_29,
         *VAR_30;
  struct ip_vs_flags VAR_31;
  struct ip_vs_service *VAR_32;

  VAR_26 = VAR_20[VAR_14];
  VAR_28 = VAR_20[VAR_11];
  VAR_27 = VAR_20[VAR_7];
  VAR_29 = VAR_20[VAR_15];
  VAR_30 = VAR_20[VAR_10];

  if (!(VAR_26 && VAR_27 && VAR_29 && VAR_30))
   return -VAR_3;

  FUNC_7(&VAR_31, VAR_27, sizeof(VAR_31));


  if (VAR_17->fwmark)
   VAR_32 = FUNC_1(VAR_17->af, VAR_17->fwmark);
  else
   VAR_32 = FUNC_0(VAR_17->af, VAR_17->protocol,
        &VAR_17->addr, VAR_17->port);
  if (VAR_32) {
   VAR_17->flags = VAR_32->flags;
   FUNC_2(VAR_32);
  } else
   VAR_17->flags = 0;


  VAR_17->flags = (VAR_17->flags & ~VAR_31.mask) |
         (VAR_31.flags & VAR_31.mask);
  VAR_17->sched_name = FUNC_4(VAR_26);
  VAR_17->pe_name = VAR_28 ? FUNC_4(VAR_28) : ((void*)0);
  VAR_17->timeout = FUNC_6(VAR_29);
  VAR_17->netmask = FUNC_6(VAR_30);
 }

 return 0;
}
