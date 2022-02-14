
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int isc_result_t ;
struct TYPE_3__ {scalar_t__ numIF; scalar_t__ v4IF; int * pos4; int IFData; int * buf4; } ;
typedef TYPE_1__ isc_interfaceiter_t ;
typedef int INTERFACE_INFO ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,int ,int) ;

__attribute__((used)) static isc_result_t
FUNC_2(isc_interfaceiter_t *VAR_2) {
 if (VAR_2->numIF >= VAR_2->v4IF)
  return (VAR_0);
 if (VAR_2->numIF == 0)
  VAR_2->pos4 = (INTERFACE_INFO *)(VAR_2->buf4 + (VAR_2->v4IF));

 VAR_2->pos4--;
 if (&(VAR_2->pos4) < &(VAR_2->buf4))
  return (VAR_0);

 FUNC_1(&(VAR_2->IFData), 0, sizeof(INTERFACE_INFO));
 FUNC_0(&(VAR_2->IFData), VAR_2->pos4, sizeof(INTERFACE_INFO));
 VAR_2->numIF++;

 return (VAR_1);
}
