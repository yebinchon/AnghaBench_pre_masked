
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbuf {int dummy; } ;
struct ccb_smpio {int smp_request_len; int * smp_request; } ;


 int FUNC_0 (struct sbuf*,char*,int ) ;
 int FUNC_1 (int *,int ,struct sbuf*,char*,int,int) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;

void
FUNC_4(struct ccb_smpio *VAR_0, struct sbuf *VAR_1,
   char *VAR_2, int VAR_3, int VAR_4)
{
 FUNC_0(VAR_1, "%s. ", FUNC_2(VAR_0->smp_request[1]));





 VAR_3 -= FUNC_3(FUNC_2(VAR_0->smp_request[1])) + 2;

 FUNC_1(VAR_0->smp_request, VAR_0->smp_request_len, VAR_1,
      VAR_2, VAR_3, VAR_4);
}
