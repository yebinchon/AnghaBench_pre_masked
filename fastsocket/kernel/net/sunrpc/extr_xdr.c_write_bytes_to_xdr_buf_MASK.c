
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_buf {int dummy; } ;


 int FUNC_0 (struct xdr_buf*,void*,unsigned int) ;
 int FUNC_1 (struct xdr_buf*,struct xdr_buf*,unsigned int,unsigned int) ;

int FUNC_2(struct xdr_buf *VAR_0, unsigned int VAR_1, void *VAR_2, unsigned int VAR_3)
{
 struct xdr_buf VAR_4;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_0, &VAR_4, VAR_1, VAR_3);
 if (VAR_5 != 0)
  return VAR_5;
 FUNC_0(&VAR_4, VAR_2, VAR_3);
 return 0;
}
