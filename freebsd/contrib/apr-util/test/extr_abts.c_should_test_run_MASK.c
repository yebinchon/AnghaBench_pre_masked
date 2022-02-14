
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (char const*) ;
 int VAR_1 ;
 int * VAR_2 ;

__attribute__((used)) static int FUNC_1(const char *VAR_3) {
    int VAR_4 = 0;
    if (VAR_1 == 1) {
        return 0;
    }
    if (VAR_2 == ((void*)0)) {
        return 1;
    }
    VAR_4 = FUNC_0(VAR_3);
    if ((VAR_4 && !VAR_0) || (!VAR_4 && VAR_0)) {
        return 1;
    }
    return 0;
}
