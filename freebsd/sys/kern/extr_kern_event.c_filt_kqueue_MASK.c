
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kqueue {int kq_count; } ;
struct knote {int kn_data; TYPE_1__* kn_fp; } ;
struct TYPE_2__ {struct kqueue* f_data; } ;



__attribute__((used)) static int
FUNC_0(struct knote *VAR_0, long VAR_1)
{
 struct kqueue *VAR_2 = VAR_0->kn_fp->f_data;

 VAR_0->kn_data = VAR_2->kq_count;
 return (VAR_0->kn_data > 0);
}
