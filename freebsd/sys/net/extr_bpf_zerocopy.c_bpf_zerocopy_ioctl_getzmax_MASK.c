
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct bpf_d {scalar_t__ bd_bufmode; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int,char*) ;
 size_t VAR_2 ;

int
FUNC_1(struct thread *VAR_3, struct bpf_d *VAR_4, size_t *VAR_5)
{

 FUNC_0(VAR_4->bd_bufmode == VAR_0,
     ("bpf_zerocopy_ioctl_getzmax: not in zbuf mode"));

 *VAR_5 = VAR_1 * VAR_2;
 return (0);
}
