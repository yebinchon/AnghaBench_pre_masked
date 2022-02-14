
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct afswtch {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (int,int ,int*) ;
 int FUNC_2 (int,int ,int,int ,int *) ;

__attribute__((used)) static void
FUNC_3(const char *VAR_1, int VAR_2, int VAR_3, const struct afswtch *VAR_4)
{
        int VAR_5;

        if (FUNC_1(VAR_3, VAR_0, &VAR_5) < 0)
                FUNC_0(-1, "cannot set LDPC setting");
        if (VAR_2 < 0) {
                VAR_2 = -VAR_2;
                VAR_5 &= ~VAR_2;
        } else
                VAR_5 |= VAR_2;
        FUNC_2(VAR_3, VAR_0, VAR_5, 0, ((void*)0));
}
