
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct kaiocb* p_aio; } ;
struct knote {int kn_flags; int kn_data; TYPE_1__ kn_ptr; } ;
struct TYPE_5__ {int error; } ;
struct TYPE_6__ {TYPE_2__ _aiocb_private; } ;
struct kaiocb {int jobflags; TYPE_3__ uaiocb; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_0(struct knote *VAR_2, long VAR_3)
{
 struct kaiocb *VAR_4 = VAR_2->kn_ptr.p_aio;

 VAR_2->kn_data = VAR_4->uaiocb._aiocb_private.error;
 if (!(VAR_4->jobflags & VAR_1))
  return (0);
 VAR_2->kn_flags |= VAR_0;
 return (1);
}
