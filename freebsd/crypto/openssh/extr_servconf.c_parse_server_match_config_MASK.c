
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection_info {int dummy; } ;
typedef int ServerOptions ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int ,struct connection_info*) ;

void
FUNC_3(ServerOptions *VAR_1,
   struct connection_info *VAR_2)
{
 ServerOptions VAR_3;

 FUNC_1(&VAR_3);
 FUNC_2(&VAR_3, "reprocess config", VAR_0, VAR_2);
 FUNC_0(VAR_1, &VAR_3, 0);
}
