
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ apr_status_t ;
typedef scalar_t__ apr_size_t ;
typedef int apr_read_type_e ;
typedef scalar_t__ apr_off_t ;
typedef int apr_int32_t ;
typedef int apr_file_t ;
struct TYPE_10__ {int * fd; int readpool; } ;
typedef TYPE_1__ apr_bucket_file ;
struct TYPE_11__ {scalar_t__ length; scalar_t__ start; int list; int (* free ) (char*) ;int * type; TYPE_1__* data; } ;
typedef TYPE_2__ apr_bucket ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*,TYPE_2__*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 void* FUNC_1 (int,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_2__*,char*,scalar_t__,int (*) (char*)) ;
 scalar_t__ FUNC_4 (TYPE_2__*,char const**,scalar_t__*,int ) ;
 int VAR_5 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char const**,int *) ;
 scalar_t__ FUNC_7 (int **,char const*,int,int ,int ) ;
 scalar_t__ FUNC_8 (int *,char*,scalar_t__*) ;
 scalar_t__ FUNC_9 (int *,int ,scalar_t__*) ;
 int FUNC_10 (TYPE_1__*) ;
 scalar_t__ FUNC_11 (TYPE_2__*,scalar_t__,scalar_t__,int ) ;

__attribute__((used)) static apr_status_t FUNC_12(apr_bucket *VAR_6, const char **VAR_7,
                                     apr_size_t *VAR_8, apr_read_type_e VAR_9)
{
    apr_bucket_file *VAR_10 = VAR_6->data;
    apr_file_t *VAR_11 = VAR_10->fd;
    apr_bucket *VAR_12 = ((void*)0);
    char *VAR_13;
    apr_status_t VAR_14;
    apr_size_t VAR_15 = VAR_6->length;
    apr_off_t VAR_16 = VAR_6->start;
    *VAR_8 = (VAR_15 > VAR_0)
               ? VAR_0
               : VAR_15;
    *VAR_7 = ((void*)0);
    VAR_13 = FUNC_1(*VAR_8, VAR_6->list);


    VAR_14 = FUNC_9(VAR_11, VAR_3, &VAR_16);
    if (VAR_14 != VAR_4) {
        FUNC_2(VAR_13);
        return VAR_14;
    }
    VAR_14 = FUNC_8(VAR_11, VAR_13, VAR_8);
    if (VAR_14 != VAR_4 && VAR_14 != VAR_1) {
        FUNC_2(VAR_13);
        return VAR_14;
    }
    VAR_15 -= *VAR_8;




    FUNC_3(VAR_6, VAR_13, *VAR_8, FUNC_2);


    if (VAR_15 > 0 && VAR_14 != VAR_1) {


        VAR_12 = FUNC_1(sizeof(*VAR_12), VAR_6->list);
        VAR_12->start = VAR_16 + (*VAR_8);
        VAR_12->length = VAR_15;
        VAR_12->data = VAR_10;
        VAR_12->type = &VAR_5;
        VAR_12->free = FUNC_2;
        VAR_12->list = VAR_6->list;
        FUNC_0(VAR_6, VAR_12);
    }
    else {
        FUNC_10(VAR_10);
    }

    *VAR_7 = VAR_13;
    return VAR_14;
}
