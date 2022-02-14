
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zbuf {int zb_flags; TYPE_1__* zb_header; } ;
struct bpf_d {scalar_t__ bd_bufmode; int bd_slen; scalar_t__ bd_sbuf; } ;
struct TYPE_2__ {int bzh_kernel_gen; int bzh_kernel_len; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 int FUNC_1 (int *,int) ;

void
FUNC_2(struct bpf_d *VAR_2)
{
 struct zbuf *VAR_3;

 FUNC_0(VAR_2->bd_bufmode == VAR_0,
     ("bpf_zerocopy_buffull: not in zbuf mode"));

 VAR_3 = (struct zbuf *)VAR_2->bd_sbuf;
 FUNC_0(VAR_3 != ((void*)0), ("bpf_zerocopy_buffull: zb == NULL"));

 if ((VAR_3->zb_flags & VAR_1) == 0) {
  VAR_3->zb_flags |= VAR_1;
  VAR_3->zb_header->bzh_kernel_len = VAR_2->bd_slen;
  FUNC_1(&VAR_3->zb_header->bzh_kernel_gen, 1);
 }
}
