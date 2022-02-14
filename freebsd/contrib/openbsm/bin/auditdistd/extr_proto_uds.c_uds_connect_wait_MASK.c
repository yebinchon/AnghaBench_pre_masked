
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uds_ctx {scalar_t__ uc_magic; scalar_t__ uc_side; scalar_t__ uc_fd; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int
FUNC_1(void *VAR_2, int VAR_3)
{
 struct uds_ctx *VAR_4 = VAR_2;

 FUNC_0(VAR_4 != ((void*)0));
 FUNC_0(VAR_4->uc_magic == VAR_0);
 FUNC_0(VAR_4->uc_side == VAR_1);
 FUNC_0(VAR_4->uc_fd >= 0);
 FUNC_0(VAR_3 >= 0);

 return (0);
}
