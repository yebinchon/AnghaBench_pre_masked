
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct socket {int dummy; } ;
typedef TYPE_1__* priv_p ;
typedef void* node_p ;
struct TYPE_3__ {int fn_sent; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (void* const) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (void* const,int *,int *,struct socket*,int ,int) ;

__attribute__((used)) static int
FUNC_4(struct socket *VAR_5, void *VAR_6, int VAR_7)
{
 const node_p VAR_8 = VAR_6;
 const priv_p VAR_9 = FUNC_0(VAR_8);
 int VAR_10 = ((VAR_7 & VAR_0) ? VAR_2 : 0) | VAR_1;







 if (FUNC_1(&VAR_9->fn_sent, 0, 1) &&
     FUNC_3(VAR_8, ((void*)0), &VAR_4, VAR_5, 0, VAR_10)) {
  FUNC_2(&VAR_9->fn_sent, 0);
 }
 return (VAR_3);
}
