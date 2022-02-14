
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int stream; void* block_baton; int block_handler; } ;
typedef TYPE_1__ svn_ra_svn_conn_t ;
typedef int ra_svn_block_handler_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ) ;

void
FUNC_2(svn_ra_svn_conn_t *VAR_0,
                              ra_svn_block_handler_t VAR_1,
                              void *VAR_2)
{
  VAR_0->block_handler = VAR_1;
  VAR_0->block_baton = VAR_2;
  FUNC_1(VAR_0->stream, FUNC_0(VAR_0));
}
