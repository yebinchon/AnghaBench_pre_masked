
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,int,int ,double) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 double* VAR_1 ;
 scalar_t__ VAR_2 ;
 int * VAR_3 ;
 double** VAR_4 ;

__attribute__((used)) static void FUNC_3(int VAR_5, int VAR_6, int VAR_7, double VAR_8)
{
    if (VAR_7 == -1) {
        FUNC_1(VAR_0, "EVP error!\n");
        FUNC_2(1);
    }
    FUNC_0(VAR_0,
               VAR_2 ? "+R:%d:%s:%f\n"
               : "%d %s's in %.2fs\n", VAR_7, VAR_3[VAR_5], VAR_8);
    VAR_4[VAR_5][VAR_6] = ((double)VAR_7) / VAR_8 * VAR_1[VAR_6];
}
