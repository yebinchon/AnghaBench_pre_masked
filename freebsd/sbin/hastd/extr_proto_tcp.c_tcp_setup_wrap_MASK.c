
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ss_family; } ;
struct tcp_ctx {int tc_fd; int tc_side; int tc_magic; TYPE_1__ tc_sa; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct tcp_ctx* FUNC_1 (int) ;

__attribute__((used)) static int
FUNC_2(int VAR_5, int VAR_6, void **VAR_7)
{
 struct tcp_ctx *VAR_8;

 FUNC_0(VAR_5 >= 0);
 FUNC_0(VAR_6 == VAR_2 ||
     VAR_6 == VAR_3);
 FUNC_0(VAR_7 != ((void*)0));

 VAR_8 = FUNC_1(sizeof(*VAR_8));
 if (VAR_8 == ((void*)0))
  return (VAR_4);

 VAR_8->tc_fd = VAR_5;
 VAR_8->tc_sa.ss_family = VAR_0;
 VAR_8->tc_side = VAR_6;
 VAR_8->tc_magic = VAR_1;
 *VAR_7 = VAR_8;

 return (0);
}
