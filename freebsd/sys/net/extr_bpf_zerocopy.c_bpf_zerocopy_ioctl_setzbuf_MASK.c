
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
struct zbuf {int dummy; } ;
struct thread {int dummy; } ;
struct bpf_zbuf_header {int dummy; } ;
struct bpf_zbuf {scalar_t__ bz_buflen; int * bz_bufb; int * bz_bufa; } ;
struct bpf_d {scalar_t__ bd_bufmode; scalar_t__ bd_bufsize; scalar_t__ bd_hlen; scalar_t__ bd_slen; int * bd_sbuf; int * bd_fbuf; int * bd_bif; int * bd_hbuf; } ;
typedef void* caddr_t ;


 int FUNC_0 (struct bpf_d*) ;
 int FUNC_1 (struct bpf_d*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (struct zbuf*) ;
 int FUNC_4 (struct thread*,int ,scalar_t__,struct zbuf**) ;

int
FUNC_5(struct thread *VAR_2, struct bpf_d *VAR_3,
    struct bpf_zbuf *VAR_4)
{
 struct zbuf *VAR_5, *VAR_6;
 int VAR_7;

 FUNC_2(VAR_3->bd_bufmode == VAR_0,
     ("bpf_zerocopy_ioctl_setzbuf: not in zbuf mode"));




 if (VAR_4->bz_bufa == ((void*)0) || VAR_4->bz_bufb == ((void*)0))
  return (VAR_1);





 if (VAR_4->bz_buflen == 0)
  return (VAR_1);




 VAR_7 = FUNC_4(VAR_2, (vm_offset_t)VAR_4->bz_bufa, VAR_4->bz_buflen,
     &VAR_5);
 if (VAR_7)
  return (VAR_7);
 VAR_7 = FUNC_4(VAR_2, (vm_offset_t)VAR_4->bz_bufb, VAR_4->bz_buflen,
     &VAR_6);
 if (VAR_7) {
  FUNC_3(VAR_5);
  return (VAR_7);
 }





 FUNC_0(VAR_3);
 if (VAR_3->bd_hbuf != ((void*)0) || VAR_3->bd_sbuf != ((void*)0) || VAR_3->bd_fbuf != ((void*)0) ||
     VAR_3->bd_bif != ((void*)0)) {
  FUNC_1(VAR_3);
  FUNC_3(VAR_5);
  FUNC_3(VAR_6);
  return (VAR_1);
 }





 VAR_3->bd_fbuf = (caddr_t)VAR_6;
 VAR_3->bd_sbuf = (caddr_t)VAR_5;
 VAR_3->bd_slen = 0;
 VAR_3->bd_hlen = 0;





 VAR_3->bd_bufsize = VAR_4->bz_buflen - sizeof(struct bpf_zbuf_header);
 FUNC_1(VAR_3);
 return (0);
}
