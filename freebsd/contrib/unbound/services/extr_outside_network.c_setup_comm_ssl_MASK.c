
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct outside_network {int sslctx; } ;
struct comm_point {int ssl; int ssl_shake_state; } ;
typedef int X509_VERIFY_PARAM ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int VAR_1 ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct comm_point*,int ) ;
 int VAR_2 ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static int
FUNC_9(struct comm_point* VAR_3, struct outside_network* VAR_4,
 int VAR_5, char* VAR_6)
{
 VAR_3->ssl = FUNC_7(VAR_4->sslctx, VAR_5);
 if(!VAR_3->ssl) {
  FUNC_6("cannot create SSL object");
  return 0;
 }



 VAR_3->ssl_shake_state = VAR_2;
 (void)VAR_6;

 return 1;
}
