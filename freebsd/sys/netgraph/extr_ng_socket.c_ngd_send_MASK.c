
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct thread {int dummy; } ;
struct socket {int dummy; } ;
struct sockaddr_ng {int sg_len; char* sg_data; } ;
struct sockaddr {int dummy; } ;
struct ngpcb {TYPE_1__* sockdata; } ;
struct mbuf {int dummy; } ;
typedef int * hook_p ;
struct TYPE_5__ {int nd_hooks; } ;
struct TYPE_4__ {TYPE_2__* node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int *) ;
 int VAR_4 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int,int *,struct mbuf*,int ) ;
 int VAR_5 ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (struct mbuf*) ;
 int * FUNC_5 (TYPE_2__*,char*) ;
 struct ngpcb* FUNC_6 (struct socket*) ;

__attribute__((used)) static int
FUNC_7(struct socket *VAR_6, int VAR_7, struct mbuf *VAR_8, struct sockaddr *VAR_9,
  struct mbuf *VAR_10, struct thread *VAR_11)
{
 struct ngpcb *const VAR_12 = FUNC_6(VAR_6);
 struct sockaddr_ng *const VAR_13 = (struct sockaddr_ng *) VAR_9;
 int VAR_14, VAR_15;
 hook_p VAR_16 = ((void*)0);
 char VAR_17[VAR_4];

 if ((VAR_12 == ((void*)0)) || (VAR_10 != ((void*)0))) {
  VAR_15 = VAR_2;
  goto release;
 }
 if (VAR_12->sockdata == ((void*)0)) {
  VAR_15 = VAR_3;
  goto release;
 }

 if (VAR_13 == ((void*)0))
  VAR_14 = 0;
 else
  VAR_14 = VAR_13->sg_len - 2;





 if ((VAR_13 == ((void*)0)) || (VAR_14 <= 0) || (*VAR_13->sg_data == '\0')) {
  if (FUNC_1(VAR_12->sockdata->node) != 1) {
   VAR_15 = VAR_0;
   goto release;
  }




  VAR_16 = FUNC_0(&VAR_12->sockdata->node->nd_hooks);
 } else {
  if (VAR_14 >= VAR_4) {
   VAR_15 = VAR_2;
   goto release;
  }





  FUNC_3(VAR_13->sg_data, VAR_17, VAR_14);
  VAR_17[VAR_14] = '\0';


  VAR_16 = FUNC_5(VAR_12->sockdata->node, VAR_17);
  if (VAR_16 == ((void*)0)) {
   VAR_15 = VAR_1;
   goto release;
  }
 }


 FUNC_2(VAR_15, VAR_16, VAR_8, VAR_5);

release:
 if (VAR_10 != ((void*)0))
  FUNC_4(VAR_10);
 if (VAR_8 != ((void*)0))
  FUNC_4(VAR_8);
 return (VAR_15);
}
