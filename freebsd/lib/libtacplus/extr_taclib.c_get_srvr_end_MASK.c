
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int length; } ;
struct tac_handle {int srvr_pos; TYPE_1__ response; } ;


 int FUNC_0 (struct tac_handle*,char*,int,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(struct tac_handle *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_1(VAR_0->response.length);

 if (VAR_0->srvr_pos != VAR_1) {
  FUNC_0(VAR_0, "Invalid length field in response "
         "from server: end expected at %u, response length %u",
         VAR_0->srvr_pos, VAR_1);
  return -1;
 }
 return 0;
}
