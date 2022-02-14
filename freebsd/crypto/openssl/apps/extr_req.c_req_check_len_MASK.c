
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,int) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(int VAR_1, int VAR_2, int VAR_3)
{
    if ((VAR_2 > 0) && (VAR_1 < VAR_2)) {
        FUNC_0(VAR_0,
                   "string is too short, it needs to be at least %d bytes long\n",
                   VAR_2);
        return 0;
    }
    if ((VAR_3 >= 0) && (VAR_1 > VAR_3)) {
        FUNC_0(VAR_0,
                   "string is too long, it needs to be no more than %d bytes long\n",
                   VAR_3);
        return 0;
    }
    return 1;
}
