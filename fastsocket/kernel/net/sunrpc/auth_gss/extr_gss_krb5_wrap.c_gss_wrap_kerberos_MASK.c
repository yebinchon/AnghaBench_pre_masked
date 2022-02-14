
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xdr_buf {int dummy; } ;
struct page {int dummy; } ;
struct krb5_ctx {int enctype; } ;
struct gss_ctx {struct krb5_ctx* internal_ctx_id; } ;


 int FUNC_0 () ;





 int FUNC_1 (struct krb5_ctx*,int,struct xdr_buf*,struct page**) ;
 int FUNC_2 (struct krb5_ctx*,int,struct xdr_buf*,struct page**) ;

u32
FUNC_3(struct gss_ctx *VAR_0, int VAR_1,
    struct xdr_buf *VAR_2, struct page **VAR_3)
{
 struct krb5_ctx *VAR_4 = VAR_0->internal_ctx_id;

 switch (VAR_4->enctype) {
 default:
  FUNC_0();
 case 128:
 case 129:
 case 130:
  return FUNC_1(VAR_4, VAR_1, VAR_2, VAR_3);
 case 132:
 case 131:
  return FUNC_2(VAR_4, VAR_1, VAR_2, VAR_3);
 }
}
