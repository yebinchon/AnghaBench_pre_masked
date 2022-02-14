
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct pthread {int dummy; } ;
typedef scalar_t__ ssize_t ;
typedef int socklen_t ;


 scalar_t__ FUNC_0 (int,void const*,size_t,int,struct sockaddr const*,int ) ;
 struct pthread* FUNC_1 () ;
 int FUNC_2 (struct pthread*) ;
 int FUNC_3 (struct pthread*,int) ;

__attribute__((used)) static ssize_t
FUNC_4(int VAR_0, const void *VAR_1, size_t VAR_2, int VAR_3, const struct sockaddr *VAR_4,
    socklen_t VAR_5)
{
 struct pthread *VAR_6;
 ssize_t VAR_7;

 VAR_6 = FUNC_1();
 FUNC_2(VAR_6);
 VAR_7 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 FUNC_3(VAR_6, VAR_7 <= 0);
 return (VAR_7);
}
