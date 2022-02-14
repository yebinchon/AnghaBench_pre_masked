
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef void* u_int32 ;
typedef scalar_t__ u_int ;
struct recvbuf {int recv_srcadr; } ;
struct TYPE_5__ {int l_ui; void* l_uf; } ;
typedef TYPE_1__ l_fp ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 scalar_t__ FUNC_1 (int *,int,void*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char const*,char*,scalar_t__*,scalar_t__*,scalar_t__*) ;

__attribute__((used)) static int FUNC_4(
 const char * VAR_1,
 struct recvbuf * VAR_2
 )
{
 u_int VAR_3;
 u_int VAR_4;
 l_fp VAR_5;
 l_fp VAR_6;
 u_int VAR_7;
 u_int VAR_8;

 if (3 != FUNC_3(VAR_1, "%08x%08x%08x", &VAR_3, &VAR_4, &VAR_7))
  return VAR_0;

 VAR_5.l_ui = (u_int32)VAR_3;
 VAR_5.l_uf = (u_int32)VAR_4;
 VAR_8 = FUNC_1(&VAR_2->recv_srcadr, VAR_5.l_ui, VAR_5.l_uf);
 FUNC_2(&VAR_6);
 FUNC_0(&VAR_6, &VAR_5);

 return (VAR_7 == VAR_8 && VAR_6.l_ui < 16);
}
