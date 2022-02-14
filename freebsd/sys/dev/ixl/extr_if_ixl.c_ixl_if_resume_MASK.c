
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int if_flags; } ;
typedef int if_ctx_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 struct ifnet* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(if_ctx_t VAR_1)
{
 struct ifnet *VAR_2 = FUNC_1(VAR_1);

 FUNC_0("ixl_if_resume: begin");




 if (VAR_2->if_flags & VAR_0)
  FUNC_2(VAR_1);

 return (0);
}
