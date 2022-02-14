
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tac_handle {int dummy; } ;
struct clnt_str {size_t len; int * data; } ;


 int FUNC_0 (struct clnt_str*) ;
 int FUNC_1 (int *,void const*,size_t) ;
 int * FUNC_2 (struct tac_handle*,size_t) ;

__attribute__((used)) static int
FUNC_3(struct tac_handle *VAR_0, struct clnt_str *VAR_1, const void *VAR_2,
    size_t VAR_3)
{
 FUNC_0(VAR_1);
 if (VAR_2 != ((void*)0) && VAR_3 != 0) {
  if ((VAR_1->data = FUNC_2(VAR_0, VAR_3)) == ((void*)0))
   return -1;
  VAR_1->len = VAR_3;
  FUNC_1(VAR_1->data, VAR_2, VAR_3);
 }
 return 0;
}
