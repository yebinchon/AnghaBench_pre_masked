
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uds_ctx {int uc_fd; int uc_side; int uc_magic; scalar_t__ uc_owner; int uc_sun; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct uds_ctx*) ;
 struct uds_ctx* FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (char const*,int *) ;

__attribute__((used)) static int
FUNC_4(const char *VAR_4, void **VAR_5, int VAR_6)
{
 struct uds_ctx *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_1(sizeof(*VAR_7));
 if (VAR_7 == ((void*)0))
  return (VAR_3);


 if ((VAR_8 = FUNC_3(VAR_4, &VAR_7->uc_sun)) != 0) {
  FUNC_0(VAR_7);
  return (VAR_8);
 }

 VAR_7->uc_fd = FUNC_2(VAR_0, VAR_1, 0);
 if (VAR_7->uc_fd == -1) {
  VAR_8 = VAR_3;
  FUNC_0(VAR_7);
  return (VAR_8);
 }

 VAR_7->uc_side = VAR_6;
 VAR_7->uc_owner = 0;
 VAR_7->uc_magic = VAR_2;
 *VAR_5 = VAR_7;

 return (0);
}
