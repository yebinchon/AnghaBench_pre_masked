
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zbuf {int zb_flags; } ;
struct bpf_d {scalar_t__ bd_bufmode; int * bd_fbuf; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;

void
FUNC_1(struct bpf_d *VAR_2)
{
 struct zbuf *VAR_3;

 FUNC_0(VAR_2->bd_bufmode == VAR_0,
     ("bpf_zerocopy_reclaim_buf: not in zbuf mode"));

 FUNC_0(VAR_2->bd_fbuf != ((void*)0),
     ("bpf_zerocopy_buf_reclaimed: NULL free buf"));
 VAR_3 = (struct zbuf *)VAR_2->bd_fbuf;
 VAR_3->zb_flags &= ~VAR_1;
}
