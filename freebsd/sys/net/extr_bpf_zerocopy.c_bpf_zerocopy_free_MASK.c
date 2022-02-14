
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zbuf {int dummy; } ;
struct bpf_d {scalar_t__ bd_bufmode; scalar_t__ bd_fbuf; scalar_t__ bd_hbuf; scalar_t__ bd_sbuf; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct zbuf*) ;

void
FUNC_2(struct bpf_d *VAR_1)
{
 struct zbuf *VAR_2;

 FUNC_0(VAR_1->bd_bufmode == VAR_0,
     ("bpf_zerocopy_free: not in zbuf mode"));

 VAR_2 = (struct zbuf *)VAR_1->bd_sbuf;
 if (VAR_2 != ((void*)0))
  FUNC_1(VAR_2);
 VAR_2 = (struct zbuf *)VAR_1->bd_hbuf;
 if (VAR_2 != ((void*)0))
  FUNC_1(VAR_2);
 VAR_2 = (struct zbuf *)VAR_1->bd_fbuf;
 if (VAR_2 != ((void*)0))
  FUNC_1(VAR_2);
}
