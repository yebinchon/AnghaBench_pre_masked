
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ apr_status_t ;
struct TYPE_2__ {int pool; int * filename; int base; int shmid; int realsize; } ;
typedef TYPE_1__ apr_shm_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int *) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static apr_status_t FUNC_7(void *VAR_7)
{
    apr_shm_t *VAR_8 = (apr_shm_t *)VAR_7;


    if (VAR_8->filename == ((void*)0)) {
    }


    else {
        return VAR_0;

    }
}
