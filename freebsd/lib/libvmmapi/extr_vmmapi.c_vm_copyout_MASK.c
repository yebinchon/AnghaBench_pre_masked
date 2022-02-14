
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmctx {int dummy; } ;
struct iovec {char* iov_base; int iov_len; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char const*,char*,size_t) ;
 size_t FUNC_2 (size_t,int ) ;

void
FUNC_3(struct vmctx *VAR_0, int VAR_1, const void *VAR_2, struct iovec *VAR_3,
    size_t VAR_4)
{
 const char *VAR_5;
 char *VAR_6;
 size_t VAR_7;

 VAR_5 = VAR_2;
 while (VAR_4) {
  FUNC_0(VAR_3->iov_len);
  VAR_7 = FUNC_2(VAR_4, VAR_3->iov_len);
  VAR_6 = VAR_3->iov_base;
  FUNC_1(VAR_5, VAR_6, VAR_7);

  VAR_3++;
  VAR_5 += VAR_7;
  VAR_4 -= VAR_7;
 }
}
