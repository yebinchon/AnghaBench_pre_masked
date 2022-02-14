
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_hwfn {int p_dev; } ;


 int FUNC_0 (struct ecore_hwfn*,int,char*) ;
 int VAR_0 ;
 struct ecore_hwfn* FUNC_1 (int ) ;
 int FUNC_2 (struct ecore_hwfn*,int ) ;

__attribute__((used)) static void FUNC_3(struct ecore_hwfn *VAR_1)
{

 if (VAR_1 != FUNC_1(VAR_1->p_dev))
  return;

 FUNC_0(VAR_1, 0,
    "Fan failure was detected on the network interface card and it's going to be shut down.\n");

 FUNC_2(VAR_1, VAR_0);
}
