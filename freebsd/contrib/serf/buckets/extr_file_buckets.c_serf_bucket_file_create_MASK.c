
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int serf_bucket_t ;
typedef int serf_bucket_alloc_t ;
struct TYPE_9__ {TYPE_1__* read_baton; int read; } ;
struct TYPE_7__ {TYPE_3__ databuf; int * file; } ;
typedef TYPE_1__ file_context_t ;
typedef scalar_t__ apr_status_t ;
typedef int apr_mmap_t ;
struct TYPE_8__ {int size; } ;
typedef TYPE_2__ apr_finfo_t ;
typedef int apr_file_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char const**,int *) ;
 scalar_t__ FUNC_2 (int **,int *,int ,int ,int ,int ) ;
 int FUNC_3 (TYPE_2__*,char const*,int ,int ) ;
 int VAR_3 ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *,int *,TYPE_1__*) ;
 TYPE_1__* FUNC_6 (int *,int) ;
 int * FUNC_7 (int *,int *) ;
 int VAR_4 ;
 int FUNC_8 (TYPE_3__*) ;

serf_bucket_t *FUNC_9(
    apr_file_t *VAR_5,
    serf_bucket_alloc_t *VAR_6)
{
    file_context_t *VAR_7;
    VAR_7 = FUNC_6(VAR_6, sizeof(*VAR_7));
    VAR_7->file = VAR_5;

    FUNC_8(&VAR_7->databuf);
    VAR_7->databuf.read = VAR_3;
    VAR_7->databuf.read_baton = VAR_7;

    return FUNC_5(&VAR_4, VAR_6, VAR_7);
}
