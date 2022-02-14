
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zbuf {TYPE_1__* zb_header; } ;
struct bpf_d {scalar_t__ bd_bufmode; scalar_t__ bd_hbuf; } ;
struct TYPE_2__ {scalar_t__ bzh_kernel_gen; int bzh_user_gen; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (int *) ;

int
FUNC_2(struct bpf_d *VAR_1)
{
 struct zbuf *VAR_2;

 FUNC_0(VAR_1->bd_bufmode == VAR_0,
     ("bpf_zerocopy_canfreebuf: not in zbuf mode"));

 VAR_2 = (struct zbuf *)VAR_1->bd_hbuf;
 if (VAR_2 == ((void*)0))
  return (0);
 if (VAR_2->zb_header->bzh_kernel_gen ==
     FUNC_1(&VAR_2->zb_header->bzh_user_gen))
  return (1);
 return (0);
}
