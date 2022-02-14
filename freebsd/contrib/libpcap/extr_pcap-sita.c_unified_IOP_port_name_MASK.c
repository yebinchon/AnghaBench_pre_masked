
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int chassis; int geoslot; } ;
typedef TYPE_1__ unit_t ;


 int FUNC_0 (char*,size_t,char*,char const*,int) ;

__attribute__((used)) static void FUNC_1(char *VAR_0, size_t VAR_1, const char *VAR_2, unit_t *VAR_3, int VAR_4) {
 int VAR_5;

 VAR_5 = ((VAR_3->chassis - 1) * 64) + ((VAR_3->geoslot - 1) * 8) + VAR_4 + 1;
 FUNC_0(VAR_0, VAR_1, "%s_%d", VAR_2, VAR_5);
}
