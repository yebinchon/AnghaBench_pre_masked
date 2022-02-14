
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct socket {int dummy; } ;
struct TYPE_4__ {int vci; int vpi; int itf; } ;
struct sockaddr_atmpvc {TYPE_2__ sap_addr; int sap_family; } ;
struct sockaddr {int dummy; } ;
struct atm_vcc {int vci; int vpi; TYPE_1__* dev; int flags; } ;
struct TYPE_3__ {int number; } ;


 int VAR_0 ;
 struct atm_vcc* FUNC_0 (struct socket*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct sockaddr_atmpvc*,int ,int) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3(struct socket *VAR_3,struct sockaddr *VAR_4,
    int *VAR_5,int VAR_6)
{
 struct sockaddr_atmpvc *VAR_7;
 struct atm_vcc *VAR_8 = FUNC_0(VAR_3);

 if (!VAR_8->dev || !FUNC_2(VAR_1,&VAR_8->flags)) return -VAR_2;
 *VAR_5 = sizeof(struct sockaddr_atmpvc);
 VAR_7 = (struct sockaddr_atmpvc *) VAR_4;
 FUNC_1(VAR_7, 0, sizeof(*VAR_7));
 VAR_7->sap_family = VAR_0;
 VAR_7->sap_addr.itf = VAR_8->dev->number;
 VAR_7->sap_addr.vpi = VAR_8->vpi;
 VAR_7->sap_addr.vci = VAR_8->vci;
 return 0;
}
