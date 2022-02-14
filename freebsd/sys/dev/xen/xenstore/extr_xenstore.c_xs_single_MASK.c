
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct xs_transaction {int dummy; } ;
struct iovec {scalar_t__ iov_len; void* iov_base; } ;
typedef enum xsd_sockmsg_type { ____Placeholder_xsd_sockmsg_type } xsd_sockmsg_type ;


 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (struct xs_transaction,int,struct iovec*,int,int *,void**) ;

__attribute__((used)) static int
FUNC_2(struct xs_transaction VAR_0, enum xsd_sockmsg_type VAR_1,
    const char *VAR_2, u_int *VAR_3, void **VAR_4)
{
 struct iovec VAR_5;

 VAR_5.iov_base = (void *)(uintptr_t)VAR_2;
 VAR_5.iov_len = FUNC_0(VAR_2) + 1;

 return (FUNC_1(VAR_0, VAR_1, &VAR_5, 1, VAR_3, VAR_4));
}
