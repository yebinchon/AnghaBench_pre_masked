
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
typedef int ULONG ;
struct TYPE_4__ {int initialized; scalar_t__ getrandom_available; int random_data_source_fd; int pid; } ;
struct TYPE_3__ {size_t rnd32_outleft; int initialized; scalar_t__ key; int rnd32; } ;
typedef int PVOID ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 () ;
 TYPE_2__ VAR_0 ;
 int FUNC_3 (int ,int ,int) ;
 scalar_t__ FUNC_4 (scalar_t__,int) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int,scalar_t__,int) ;
 int FUNC_7 () ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static void
FUNC_8(void)
{
    FUNC_3(VAR_1.rnd32, 0, sizeof VAR_1.rnd32);
    VAR_1.rnd32_outleft = (size_t) 0U;
    if (VAR_0.initialized == 0) {
        FUNC_5();
        VAR_0.initialized = 1;
    }
    if (VAR_0.random_data_source_fd == -1 ||
        FUNC_6(VAR_0.random_data_source_fd, VAR_1.key,
                  sizeof VAR_1.key) != (ssize_t) sizeof VAR_1.key) {
        FUNC_7();
    }
    VAR_1.initialized = 1;
}
