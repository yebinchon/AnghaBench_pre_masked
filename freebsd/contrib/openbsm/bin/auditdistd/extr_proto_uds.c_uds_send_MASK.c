
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uds_ctx {scalar_t__ uc_magic; scalar_t__ uc_fd; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__,unsigned char const*,size_t,int) ;

__attribute__((used)) static int
FUNC_2(void *VAR_1, const unsigned char *VAR_2, size_t VAR_3, int VAR_4)
{
 struct uds_ctx *VAR_5 = VAR_1;

 FUNC_0(VAR_5 != ((void*)0));
 FUNC_0(VAR_5->uc_magic == VAR_0);
 FUNC_0(VAR_5->uc_fd >= 0);

 return (FUNC_1(VAR_5->uc_fd, VAR_2, VAR_3, VAR_4));
}
