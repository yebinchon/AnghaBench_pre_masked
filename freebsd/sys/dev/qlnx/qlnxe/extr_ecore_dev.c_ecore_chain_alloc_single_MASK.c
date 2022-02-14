
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_dev {int dummy; } ;
struct ecore_chain {int dummy; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
typedef int dma_addr_t ;


 int FUNC_0 (struct ecore_dev*,int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_1 (struct ecore_dev*,int *,int ) ;
 void* VAR_3 ;
 int FUNC_2 (struct ecore_chain*,void*,int ) ;
 int FUNC_3 (struct ecore_chain*) ;

__attribute__((used)) static enum _ecore_status_t
FUNC_4(struct ecore_dev *VAR_4, struct ecore_chain *VAR_5)
{
 dma_addr_t VAR_6 = 0;
 void *VAR_7 = VAR_3;

 VAR_7 = FUNC_1(VAR_4, &VAR_6, VAR_0);
 if (!VAR_7) {
  FUNC_0(VAR_4, 0, "Failed to allocate chain memory\n");
  return VAR_1;
 }

 FUNC_2(VAR_5, VAR_7, VAR_6);
 FUNC_3(VAR_5);

 return VAR_2;
}
