
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_d {int * bd_fbuf; int * bd_hbuf; int * bd_sbuf; } ;
typedef int * caddr_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;

void
FUNC_1(struct bpf_d *VAR_1)
{

 if (VAR_1->bd_sbuf != ((void*)0))
  FUNC_0(VAR_1->bd_sbuf, VAR_0);
 if (VAR_1->bd_hbuf != ((void*)0))
  FUNC_0(VAR_1->bd_hbuf, VAR_0);
 if (VAR_1->bd_fbuf != ((void*)0))
  FUNC_0(VAR_1->bd_fbuf, VAR_0);




}
