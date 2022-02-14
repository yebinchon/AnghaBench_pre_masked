
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct TYPE_6__ {int used; } ;
typedef TYPE_1__ isc_buffer_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 size_t FUNC_2 (TYPE_1__*) ;
 unsigned char* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (unsigned char*,char const*,size_t) ;
 size_t FUNC_5 (char const*) ;

void
FUNC_6(isc_buffer_t *VAR_0, const char *VAR_1) {
 size_t VAR_2;
 unsigned char *VAR_3;

 FUNC_1(FUNC_0(VAR_0));
 FUNC_1(VAR_1 != ((void*)0));




 VAR_2 = FUNC_5(VAR_1);

 FUNC_1(VAR_2 <= FUNC_2(VAR_0));

 VAR_3 = FUNC_3(VAR_0);
 FUNC_4(VAR_3, VAR_1, VAR_2);
 VAR_0->used += (u_int)VAR_2;
}
