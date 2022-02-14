
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvhdr {int dummy; } ;
struct nv {scalar_t__ nv_error; struct ebuf* nv_ebuf; } ;
struct ebuf {int dummy; } ;


 size_t FUNC_0 (struct nvhdr*) ;
 int FUNC_1 (struct nv*) ;
 int FUNC_2 (int) ;
 unsigned char* FUNC_3 (struct ebuf*,size_t*) ;
 int FUNC_4 (struct nvhdr*,int) ;

struct ebuf *
FUNC_5(struct nv *VAR_0)
{
 struct nvhdr *VAR_1;
 unsigned char *VAR_2;
 size_t VAR_3;

 FUNC_1(VAR_0);
 FUNC_2(VAR_0->nv_error == 0);

 VAR_2 = FUNC_3(VAR_0->nv_ebuf, &VAR_3);
 while (VAR_3 > 0) {




  FUNC_2(VAR_3 >= sizeof(*VAR_1) + 2);
  VAR_1 = (struct nvhdr *)VAR_2;
  FUNC_2(FUNC_0(VAR_1) <= VAR_3);
  FUNC_4(VAR_1, 0);
  VAR_2 += FUNC_0(VAR_1);
  VAR_3 -= FUNC_0(VAR_1);
 }

 return (VAR_0->nv_ebuf);
}
