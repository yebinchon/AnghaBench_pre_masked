
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xs_transaction {int dummy; } ;
struct sbuf {int dummy; } ;
struct iovec {scalar_t__ iov_len; void* iov_base; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sbuf*) ;
 int FUNC_1 (struct sbuf*) ;
 scalar_t__ FUNC_2 (struct sbuf*) ;
 scalar_t__ FUNC_3 (char const*) ;
 struct sbuf* FUNC_4 (char const*,char const*) ;
 int FUNC_5 (struct xs_transaction,int ,struct iovec*,int,int *,int *) ;

int
FUNC_6(struct xs_transaction VAR_1, const char *VAR_2, const char *VAR_3,
    const char *VAR_4)
{
 struct sbuf *VAR_5;
 struct iovec VAR_6[2];
 int VAR_7;

 VAR_5 = FUNC_4(VAR_2, VAR_3);

 VAR_6[0].iov_base = (void *)(uintptr_t) FUNC_0(VAR_5);
 VAR_6[0].iov_len = FUNC_2(VAR_5) + 1;
 VAR_6[1].iov_base = (void *)(uintptr_t) VAR_4;
 VAR_6[1].iov_len = FUNC_3(VAR_4);

 VAR_7 = FUNC_5(VAR_1, VAR_0, VAR_6, 2, ((void*)0), ((void*)0));
 FUNC_1(VAR_5);

 return (VAR_7);
}
