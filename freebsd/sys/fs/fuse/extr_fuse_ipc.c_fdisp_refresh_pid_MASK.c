
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
struct ucred {int dummy; } ;
struct mount {int dummy; } ;
struct fuse_dispatcher {scalar_t__ iosize; TYPE_1__* tick; int finh; int indata; } ;
typedef int pid_t ;
typedef enum fuse_opcode { ____Placeholder_fuse_opcode } fuse_opcode ;
struct TYPE_6__ {scalar_t__ len; } ;
struct TYPE_5__ {TYPE_4__ tk_ms_fiov; } ;


 int FUNC_0 (TYPE_4__*,int ,int ,scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,TYPE_1__*,int ,int,scalar_t__,int ,struct ucred*) ;

__attribute__((used)) static void
FUNC_5(struct fuse_dispatcher *VAR_0, enum fuse_opcode VAR_1,
    struct mount *VAR_2, uint64_t VAR_3, pid_t VAR_4, struct ucred *VAR_5)
{
 FUNC_1(VAR_0->tick);
 FUNC_2(sizeof(VAR_0->finh) + VAR_0->iosize <= VAR_0->tick->tk_ms_fiov.len,
  "Must use fdisp_make_pid to increase the size of the fiov");
 FUNC_3(VAR_0->tick);

 FUNC_0(&VAR_0->tick->tk_ms_fiov, VAR_0->finh,
     VAR_0->indata, VAR_0->iosize);

 FUNC_4(VAR_0->finh, VAR_0->tick, VAR_3, VAR_1, VAR_0->iosize, VAR_4,
  VAR_5);
}
