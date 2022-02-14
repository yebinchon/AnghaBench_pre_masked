
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtnexthop {int dummy; } ;
struct rtmsg {int dummy; } ;
struct fib_info {int fib_nhs; } ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 int FUNC_1 (size_t) ;

__attribute__((used)) static inline size_t FUNC_2(struct fib_info *VAR_1)
{
 size_t VAR_2 = FUNC_0(sizeof(struct rtmsg))
    + FUNC_1(4)
    + FUNC_1(4)
    + FUNC_1(4)
    + FUNC_1(4);


 VAR_2 += FUNC_1((VAR_0 * FUNC_1(4)));

 if (VAR_1->fib_nhs) {



  size_t VAR_3 = FUNC_1(sizeof(struct rtnexthop));


  VAR_3 += 2 * FUNC_1(4);


  VAR_2 += FUNC_1(VAR_1->fib_nhs * VAR_3);
 }

 return VAR_2;
}
