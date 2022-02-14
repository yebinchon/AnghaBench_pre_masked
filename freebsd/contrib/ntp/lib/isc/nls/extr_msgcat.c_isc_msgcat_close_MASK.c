
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ nl_catd ;
struct TYPE_5__ {scalar_t__ catalog; scalar_t__ magic; } ;
typedef TYPE_1__ isc_msgcat_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_1__*) ;

void
FUNC_4(isc_msgcat_t **VAR_0) {
 isc_msgcat_t *VAR_1;





 FUNC_0(VAR_0 != ((void*)0));
 VAR_1 = *VAR_0;
 FUNC_0(FUNC_1(VAR_1) || VAR_1 == ((void*)0));

 if (VAR_1 != ((void*)0)) {




  VAR_1->magic = 0;
  FUNC_3(VAR_1);
 }

 *VAR_0 = ((void*)0);
}
