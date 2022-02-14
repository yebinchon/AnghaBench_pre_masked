
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_hwfn {int sp_dpc; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ecore_hwfn*) ;

__attribute__((used)) static enum _ecore_status_t FUNC_1(struct ecore_hwfn *VAR_2)
{
 VAR_2->sp_dpc = FUNC_0(VAR_2);
 if (!VAR_2->sp_dpc)
  return VAR_0;

 return VAR_1;
}
