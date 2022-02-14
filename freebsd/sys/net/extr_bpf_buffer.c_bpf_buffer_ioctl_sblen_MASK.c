
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct bpf_d {void* bd_fbuf; void* bd_sbuf; scalar_t__ bd_hlen; scalar_t__ bd_slen; int * bd_hbuf; scalar_t__ bd_bufsize; int * bd_bif; } ;
typedef void* caddr_t ;


 int FUNC_0 (struct bpf_d*) ;
 int FUNC_1 (struct bpf_d*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (void*,int ) ;
 scalar_t__ FUNC_3 (scalar_t__,int ,int ) ;

int
FUNC_4(struct bpf_d *VAR_5, u_int *VAR_6)
{
 u_int VAR_7;
 caddr_t VAR_8, VAR_9;

 VAR_7 = *VAR_6;
 if (VAR_7 > VAR_4)
  *VAR_6 = VAR_7 = VAR_4;
 else if (VAR_7 < VAR_0)
  *VAR_6 = VAR_7 = VAR_0;


 VAR_8 = (caddr_t)FUNC_3(VAR_7, VAR_2, VAR_3);
 VAR_9 = (caddr_t)FUNC_3(VAR_7, VAR_2, VAR_3);

 FUNC_0(VAR_5);
 if (VAR_5->bd_bif != ((void*)0)) {

  FUNC_1(VAR_5);
  FUNC_2(VAR_8, VAR_2);
  FUNC_2(VAR_9, VAR_2);
  return (VAR_1);
 }


 if (VAR_5->bd_fbuf != ((void*)0))
  FUNC_2(VAR_5->bd_fbuf, VAR_2);
 if (VAR_5->bd_sbuf != ((void*)0))
  FUNC_2(VAR_5->bd_sbuf, VAR_2);


 VAR_5->bd_bufsize = VAR_7;
 VAR_5->bd_fbuf = VAR_8;
 VAR_5->bd_sbuf = VAR_9;

 VAR_5->bd_hbuf = ((void*)0);
 VAR_5->bd_slen = 0;
 VAR_5->bd_hlen = 0;

 FUNC_1(VAR_5);
 return (0);
}
