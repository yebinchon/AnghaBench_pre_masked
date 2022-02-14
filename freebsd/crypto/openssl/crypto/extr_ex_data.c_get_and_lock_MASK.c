
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EX_CALLBACKS ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,int ) ;
 int VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;

__attribute__((used)) static EX_CALLBACKS *FUNC_3(int VAR_8)
{
    EX_CALLBACKS *VAR_9;

    if (VAR_8 < 0 || VAR_8 >= VAR_0) {
        FUNC_1(VAR_1, VAR_3);
        return ((void*)0);
    }

    if (!FUNC_2(&VAR_6, VAR_4)) {
        FUNC_1(VAR_1, VAR_2);
        return ((void*)0);
    }

    if (VAR_7 == ((void*)0)) {
         return ((void*)0);
    }

    VAR_9 = &VAR_5[VAR_8];
    FUNC_0(VAR_7);
    return VAR_9;
}
