
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char*,int,int *,int *,int *,int *,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static void
FUNC_4(void *VAR_7)
{

 VAR_5 = FUNC_1("socket", sizeof(struct socket), ((void*)0), ((void*)0),
     ((void*)0), ((void*)0), VAR_1, VAR_2);
 VAR_3 = FUNC_2(VAR_5, VAR_3);
 FUNC_3(VAR_5, "kern.ipc.maxsockets limit reached");
 FUNC_0(VAR_4, VAR_6, ((void*)0),
     VAR_0);
}
