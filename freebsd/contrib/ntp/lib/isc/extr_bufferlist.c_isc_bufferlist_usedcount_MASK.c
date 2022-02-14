
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int isc_bufferlist_t ;
typedef int isc_buffer_t ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 int * FUNC_2 (int *,int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int VAR_0 ;

unsigned int
FUNC_5(isc_bufferlist_t *VAR_1) {
 isc_buffer_t *VAR_2;
 unsigned int VAR_3;

 FUNC_3(VAR_1 != ((void*)0));

 VAR_3 = 0;
 VAR_2 = FUNC_1(*VAR_1);
 while (VAR_2 != ((void*)0)) {
  FUNC_3(FUNC_0(VAR_2));
  VAR_3 += FUNC_4(VAR_2);
  VAR_2 = FUNC_2(VAR_2, VAR_0);
 }

 return (VAR_3);
}
