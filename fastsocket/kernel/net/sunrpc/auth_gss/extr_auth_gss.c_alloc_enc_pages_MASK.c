
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_buf {int page_len; int page_base; } ;
struct rpc_rqst {int rq_enc_pages_num; int (* rq_release_snd_buf ) (struct rpc_rqst*) ;int ** rq_enc_pages; struct xdr_buf rq_snd_buf; } ;
struct page {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int ) ;
 int ** FUNC_1 (int,int ) ;
 int FUNC_2 (struct rpc_rqst*) ;

__attribute__((used)) static int
FUNC_3(struct rpc_rqst *VAR_3)
{
 struct xdr_buf *VAR_4 = &VAR_3->rq_snd_buf;
 int VAR_5, VAR_6, VAR_7;

 if (VAR_4->page_len == 0) {
  VAR_3->rq_enc_pages_num = 0;
  return 0;
 }

 VAR_5 = VAR_4->page_base >> VAR_2;
 VAR_6 = (VAR_4->page_base + VAR_4->page_len - 1) >> VAR_2;
 VAR_3->rq_enc_pages_num = VAR_6 - VAR_5 + 1 + 1;
 VAR_3->rq_enc_pages
  = FUNC_1(VAR_3->rq_enc_pages_num * sizeof(struct page *),
    VAR_1);
 if (!VAR_3->rq_enc_pages)
  goto out;
 for (VAR_7=0; VAR_7 < VAR_3->rq_enc_pages_num; VAR_7++) {
  VAR_3->rq_enc_pages[VAR_7] = FUNC_0(VAR_1);
  if (VAR_3->rq_enc_pages[VAR_7] == ((void*)0))
   goto out_free;
 }
 VAR_3->rq_release_snd_buf = FUNC_2;
 return 0;
out_free:
 VAR_3->rq_enc_pages_num = VAR_7;
 FUNC_2(VAR_3);
out:
 return -VAR_0;
}
