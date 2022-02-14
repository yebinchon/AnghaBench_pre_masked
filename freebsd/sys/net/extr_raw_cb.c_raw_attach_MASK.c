
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct socket {TYPE_2__* so_proto; } ;
struct TYPE_6__ {int sp_protocol; int sp_family; } ;
struct rawcb {TYPE_3__ rcb_proto; struct socket* rcb_socket; } ;
struct TYPE_5__ {TYPE_1__* pr_domain; } ;
struct TYPE_4__ {int dom_family; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,struct rawcb*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (struct socket*,int ,int ) ;
 struct rawcb* FUNC_5 (struct socket*) ;

int
FUNC_6(struct socket *VAR_5, int VAR_6)
{
 struct rawcb *VAR_7 = FUNC_5(VAR_5);
 int VAR_8;







 FUNC_0(VAR_7 != ((void*)0), ("raw_attach: rp == NULL"));

 VAR_8 = FUNC_4(VAR_5, VAR_3, VAR_2);
 if (VAR_8)
  return (VAR_8);
 VAR_7->rcb_socket = VAR_5;
 VAR_7->rcb_proto.sp_family = VAR_5->so_proto->pr_domain->dom_family;
 VAR_7->rcb_proto.sp_protocol = VAR_6;
 FUNC_2(&VAR_4);
 FUNC_1(&VAR_0, VAR_7, VAR_1);
 FUNC_3(&VAR_4);
 return (0);
}
