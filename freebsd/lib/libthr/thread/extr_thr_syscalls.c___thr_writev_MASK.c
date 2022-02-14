
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pthread {int dummy; } ;
struct iovec {int dummy; } ;
typedef scalar_t__ ssize_t ;


 scalar_t__ FUNC_0 (int,struct iovec const*,int) ;
 struct pthread* FUNC_1 () ;
 int FUNC_2 (struct pthread*) ;
 int FUNC_3 (struct pthread*,int) ;

__attribute__((used)) static ssize_t
FUNC_4(int VAR_0, const struct iovec *VAR_1, int VAR_2)
{
 struct pthread *VAR_3;
 ssize_t VAR_4;

 VAR_3 = FUNC_1();
 FUNC_2(VAR_3);
 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2);
 FUNC_3(VAR_3, (VAR_4 <= 0));
 return (VAR_4);
}
