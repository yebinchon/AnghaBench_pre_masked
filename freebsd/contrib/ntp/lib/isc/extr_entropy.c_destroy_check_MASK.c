
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int type; } ;
typedef TYPE_1__ isc_entropysource_t ;
struct TYPE_8__ {scalar_t__ refcnt; int sources; } ;
typedef TYPE_2__ isc_entropy_t ;
typedef int isc_boolean_t ;




 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (TYPE_1__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline isc_boolean_t
FUNC_2(isc_entropy_t *VAR_3) {
 isc_entropysource_t *VAR_4;

 if (VAR_3->refcnt > 0)
  return (VAR_0);

 VAR_4 = FUNC_0(VAR_3->sources);
 while (VAR_4 != ((void*)0)) {
  switch (VAR_4->type) {
  case 129:
  case 128:
   break;
  default:
   return (VAR_0);
  }
  VAR_4 = FUNC_1(VAR_4, VAR_2);
 }

 return (VAR_1);
}
