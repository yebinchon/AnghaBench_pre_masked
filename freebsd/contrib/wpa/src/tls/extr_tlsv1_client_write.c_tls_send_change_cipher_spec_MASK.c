
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tlsv1_client {int session_resumed; int state; scalar_t__ use_session_ticket; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct tlsv1_client*,int **,int *) ;
 scalar_t__ FUNC_3 (struct tlsv1_client*,int **,int *) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static u8 * FUNC_5(struct tlsv1_client *VAR_2,
     size_t *VAR_3)
{
 u8 *VAR_4, *VAR_5, *VAR_6;

 *VAR_3 = 0;

 VAR_4 = FUNC_1(1000);
 if (VAR_4 == ((void*)0))
  return ((void*)0);

 VAR_6 = VAR_4;
 VAR_5 = VAR_4 + 1000;

 if (FUNC_2(VAR_2, &VAR_6, VAR_5) < 0 ||
     FUNC_3(VAR_2, &VAR_6, VAR_5) < 0) {
  FUNC_0(VAR_4);
  return ((void*)0);
 }

 *VAR_3 = VAR_6 - VAR_4;

 FUNC_4(VAR_1, "TLSv1: Session resumption completed "
     "successfully");
 if (!VAR_2->session_resumed && VAR_2->use_session_ticket)
  VAR_2->session_resumed = 1;
 VAR_2->state = VAR_0;

 return VAR_4;
}
