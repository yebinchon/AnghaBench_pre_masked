
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* dirpath; void* spill_all_contents; void* delete_on_close; void* maxsize; void* blocksize; int * pool; } ;
typedef TYPE_1__ svn_spillbuf_t ;
typedef void* svn_boolean_t ;
typedef void* apr_size_t ;
typedef int apr_pool_t ;



__attribute__((used)) static void
FUNC_0(svn_spillbuf_t *VAR_0,
                       apr_size_t VAR_1,
                       apr_size_t VAR_2,
                       svn_boolean_t VAR_3,
                       svn_boolean_t VAR_4,
                       const char *VAR_5,
                       apr_pool_t *VAR_6)
{
  VAR_0->pool = VAR_6;
  VAR_0->blocksize = VAR_1;
  VAR_0->maxsize = VAR_2;
  VAR_0->delete_on_close = VAR_3;
  VAR_0->spill_all_contents = VAR_4;
  VAR_0->dirpath = VAR_5;
}
