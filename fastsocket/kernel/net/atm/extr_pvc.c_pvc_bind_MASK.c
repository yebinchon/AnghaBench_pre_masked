
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct TYPE_2__ {scalar_t__ vpi; scalar_t__ vci; int itf; } ;
struct sockaddr_atmpvc {scalar_t__ sap_family; TYPE_1__ sap_addr; } ;
struct sockaddr {int dummy; } ;
struct sock {int dummy; } ;
struct atm_vcc {scalar_t__ vpi; scalar_t__ vci; int flags; } ;


 scalar_t__ VAR_0 ;
 struct atm_vcc* FUNC_0 (struct socket*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 int FUNC_4 (struct socket*,int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct socket *VAR_8,struct sockaddr *VAR_9,
    int VAR_10)
{
 struct sock *VAR_11 = VAR_8->sk;
 struct sockaddr_atmpvc *VAR_12;
 struct atm_vcc *VAR_13;
 int VAR_14;

 if (VAR_10 != sizeof(struct sockaddr_atmpvc)) return -VAR_7;
 VAR_12 = (struct sockaddr_atmpvc *) VAR_9;
 if (VAR_12->sap_family != VAR_0) return -VAR_5;
 FUNC_1(VAR_11);
 VAR_13 = FUNC_0(VAR_8);
 if (!FUNC_3(VAR_2, &VAR_13->flags)) {
  VAR_14 = -VAR_6;
  goto out;
 }
 if (FUNC_3(VAR_3,&VAR_13->flags)) {
  if (VAR_13->vpi != VAR_4) VAR_12->sap_addr.vpi = VAR_13->vpi;
  if (VAR_13->vci != VAR_1) VAR_12->sap_addr.vci = VAR_13->vci;
 }
 VAR_14 = FUNC_4(VAR_8, VAR_12->sap_addr.itf, VAR_12->sap_addr.vpi,
       VAR_12->sap_addr.vci);
out:
 FUNC_2(VAR_11);
 return VAR_14;
}
