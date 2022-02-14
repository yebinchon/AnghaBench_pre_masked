
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct msghdr {int dummy; } ;
struct kiocb {int dummy; } ;


 int FUNC_0 (struct kiocb*,struct socket*,struct msghdr*,size_t,int) ;
 int FUNC_1 (struct socket*,struct msghdr*,size_t,int) ;

__attribute__((used)) static inline int FUNC_2(struct kiocb *VAR_0, struct socket *VAR_1,
     struct msghdr *VAR_2, size_t VAR_3, int VAR_4)
{
 int VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);

 return VAR_5 ?: FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
}
