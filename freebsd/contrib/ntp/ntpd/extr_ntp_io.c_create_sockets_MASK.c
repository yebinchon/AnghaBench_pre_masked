
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *,int *) ;

__attribute__((used)) static int
FUNC_5(
 u_short VAR_3
 )
{




 VAR_1 = 0;
 FUNC_1(&VAR_0);


 FUNC_0(2, ("create_sockets(%d)\n", VAR_3));

 FUNC_2(VAR_3);

 FUNC_4(VAR_3, ((void*)0), ((void*)0));





 FUNC_3(0);

 FUNC_0(2, ("create_sockets: Total interfaces = %d\n", VAR_2));

 return VAR_2;
}
