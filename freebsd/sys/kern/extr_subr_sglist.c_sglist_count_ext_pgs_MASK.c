
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_paddr_t ;
struct mbuf_ext_pgs {size_t hdr_len; int first_pg_off; int npgs; scalar_t__* pa; size_t trail_len; int * trail; int * hdr; } ;


 int FUNC_0 (int,char*) ;
 size_t FUNC_1 (size_t,size_t) ;
 int FUNC_2 (struct mbuf_ext_pgs*,int,int) ;
 scalar_t__ FUNC_3 (int *,size_t) ;

int
FUNC_4(struct mbuf_ext_pgs *VAR_0, size_t VAR_1, size_t VAR_2)
{
 vm_paddr_t VAR_3, VAR_4;
 size_t VAR_5, VAR_6;
 int VAR_7, VAR_8, VAR_9, VAR_10;

 if (VAR_2 == 0)
  return (0);

 VAR_8 = 0;
 if (VAR_0->hdr_len != 0) {
  if (VAR_1 >= VAR_0->hdr_len) {
   VAR_1 -= VAR_0->hdr_len;
  } else {
   VAR_5 = VAR_0->hdr_len - VAR_1;
   VAR_6 = VAR_1;
   VAR_5 = FUNC_1(VAR_5, VAR_2);
   VAR_1 = 0;
   VAR_2 -= VAR_5;
   VAR_8 += FUNC_3(&VAR_0->hdr[VAR_6], VAR_5);
  }
 }
 VAR_3 = 0;
 VAR_10 = VAR_0->first_pg_off;
 for (VAR_7 = 0; VAR_7 < VAR_0->npgs && VAR_2 > 0; VAR_7++) {
  VAR_9 = FUNC_2(VAR_0, VAR_7, VAR_10);
  if (VAR_1 >= VAR_9) {
   VAR_1 -= VAR_9;
   VAR_10 = 0;
   continue;
  }
  VAR_5 = VAR_9 - VAR_1;
  VAR_6 = VAR_10 + VAR_1;
  VAR_1 = 0;
  VAR_5 = FUNC_1(VAR_5, VAR_2);
  VAR_2 -= VAR_5;
  VAR_4 = VAR_0->pa[VAR_7] + VAR_6;
  if (VAR_4 != VAR_3)
   VAR_8++;
  VAR_3 = VAR_4 + VAR_5;
  VAR_10 = 0;
 };
 if (VAR_2 != 0) {
  VAR_5 = FUNC_1(VAR_2, VAR_0->trail_len - VAR_1);
  VAR_2 -= VAR_5;
  VAR_8 += FUNC_3(&VAR_0->trail[VAR_1], VAR_5);
 }
 FUNC_0(VAR_2 == 0, ("len != 0"));
 return (VAR_8);
}
