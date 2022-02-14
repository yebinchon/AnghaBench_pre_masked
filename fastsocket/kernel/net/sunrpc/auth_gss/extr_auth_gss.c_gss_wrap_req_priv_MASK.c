
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct xdr_buf {int page_base; scalar_t__ len; scalar_t__ buflen; struct kvec* head; struct kvec* tail; scalar_t__ page_len; struct page** pages; } ;
struct rpc_rqst {scalar_t__ rq_seqno; int rq_enc_pages_num; struct page** rq_enc_pages; struct xdr_buf rq_snd_buf; } ;
struct rpc_cred {int cr_flags; } ;
struct page {int dummy; } ;
struct kvec {char* iov_base; int iov_len; } ;
struct gss_cl_ctx {int gc_gss_ctx; } ;
typedef int (* kxdrproc_t ) (struct rpc_rqst*,char*,void*) ;
typedef char __be32 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct rpc_rqst*) ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int ,scalar_t__,struct xdr_buf*,struct page**) ;
 void* FUNC_4 (scalar_t__) ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (char*,int ,int) ;
 char* FUNC_7 (struct page*) ;

__attribute__((used)) static inline int
FUNC_8(struct rpc_cred *VAR_4, struct gss_cl_ctx *VAR_5,
  kxdrproc_t VAR_6, struct rpc_rqst *VAR_7, __be32 *VAR_8, void *VAR_9)
{
 struct xdr_buf *VAR_10 = &VAR_7->rq_snd_buf;
 u32 VAR_11;
 u32 VAR_12;
 int VAR_13;
 __be32 *VAR_14;
 struct page **VAR_15;
 int VAR_16;
 int VAR_17;
 struct kvec *VAR_18;
 char *VAR_19;

 VAR_14 = VAR_8++;
 VAR_11 = (u8 *)VAR_8 - (u8 *)VAR_10->head[0].iov_base;
 *VAR_8++ = FUNC_4(VAR_7->rq_seqno);

 VAR_13 = VAR_6(VAR_7, VAR_8, VAR_9);
 if (VAR_13)
  return VAR_13;

 VAR_13 = FUNC_1(VAR_7);
 if (VAR_13)
  return VAR_13;
 VAR_16 = VAR_10->page_base >> VAR_2;
 VAR_15 = VAR_10->pages + VAR_16;
 VAR_10->pages = VAR_7->rq_enc_pages;
 VAR_10->page_base -= VAR_16 << VAR_2;
 if (VAR_10->page_len || VAR_10->tail[0].iov_len) {
  VAR_19 = FUNC_7(VAR_7->rq_enc_pages[VAR_7->rq_enc_pages_num - 1]);
  FUNC_5(VAR_19, VAR_10->tail[0].iov_base, VAR_10->tail[0].iov_len);
  VAR_10->tail[0].iov_base = VAR_19;
 }
 VAR_12 = FUNC_3(VAR_5->gc_gss_ctx, VAR_11, VAR_10, VAR_15);

 FUNC_0(VAR_10->len > VAR_10->buflen);
 VAR_13 = -VAR_0;


 if (VAR_12 == VAR_1)
  FUNC_2(VAR_3, &VAR_4->cr_flags);
 else if (VAR_12)
  return VAR_13;

 *VAR_14 = FUNC_4(VAR_10->len - VAR_11);

 if (VAR_10->page_len || VAR_10->tail[0].iov_len)
  VAR_18 = VAR_10->tail;
 else
  VAR_18 = VAR_10->head;
 VAR_8 = VAR_18->iov_base + VAR_18->iov_len;
 VAR_17 = 3 - ((VAR_10->len - VAR_11 - 1) & 3);
 FUNC_6(VAR_8, 0, VAR_17);
 VAR_18->iov_len += VAR_17;
 VAR_10->len += VAR_17;

 return 0;
}
