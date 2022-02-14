
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_page_t ;
struct uio {int dummy; } ;
struct mbuf_ext_pgs {int hdr_len; int first_pg_off; int npgs; int trail_len; int * trail; int * pa; int * hdr; } ;
struct TYPE_2__ {struct mbuf_ext_pgs* ext_pgs; } ;
struct mbuf {TYPE_1__ m_ext; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct mbuf const*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mbuf_ext_pgs*,int,int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (struct mbuf const*,int ) ;
 int FUNC_6 (int *,int,struct uio*) ;
 int FUNC_7 (int *,int,int,struct uio*) ;
 int VAR_0 ;

int
FUNC_8(const struct mbuf *VAR_1, int VAR_2, struct uio *VAR_3, int VAR_4)
{
 struct mbuf_ext_pgs *VAR_5;
 vm_page_t VAR_6;
 int VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;

 FUNC_1(VAR_1);
 VAR_5 = VAR_1->m_ext.ext_pgs;
 VAR_7 = 0;


 VAR_9 = FUNC_5(VAR_1, VAR_0);

 VAR_9 += VAR_2;
 if (VAR_5->hdr_len != 0) {
  if (VAR_9 >= VAR_5->hdr_len) {
   VAR_9 -= VAR_5->hdr_len;
  } else {
   VAR_12 = VAR_5->hdr_len - VAR_9;
   VAR_13 = VAR_9;
   VAR_12 = FUNC_4(VAR_12, VAR_4);
   VAR_9 = 0;
   VAR_4 -= VAR_12;
   VAR_7 = FUNC_6(&VAR_5->hdr[VAR_13], VAR_12, VAR_3);
  }
 }
 VAR_11 = VAR_5->first_pg_off;
 for (VAR_8 = 0; VAR_8 < VAR_5->npgs && VAR_7 == 0 && VAR_4 > 0; VAR_8++) {
  VAR_10 = FUNC_3(VAR_5, VAR_8, VAR_11);
  if (VAR_9 >= VAR_10) {
   VAR_9 -= VAR_10;
   VAR_11 = 0;
   continue;
  }
  VAR_12 = VAR_10 - VAR_9;
  VAR_13 = VAR_11 + VAR_9;
  VAR_9 = 0;
  VAR_12 = FUNC_4(VAR_12, VAR_4);
  VAR_4 -= VAR_12;
  VAR_6 = FUNC_2(VAR_5->pa[VAR_8]);
  VAR_7 = FUNC_7(&VAR_6, VAR_13, VAR_12, VAR_3);
  VAR_11 = 0;
 };
 if (VAR_4 != 0 && VAR_7 == 0) {
  FUNC_0((VAR_9 + VAR_4) <= VAR_5->trail_len,
      ("off + len > trail (%d + %d > %d, m_off = %d)", VAR_9, VAR_4,
      VAR_5->trail_len, VAR_2));
  VAR_7 = FUNC_6(&VAR_5->trail[VAR_9], VAR_4, VAR_3);
 }
 return (VAR_7);
}
