
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct adreq {int dummy; } ;
struct TYPE_2__ {int * adh_remote; } ;


 int VAR_0 ;
 int FUNC_0 (struct adreq*,int *) ;
 struct adreq* FUNC_1 (int *) ;
 int FUNC_2 (int *,struct adreq*,int ) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct adreq*,int ,int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int,char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void
FUNC_9(void)
{
 struct adreq *VAR_7;

 FUNC_7(&VAR_4);
 if (VAR_1->adh_remote == ((void*)0)) {
  FUNC_8(&VAR_4);
  return;
 }
 FUNC_8(&VAR_4);

 FUNC_4(&VAR_3);
 VAR_7 = FUNC_1(&VAR_2);
 if (VAR_7 != ((void*)0))
  FUNC_2(&VAR_2, VAR_7, VAR_6);
 FUNC_5(&VAR_3);
 if (VAR_7 == ((void*)0))
  return;

 FUNC_3(VAR_7, VAR_0, ((void*)0), 0);

 FUNC_0(VAR_7, &VAR_5);

 FUNC_6(3, "keepalive_send: Request sent.");
}
