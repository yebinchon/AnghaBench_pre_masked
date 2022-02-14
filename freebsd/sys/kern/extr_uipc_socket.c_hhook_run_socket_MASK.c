
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket_hhook_data {void* hctx; int status; int * m; struct socket* so; } ;
struct socket {int osd; int so_vnet; } ;
typedef size_t int32_t ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct socket_hhook_data*,int *) ;
 int * VAR_0 ;

__attribute__((used)) static int inline
FUNC_3(struct socket *VAR_1, void *VAR_2, int32_t VAR_3)
{
 struct socket_hhook_data VAR_4 = {
  .so = VAR_1,
  .hctx = VAR_2,
  .m = ((void*)0),
  .status = 0
 };

 FUNC_1(VAR_1->so_vnet);
 FUNC_2(VAR_0[VAR_3], &VAR_4, &VAR_1->osd);
 FUNC_0();


 return (VAR_4.status);
}
