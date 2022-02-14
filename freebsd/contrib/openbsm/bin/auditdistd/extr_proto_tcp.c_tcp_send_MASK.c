
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_ctx {scalar_t__ tc_magic; scalar_t__ tc_side; int tc_wait_called; scalar_t__ tc_fd; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (scalar_t__,unsigned char const*,size_t,int) ;

__attribute__((used)) static int
FUNC_2(void *VAR_3, const unsigned char *VAR_4, size_t VAR_5, int VAR_6)
{
 struct tcp_ctx *VAR_7 = VAR_3;

 FUNC_0(VAR_7 != ((void*)0));
 FUNC_0(VAR_7->tc_magic == VAR_0);
 FUNC_0(VAR_7->tc_side == VAR_1 ||
     VAR_7->tc_side == VAR_2);
 FUNC_0(VAR_7->tc_wait_called);
 FUNC_0(VAR_7->tc_fd >= 0);
 FUNC_0(VAR_6 == -1);

 return (FUNC_1(VAR_7->tc_fd, VAR_4, VAR_5, -1));
}
