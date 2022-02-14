
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zbuf {scalar_t__ zb_uaddr; } ;
struct thread {int dummy; } ;
struct bpf_zbuf {int bz_buflen; void* bz_bufa; } ;
struct bpf_d {scalar_t__ bd_slen; int bd_hlen; int * bd_hbuf; } ;


 int FUNC_0 (struct bpf_d*) ;
 int FUNC_1 (struct bpf_d*) ;
 int FUNC_2 (struct bpf_d*) ;
 int FUNC_3 (struct bpf_zbuf*,int) ;

int
FUNC_4(struct thread *VAR_0, struct bpf_d *VAR_1,
    struct bpf_zbuf *VAR_2)
{
 struct zbuf *VAR_3;

 FUNC_3(VAR_2, sizeof(*VAR_2));
 FUNC_0(VAR_1);
 if (VAR_1->bd_hbuf == ((void*)0) && VAR_1->bd_slen != 0) {
  FUNC_2(VAR_1);
  VAR_3 = (struct zbuf *)VAR_1->bd_hbuf;
  VAR_2->bz_bufa = (void *)VAR_3->zb_uaddr;
  VAR_2->bz_buflen = VAR_1->bd_hlen;
 }
 FUNC_1(VAR_1);
 return (0);
}
