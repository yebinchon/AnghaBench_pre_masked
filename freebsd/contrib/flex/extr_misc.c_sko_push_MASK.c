
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sko_state {int dc; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct sko_state*,int) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 struct sko_state* VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_4(bool VAR_3)
{
    if(!VAR_1){
        VAR_2 = 1;
        VAR_1 = (struct sko_state*)FUNC_1(sizeof(struct sko_state)*VAR_2);
        if (!VAR_1)
            FUNC_3(FUNC_0("allocation of sko_stack failed"));
        VAR_0 = 0;
    }
    if(VAR_0 >= VAR_2){
        VAR_2 *= 2;
        VAR_1 = (struct sko_state*)FUNC_2(VAR_1,sizeof(struct sko_state)*VAR_2);
    }


    VAR_1[VAR_0].dc = VAR_3;
    VAR_0++;
}
