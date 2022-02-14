
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_hwfn {int p_dev; struct ecore_consq* p_consq; } ;
struct ecore_consq {int chain; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int FUNC_0 (struct ecore_hwfn*,int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,struct ecore_consq*) ;
 int VAR_7 ;
 struct ecore_consq* FUNC_2 (int ,int ,int) ;
 scalar_t__ FUNC_3 (int ,int ,int ,int ,int,int,int *,int ) ;

enum _ecore_status_t FUNC_4(struct ecore_hwfn *VAR_8)
{
 struct ecore_consq *VAR_9;


 VAR_9 = FUNC_2(VAR_8->p_dev, VAR_6, sizeof(*VAR_9));
 if (!VAR_9) {
  FUNC_0(VAR_8, 0,
     "Failed to allocate `struct ecore_consq'\n");
  return VAR_4;
 }


 if (FUNC_3(VAR_8->p_dev,
         VAR_3,
         VAR_1,
         VAR_0,
         VAR_2/0x80,
         0x80,
         &VAR_9->chain, VAR_7) != VAR_5) {
  FUNC_0(VAR_8, 0, "Failed to allocate consq chain");
  goto consq_allocate_fail;
 }

 VAR_8->p_consq = VAR_9;
 return VAR_5;

consq_allocate_fail:
 FUNC_1(VAR_8->p_dev, VAR_9);
 return VAR_4;
}
