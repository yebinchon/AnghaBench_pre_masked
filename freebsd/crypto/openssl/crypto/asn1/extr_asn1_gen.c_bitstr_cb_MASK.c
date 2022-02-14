
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (void*,long,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 long FUNC_2 (char const*,char**,int) ;

__attribute__((used)) static int FUNC_3(const char *VAR_3, int VAR_4, void *VAR_5)
{
    long VAR_6;
    char *VAR_7;
    if (!VAR_3)
        return 0;
    VAR_6 = FUNC_2(VAR_3, &VAR_7, 10);
    if (VAR_7 && *VAR_7 && (VAR_7 != VAR_3 + VAR_4))
        return 0;
    if (VAR_6 < 0) {
        FUNC_1(VAR_0, VAR_1);
        return 0;
    }
    if (!FUNC_0(VAR_5, VAR_6, 1)) {
        FUNC_1(VAR_0, VAR_2);
        return 0;
    }
    return 1;
}
