
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct msghdr {int dummy; } ;
struct kiocb {int dummy; } ;


 int FUNC_0 (struct kiocb*,struct socket*,struct msghdr*,size_t) ;
 int FUNC_1 (struct socket*,struct msghdr*,size_t) ;

__attribute__((used)) static inline int FUNC_2(struct kiocb *VAR_0, struct socket *VAR_1,
     struct msghdr *VAR_2, size_t VAR_3)
{
 int VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_3);

 return VAR_4 ?: FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
}
