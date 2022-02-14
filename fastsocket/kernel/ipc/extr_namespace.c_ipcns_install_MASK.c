
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nsproxy {int ipc_ns; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct nsproxy *VAR_1, void *VAR_2)
{

 FUNC_0(VAR_0);
 FUNC_2(VAR_1->ipc_ns);
 VAR_1->ipc_ns = FUNC_1(VAR_2);
 return 0;
}
