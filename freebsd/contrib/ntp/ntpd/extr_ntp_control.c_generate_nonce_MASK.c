
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32 ;
struct TYPE_2__ {int l_ui; int l_uf; } ;
struct recvbuf {TYPE_1__ recv_time; int recv_srcadr; } ;


 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (char*,size_t,char*,int,int,int ) ;

__attribute__((used)) static void FUNC_2(
 struct recvbuf * VAR_0,
 char * VAR_1,
 size_t VAR_2
 )
{
 u_int32 VAR_3;

 VAR_3 = FUNC_0(&VAR_0->recv_srcadr,
          VAR_0->recv_time.l_ui,
          VAR_0->recv_time.l_uf);
 FUNC_1(VAR_1, VAR_2, "%08x%08x%08x",
   VAR_0->recv_time.l_ui, VAR_0->recv_time.l_uf, VAR_3);
}
