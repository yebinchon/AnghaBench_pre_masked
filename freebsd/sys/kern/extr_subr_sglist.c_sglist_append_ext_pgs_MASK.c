
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_paddr_t ;
struct sglist {int dummy; } ;
struct mbuf_ext_pgs {size_t hdr_len; int first_pg_off; int npgs; size_t trail_len; int * trail; scalar_t__* pa; int * hdr; } ;


 int FUNC_0 (int,char*) ;
 size_t FUNC_1 (size_t,size_t) ;
 int FUNC_2 (struct mbuf_ext_pgs*,int,int) ;
 int FUNC_3 (struct sglist*,int *,size_t) ;
 int FUNC_4 (struct sglist*,scalar_t__,size_t) ;

int
FUNC_5(struct sglist *VAR_0, struct mbuf_ext_pgs *VAR_1,
    size_t VAR_2, size_t VAR_3)
{
 size_t VAR_4, VAR_5;
 vm_paddr_t VAR_6;
 int VAR_7, VAR_8, VAR_9, VAR_10;

 VAR_7 = 0;
 if (VAR_1->hdr_len != 0) {
  if (VAR_2 >= VAR_1->hdr_len) {
   VAR_2 -= VAR_1->hdr_len;
  } else {
   VAR_4 = VAR_1->hdr_len - VAR_2;
   VAR_5 = VAR_2;
   VAR_4 = FUNC_1(VAR_4, VAR_3);
   VAR_2 = 0;
   VAR_3 -= VAR_4;
   VAR_7 = FUNC_3(VAR_0,
       &VAR_1->hdr[VAR_5], VAR_4);
  }
 }
 VAR_10 = VAR_1->first_pg_off;
 for (VAR_8 = 0; VAR_8 < VAR_1->npgs && VAR_7 == 0 && VAR_3 > 0; VAR_8++) {
  VAR_9 = FUNC_2(VAR_1, VAR_8, VAR_10);
  if (VAR_2 >= VAR_9) {
   VAR_2 -= VAR_9;
   VAR_10 = 0;
   continue;
  }
  VAR_4 = VAR_9 - VAR_2;
  VAR_5 = VAR_10 + VAR_2;
  VAR_2 = 0;
  VAR_4 = FUNC_1(VAR_4, VAR_3);
  VAR_3 -= VAR_4;
  VAR_6 = VAR_1->pa[VAR_8] + VAR_5;
  VAR_7 = FUNC_4(VAR_0, VAR_6, VAR_4);
  VAR_10 = 0;
 };
 if (VAR_7 == 0 && VAR_3 > 0) {
  VAR_4 = FUNC_1(VAR_3, VAR_1->trail_len - VAR_2);
  VAR_3 -= VAR_4;
  VAR_7 = FUNC_3(VAR_0,
      &VAR_1->trail[VAR_2], VAR_4);
 }
 if (VAR_7 == 0)
  FUNC_0(VAR_3 == 0, ("len != 0"));
 return (VAR_7);
}
