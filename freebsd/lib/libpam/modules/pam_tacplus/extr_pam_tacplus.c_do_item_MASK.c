
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tac_handle {int dummy; } ;
typedef int (* set_func ) (struct tac_handle*,char const*) ;
typedef int pam_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int,void const**) ;
 int FUNC_1 (struct tac_handle*,char const*) ;
 int FUNC_2 (int ,char*,char const*,int ) ;
 int FUNC_3 (struct tac_handle*) ;
 int FUNC_4 (struct tac_handle*) ;

__attribute__((used)) static int
FUNC_5(pam_handle_t *VAR_3, struct tac_handle *VAR_4, int VAR_5,
    set_func VAR_6, const char *VAR_7)
{
 int VAR_8;
 const void *VAR_9;

 VAR_8 = FUNC_0(VAR_3, VAR_5, &VAR_9);
 if (VAR_8 != VAR_2)
     return VAR_8;
 if (VAR_9 != ((void*)0) && (*VAR_6)(VAR_4, (const char *)VAR_9) == -1) {
  FUNC_2(VAR_0, "%s: %s", VAR_7, FUNC_4(VAR_4));
  FUNC_3(VAR_4);
  return VAR_1;
 }
 return VAR_2;
}
