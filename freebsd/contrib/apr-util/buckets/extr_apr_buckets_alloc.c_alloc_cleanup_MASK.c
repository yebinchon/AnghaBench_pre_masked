
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int apr_status_t ;
struct TYPE_2__ {scalar_t__ allocator; scalar_t__ pool; int blocks; } ;
typedef TYPE_1__ apr_bucket_alloc_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

__attribute__((used)) static apr_status_t FUNC_3(void *VAR_1)
{
    apr_bucket_alloc_t *VAR_2 = VAR_1;

    FUNC_1(VAR_2->allocator, VAR_2->blocks);







    return VAR_0;
}
