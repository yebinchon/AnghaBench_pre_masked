
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {int dummy; } ;
struct sockaddr_ng {int sg_len; int sg_family; int sg_data; } ;
struct sockaddr {int dummy; } ;
struct ngpcb {TYPE_1__* sockdata; } ;
typedef int * node_p ;
struct TYPE_2__ {int mtx; int * node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct sockaddr_ng*,int ) ;
 struct sockaddr_ng* FUNC_4 (int,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct ngpcb* FUNC_7 (struct socket*) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int
FUNC_9(struct socket *VAR_6, struct sockaddr **VAR_7)
{
 struct ngpcb *VAR_8;
 struct sockaddr_ng *VAR_9;
 int VAR_10;
 int VAR_11 = 0;

 VAR_8 = FUNC_7(VAR_6);
 if ((VAR_8 == ((void*)0)) || (VAR_8->sockdata == ((void*)0)))

  return (VAR_1);

 VAR_10 = sizeof(struct sockaddr_ng) + VAR_5 -
     sizeof(VAR_9->sg_data);
 VAR_9 = FUNC_4(VAR_10, VAR_2, VAR_3 | VAR_4);

 FUNC_5(&VAR_8->sockdata->mtx);
 if (VAR_8->sockdata->node != ((void*)0)) {
  node_p VAR_12 = VAR_8->sockdata->node;

  if (FUNC_0(VAR_12))
   FUNC_2(FUNC_1(VAR_12), VAR_9->sg_data,
       FUNC_8(FUNC_1(VAR_12)));
  FUNC_6(&VAR_8->sockdata->mtx);

  VAR_9->sg_len = VAR_10;
  VAR_9->sg_family = VAR_0;
  *VAR_7 = (struct sockaddr *)VAR_9;
 } else {
  FUNC_6(&VAR_8->sockdata->mtx);
  FUNC_3(VAR_9, VAR_2);
  VAR_11 = VAR_1;
 }

 return (VAR_11);
}
