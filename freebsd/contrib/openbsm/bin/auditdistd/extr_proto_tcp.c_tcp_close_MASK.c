
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_ctx {scalar_t__ tc_magic; scalar_t__ tc_fd; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct tcp_ctx*) ;

__attribute__((used)) static void
FUNC_3(void *VAR_1)
{
 struct tcp_ctx *VAR_2 = VAR_1;

 FUNC_0(VAR_2 != ((void*)0));
 FUNC_0(VAR_2->tc_magic == VAR_0);

 if (VAR_2->tc_fd >= 0)
  FUNC_1(VAR_2->tc_fd);
 VAR_2->tc_magic = 0;
 FUNC_2(VAR_2);
}
