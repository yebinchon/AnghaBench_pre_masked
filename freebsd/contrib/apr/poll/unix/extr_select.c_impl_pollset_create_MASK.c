
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int apr_uint32_t ;
typedef int apr_status_t ;
typedef int apr_pool_t ;
struct TYPE_5__ {TYPE_1__* p; } ;
typedef TYPE_2__ apr_pollset_t ;
typedef int apr_pollset_private_t ;
typedef int apr_pollfd_t ;
struct TYPE_4__ {void* result_set; void* query_set; int set_type; scalar_t__ maxfd; int exceptset; int writeset; int readset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 void* FUNC_1 (int *,int) ;

__attribute__((used)) static apr_status_t FUNC_2(apr_pollset_t *VAR_6,
                                        apr_uint32_t VAR_7,
                                        apr_pool_t *VAR_8,
                                        apr_uint32_t VAR_9)
{
    if (VAR_9 & VAR_3) {
        VAR_6->p = ((void*)0);
        return VAR_1;
    }






    VAR_6->p = FUNC_1(VAR_8, sizeof(apr_pollset_private_t));
    FUNC_0(&(VAR_6->p->readset));
    FUNC_0(&(VAR_6->p->writeset));
    FUNC_0(&(VAR_6->p->exceptset));
    VAR_6->p->maxfd = 0;



    VAR_6->p->query_set = FUNC_1(VAR_8, VAR_7 * sizeof(apr_pollfd_t));
    VAR_6->p->result_set = FUNC_1(VAR_8, VAR_7 * sizeof(apr_pollfd_t));

    return VAR_4;
}
