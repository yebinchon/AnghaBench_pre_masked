
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ pid_t ;
struct TYPE_2__ {int random_data_source_fd; scalar_t__ getrandom_available; scalar_t__ pid; scalar_t__ initialized; } ;


 scalar_t__ FUNC_0 (int) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (int *,int) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_2(void)
{
    int VAR_2 = -1;

    if (VAR_0.random_data_source_fd != -1 &&
        FUNC_0(VAR_0.random_data_source_fd) == 0) {
        VAR_0.random_data_source_fd = -1;
        VAR_0.initialized = 0;



        VAR_2 = 0;
    }
    FUNC_1(&VAR_1, sizeof VAR_1);

    return VAR_2;
}
