
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_ctx {scalar_t__ tc_magic; int tc_fd; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static int
FUNC_1(const void *VAR_1)
{
 const struct tcp_ctx *VAR_2 = VAR_1;

 FUNC_0(VAR_2 != ((void*)0));
 FUNC_0(VAR_2->tc_magic == VAR_0);

 return (VAR_2->tc_fd);
}
