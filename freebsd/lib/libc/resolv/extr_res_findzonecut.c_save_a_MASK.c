
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int addrs; int flags; } ;
typedef TYPE_3__ rr_ns ;
struct TYPE_11__ {int sin6_len; void* sin6_port; int sin6_addr; int sin6_family; } ;
struct TYPE_10__ {int sin_len; void* sin_port; int sin_addr; int sin_family; } ;
struct TYPE_14__ {TYPE_2__ sin6; TYPE_1__ sin; } ;
struct TYPE_13__ {TYPE_6__ addr; } ;
typedef TYPE_4__ rr_a ;
typedef int res_state ;
typedef int ns_sect ;
typedef int ns_rr ;
typedef int ns_msg ;
typedef scalar_t__ ns_class ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_4__*,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_4__*,int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 () ;
 void* FUNC_4 (int ) ;
 int VAR_8 ;
 TYPE_4__* FUNC_5 (int) ;
 int FUNC_6 (int *,int ,int) ;
 int FUNC_7 (TYPE_6__*,int ,int) ;
 int FUNC_8 (int ,int ) ;
 int VAR_9 ;
 scalar_t__ FUNC_9 (int *,int ,int,int *) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,char const*) ;


 int FUNC_16 (int ,int ) ;

__attribute__((used)) static int
FUNC_17(res_state VAR_10, ns_msg *VAR_11, ns_sect VAR_12,
       const char *VAR_13, ns_class VAR_14, int VAR_15,
       rr_ns *VAR_16)
{
 int VAR_17;

 for (VAR_17 = 0; VAR_17 < FUNC_8(*VAR_11, VAR_12); VAR_17++) {
  ns_rr VAR_18;
  rr_a *VAR_19;

  if (FUNC_9(VAR_11, VAR_12, VAR_17, &VAR_18) < 0) {
   FUNC_1(("save_a: ns_parserr(%s, %d) failed",
     FUNC_16(VAR_12, VAR_9), VAR_17));
   return (-1);
  }
  if ((FUNC_14(VAR_18) != 129 &&
       FUNC_14(VAR_18) != 128) ||
      FUNC_10(VAR_18) != VAR_14 ||
      FUNC_15(FUNC_11(VAR_18), VAR_13) != 1 ||
      FUNC_13(VAR_18) != VAR_3)
   continue;
  if ((VAR_15 & VAR_5) != 0 && FUNC_14(VAR_18) != 128)
   continue;
  if ((VAR_15 & VAR_4) != 0 && FUNC_14(VAR_18) != 129)
   continue;
  VAR_19 = FUNC_5(sizeof *VAR_19);
  if (VAR_19 == ((void*)0)) {
   FUNC_1(("save_a: malloc failed"));
   return (-1);
  }
  FUNC_2(VAR_19, VAR_8);
  FUNC_7(&VAR_19->addr, 0, sizeof(VAR_19->addr));
  switch (FUNC_14(VAR_18)) {
  case 129:
   VAR_19->addr.sin.sin_family = VAR_0;



   FUNC_6(&VAR_19->addr.sin.sin_addr, FUNC_12(VAR_18),
          VAR_3);
   VAR_19->addr.sin.sin_port = FUNC_4(VAR_2);
   VAR_16->flags |= VAR_6;
   break;
  case 128:
   VAR_19->addr.sin6.sin6_family = VAR_1;



   FUNC_6(&VAR_19->addr.sin6.sin6_addr, FUNC_12(VAR_18), 16);
   VAR_19->addr.sin6.sin6_port = FUNC_4(VAR_2);
   VAR_16->flags |= VAR_7;
   break;
  default:
   FUNC_3();
  }
  FUNC_0(VAR_16->addrs, VAR_19, VAR_8);
 }
 return (0);
}
