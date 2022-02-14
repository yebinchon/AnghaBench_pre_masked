
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_buf {unsigned int len; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 unsigned int FUNC_1 (int,unsigned int) ;
 int FUNC_2 (struct xdr_buf*,unsigned int,char*,unsigned int) ;
 int FUNC_3 (struct xdr_buf*,unsigned int,char*,unsigned int) ;

__attribute__((used)) static void FUNC_4(struct xdr_buf *VAR_1, unsigned int VAR_2)
{
 char VAR_3[VAR_0];
 char VAR_4[VAR_0];
 unsigned int VAR_5, VAR_6;

 FUNC_0(VAR_2 > VAR_0);

 FUNC_2(VAR_1, 0, VAR_3, VAR_2);
 for (VAR_6 = 0; VAR_6 + VAR_2 < VAR_1->len; VAR_6 += VAR_0) {
  VAR_5 = FUNC_1(VAR_0, VAR_1->len - (VAR_6 + VAR_2));
  FUNC_2(VAR_1, VAR_6+VAR_2, VAR_4, VAR_5);
  FUNC_3(VAR_1, VAR_6, VAR_4, VAR_5);
 }
 FUNC_3(VAR_1, VAR_1->len - VAR_2, VAR_3, VAR_2);
}
