
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
struct sockaddr_dl {int dummy; } ;
struct mxge_add_maddr_ctx {scalar_t__ error; int sc; } ;
struct TYPE_3__ {void* data1; void* data0; } ;
typedef TYPE_1__ mxge_cmd_t ;


 scalar_t__ FUNC_0 (struct sockaddr_dl*) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__,void**,int) ;
 void* FUNC_2 (void*) ;
 scalar_t__ FUNC_3 (int ,int ,TYPE_1__*) ;

__attribute__((used)) static u_int
FUNC_4(void *VAR_1, struct sockaddr_dl *VAR_2, u_int VAR_3)
{
 struct mxge_add_maddr_ctx *VAR_4 = VAR_1;
 mxge_cmd_t VAR_5;

 if (VAR_4->error != 0)
  return (0);
 FUNC_1(FUNC_0(VAR_2), &VAR_5.data0, 4);
 FUNC_1(FUNC_0(VAR_2) + 4, &VAR_5.data1, 2);
 VAR_5.data0 = FUNC_2(VAR_5.data0);
 VAR_5.data1 = FUNC_2(VAR_5.data1);

 VAR_4->error = FUNC_3(VAR_4->sc, VAR_0, &VAR_5);

 return (1);
}
