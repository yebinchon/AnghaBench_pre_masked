
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int16_t ;
struct TYPE_3__ {scalar_t__ body; } ;
struct TYPE_4__ {int length; TYPE_1__ u; } ;
struct tac_handle {TYPE_2__ request; } ;
struct clnt_str {size_t len; int * data; } ;


 int VAR_0 ;
 int FUNC_0 (struct clnt_str*) ;
 int FUNC_1 (struct tac_handle*,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (size_t) ;
 int FUNC_4 (scalar_t__,int *,size_t) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(struct tac_handle *VAR_1, u_int16_t *VAR_2, struct clnt_str *VAR_3)
{
 size_t VAR_4;

 VAR_4 = VAR_3->len;
 if (VAR_3->data == ((void*)0))
  VAR_4 = 0;
 if (VAR_4 != 0) {
  int VAR_5;

  if (VAR_4 > 0xffff) {
   FUNC_1(VAR_1, "Field too long");
   return -1;
  }
  VAR_5 = FUNC_5(VAR_1->request.length);
  if (VAR_5 + VAR_4 > VAR_0) {
   FUNC_1(VAR_1, "Message too long");
   return -1;
  }
  FUNC_4(VAR_1->request.u.body + VAR_5, VAR_3->data, VAR_4);
  VAR_1->request.length = FUNC_2(VAR_5 + VAR_4);
 }
 *VAR_2 = FUNC_3(VAR_4);
 FUNC_0(VAR_3);
 return 0;
}
