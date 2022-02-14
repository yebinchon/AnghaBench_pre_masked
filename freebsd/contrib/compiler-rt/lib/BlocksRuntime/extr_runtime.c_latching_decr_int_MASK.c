
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int,int volatile*) ;

__attribute__((used)) static int FUNC_1(int *VAR_1) {
    while (1) {
        int VAR_2 = *(volatile int *)VAR_1;
        if ((VAR_2 & VAR_0) == VAR_0) {
            return VAR_0;
        }
        if ((VAR_2 & VAR_0) == 0) {
            return 0;
        }
        if (FUNC_0(VAR_2, VAR_2-1, (volatile int *)VAR_1)) {
            return VAR_2-1;
        }
    }
}
