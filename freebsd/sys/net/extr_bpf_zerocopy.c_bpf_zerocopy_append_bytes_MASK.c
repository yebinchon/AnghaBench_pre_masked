
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;
struct zbuf {int zb_flags; int zb_numpages; int * zb_pages; } ;
struct bpf_zbuf_header {int dummy; } ;
struct bpf_d {scalar_t__ bd_bufmode; } ;
typedef int * caddr_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int,int) ;
 scalar_t__ FUNC_3 (int ) ;

void
FUNC_4(struct bpf_d *VAR_3, caddr_t VAR_4, u_int VAR_5,
    void *VAR_6, u_int VAR_7)
{
 u_int VAR_8, VAR_9, VAR_10;
 u_char *VAR_11;
 struct zbuf *VAR_12;

 FUNC_0(VAR_3->bd_bufmode == VAR_0,
     ("bpf_zerocopy_append_bytes: not in zbuf mode"));
 FUNC_0(VAR_4 != ((void*)0), ("bpf_zerocopy_append_bytes: NULL buf"));

 VAR_11 = (u_char *)VAR_6;
 VAR_12 = (struct zbuf *)VAR_4;

 FUNC_0((VAR_12->zb_flags & VAR_2) == 0,
     ("bpf_zerocopy_append_bytes: ZBUF_FLAG_ASSIGNED"));





 VAR_5 += sizeof(struct bpf_zbuf_header);
 VAR_9 = VAR_5 / VAR_1;
 VAR_10 = VAR_5 % VAR_1;
 while (VAR_7 > 0) {
  FUNC_0(VAR_9 < VAR_12->zb_numpages, ("bpf_zerocopy_append_bytes:"
     " page overflow (%d p %d np)\n", VAR_9, VAR_12->zb_numpages));

  VAR_8 = FUNC_2(VAR_7, VAR_1 - VAR_10);
  FUNC_1(VAR_11, ((u_char *)FUNC_3(VAR_12->zb_pages[VAR_9])) +
      VAR_10, VAR_8);
  VAR_10 += VAR_8;
  if (VAR_10 == VAR_1) {
   VAR_10 = 0;
   VAR_9++;
  }
  FUNC_0(VAR_10 < VAR_1,
      ("bpf_zerocopy_append_bytes: page offset overflow (%d)",
      VAR_10));
  VAR_7 -= VAR_8;
  VAR_11 += VAR_8;
 }
}
