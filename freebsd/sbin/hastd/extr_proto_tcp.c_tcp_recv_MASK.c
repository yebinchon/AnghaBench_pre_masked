
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_ctx {scalar_t__ tc_magic; scalar_t__ tc_fd; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__,unsigned char*,size_t,int *) ;

__attribute__((used)) static int
FUNC_2(void *VAR_1, unsigned char *VAR_2, size_t VAR_3, int *VAR_4)
{
 struct tcp_ctx *VAR_5 = VAR_1;

 FUNC_0(VAR_5 != ((void*)0));
 FUNC_0(VAR_5->tc_magic == VAR_0);
 FUNC_0(VAR_5->tc_fd >= 0);
 FUNC_0(VAR_4 == ((void*)0));

 return (FUNC_1(VAR_5->tc_fd, VAR_2, VAR_3, ((void*)0)));
}
