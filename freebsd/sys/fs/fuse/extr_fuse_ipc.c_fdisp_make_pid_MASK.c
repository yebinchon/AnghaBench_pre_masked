
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct ucred {int dummy; } ;
struct fuse_dispatcher {int iosize; TYPE_1__* tick; int finh; int indata; } ;
struct fuse_data {int dummy; } ;
typedef int pid_t ;
typedef enum fuse_opcode { ____Placeholder_fuse_opcode } fuse_opcode ;
struct TYPE_4__ {int tk_ms_fiov; } ;


 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,TYPE_1__*,int ,int,int ,int ,struct ucred*) ;
 TYPE_1__* FUNC_3 (struct fuse_data*) ;

__attribute__((used)) static void
FUNC_4(struct fuse_dispatcher *VAR_0, enum fuse_opcode VAR_1,
    struct fuse_data *VAR_2, uint64_t VAR_3, pid_t VAR_4, struct ucred *VAR_5)
{
 if (VAR_0->tick) {
  FUNC_1(VAR_0->tick);
 } else {
  VAR_0->tick = FUNC_3(VAR_2);
 }


 FUNC_0(&VAR_0->tick->tk_ms_fiov, VAR_0->finh,
     VAR_0->indata, VAR_0->iosize);

 FUNC_2(VAR_0->finh, VAR_0->tick, VAR_3, VAR_1, VAR_0->iosize, VAR_4, VAR_5);
}
