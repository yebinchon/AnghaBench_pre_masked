
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int length; int base; } ;
typedef TYPE_1__ isc_region_t ;
typedef int isc_mem_t ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (int ,char*,int) ;

char *
FUNC_3(isc_mem_t *VAR_0, const isc_region_t *VAR_1) {
 char *VAR_2;

 FUNC_0(VAR_0 != ((void*)0));
 FUNC_0(VAR_1 != ((void*)0));

 VAR_2 = (char *) FUNC_1(VAR_0, VAR_1->length + 1);
 if (VAR_2 != ((void*)0)) {
  FUNC_2(VAR_1->base, VAR_2, VAR_1->length);
  VAR_2[VAR_1->length] = '\0';
 }

 return (VAR_2);
}
