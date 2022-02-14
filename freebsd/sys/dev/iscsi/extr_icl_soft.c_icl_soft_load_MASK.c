
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct icl_pdu {int dummy; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int,int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (char*,int,int *,int *,int *,int *,int ,int ) ;

__attribute__((used)) static int
FUNC_4(void)
{
 int VAR_5;

 VAR_2 = FUNC_3("icl_pdu",
     sizeof(struct icl_pdu), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
     VAR_0, 0);
 FUNC_2(&VAR_1, 0);






 VAR_5 = FUNC_1("none", 0, 0,
     VAR_3, VAR_4);
 FUNC_0(VAR_5 == 0, ("failed to register"));
 return (VAR_5);
}
