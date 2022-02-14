
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int u_int32 ;
struct req_pkt {int u; int err_nitems; } ;
struct conf_sys_flags {int flags; } ;
typedef int sockaddr_u ;
typedef int endpt ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
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
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int,int *) ;
 int FUNC_4 (int *,int *,struct req_pkt*,int ) ;

__attribute__((used)) static void
FUNC_5(
 sockaddr_u *VAR_19,
 endpt *VAR_20,
 struct req_pkt *VAR_21,
 u_long VAR_22
 )
{
 struct conf_sys_flags *VAR_23;
 u_int32 VAR_24;

 if (FUNC_0(VAR_21->err_nitems) > 1) {
  FUNC_1(VAR_2, "setclr_flags: err_nitems > 1");
  FUNC_4(VAR_19, VAR_20, VAR_21, VAR_0);
  return;
 }

 VAR_23 = (struct conf_sys_flags *)&VAR_21->u;
 VAR_24 = FUNC_2(VAR_23->flags);

 if (VAR_24 & ~(VAR_12 | VAR_18 |
        VAR_17 | VAR_15 | VAR_16 |
        VAR_14 | VAR_11 | VAR_13)) {
  FUNC_1(VAR_2, "setclr_flags: extra flags: %#x",
   VAR_24 & ~(VAR_12 | VAR_18 |
      VAR_17 | VAR_15 |
      VAR_16 | VAR_14 |
      VAR_11 | VAR_13));
  FUNC_4(VAR_19, VAR_20, VAR_21, VAR_0);
  return;
 }

 if (VAR_24 & VAR_12)
  FUNC_3(VAR_4, VAR_22, 0., ((void*)0));
 if (VAR_24 & VAR_18)
  FUNC_3(VAR_10, VAR_22, 0., ((void*)0));
 if (VAR_24 & VAR_17)
  FUNC_3(VAR_9, VAR_22, 0., ((void*)0));
 if (VAR_24 & VAR_15)
  FUNC_3(VAR_7, VAR_22, 0., ((void*)0));
 if (VAR_24 & VAR_16)
  FUNC_3(VAR_8, VAR_22, 0., ((void*)0));
 if (VAR_24 & VAR_14)
  FUNC_3(VAR_6, VAR_22, 0., ((void*)0));
 if (VAR_24 & VAR_11)
  FUNC_3(VAR_3, VAR_22, 0., ((void*)0));
 if (VAR_24 & VAR_13)
  FUNC_3(VAR_5, VAR_22, 0., ((void*)0));
 FUNC_4(VAR_19, VAR_20, VAR_21, VAR_1);
}
