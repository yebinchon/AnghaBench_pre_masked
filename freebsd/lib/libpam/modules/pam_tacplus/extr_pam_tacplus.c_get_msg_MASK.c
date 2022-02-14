
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tac_handle {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct tac_handle*) ;
 char* FUNC_2 (struct tac_handle*) ;
 int FUNC_3 (struct tac_handle*) ;

__attribute__((used)) static char *
FUNC_4(struct tac_handle *VAR_1)
{
 char *VAR_2;

 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2 == ((void*)0)) {
  FUNC_0(VAR_0, "tac_get_msg: %s", FUNC_3(VAR_1));
  FUNC_1(VAR_1);
  return ((void*)0);
 }
 return VAR_2;
}
