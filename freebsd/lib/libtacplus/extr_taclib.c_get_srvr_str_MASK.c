
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_long ;
struct TYPE_3__ {int * body; } ;
struct TYPE_4__ {TYPE_1__ u; int length; } ;
struct tac_handle {scalar_t__ srvr_pos; TYPE_2__ response; } ;
struct srvr_str {size_t len; int * data; } ;


 int FUNC_0 (struct tac_handle*,char*,char const*,int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(struct tac_handle *VAR_0, const char *VAR_1,
      struct srvr_str *VAR_2, size_t VAR_3)
{
 if (VAR_0->srvr_pos + VAR_3 > FUNC_1(VAR_0->response.length)) {
  FUNC_0(VAR_0, "Invalid length field in %s response from server "
         "(%lu > %lu)", VAR_1, (u_long)(VAR_0->srvr_pos + VAR_3),
         (u_long)FUNC_1(VAR_0->response.length));
  return -1;
 }
 VAR_2->data = VAR_3 != 0 ? VAR_0->response.u.body + VAR_0->srvr_pos : ((void*)0);
 VAR_2->len = VAR_3;
 VAR_0->srvr_pos += VAR_3;
 return 0;
}
