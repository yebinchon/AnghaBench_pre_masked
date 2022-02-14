
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct xdr_buf {scalar_t__ len; } ;


 int FUNC_0 (struct xdr_buf*,unsigned int) ;
 int FUNC_1 (struct xdr_buf*,struct xdr_buf*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_2(u32 VAR_0, struct xdr_buf *VAR_1, unsigned int VAR_2)
{
 struct xdr_buf VAR_3;

 FUNC_1(VAR_1, &VAR_3, VAR_0, VAR_1->len - VAR_0);
 FUNC_0(&VAR_3, VAR_2);
}
