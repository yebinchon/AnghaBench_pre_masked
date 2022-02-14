
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tac_author_request {int authen_meth; int authen_type; int service; int priv_lvl; } ;
struct TYPE_3__ {struct tac_author_request author_request; } ;
struct TYPE_4__ {TYPE_1__ u; } ;
struct tac_handle {TYPE_2__ request; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tac_handle*,int ,int,int) ;

int
FUNC_1(struct tac_handle *VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
 struct tac_author_request *VAR_6;

 FUNC_0(VAR_2, VAR_0, VAR_3, VAR_4);

 VAR_6 = &VAR_2->request.u.author_request;
 VAR_6->authen_meth = VAR_3;
 VAR_6->priv_lvl = VAR_1;
 VAR_6->authen_type = VAR_4;
 VAR_6->service = VAR_5;

 return 0;
}
