
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread_local_inits_st {int dummy; } ;
struct TYPE_2__ {int value; } ;


 struct thread_local_inits_st* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct thread_local_inits_st*) ;
 int FUNC_2 (struct thread_local_inits_st*) ;
 struct thread_local_inits_st* FUNC_3 (int) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static struct thread_local_inits_st *FUNC_4(int VAR_1)
{
    struct thread_local_inits_st *VAR_2 =
        FUNC_0(&VAR_0.value);

    if (VAR_1) {
        if (VAR_2 == ((void*)0)
            && (VAR_2 = FUNC_3(sizeof(*VAR_2))) != ((void*)0)
            && !FUNC_1(&VAR_0.value, VAR_2)) {
            FUNC_2(VAR_2);
            return ((void*)0);
        }
    } else {
        FUNC_1(&VAR_0.value, ((void*)0));
    }

    return VAR_2;
}
