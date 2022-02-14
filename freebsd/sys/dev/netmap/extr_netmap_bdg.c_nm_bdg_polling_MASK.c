
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nmreq_vale_polling {int dummy; } ;
struct nmreq_header {scalar_t__ nr_reqtype; scalar_t__ nr_body; } ;
struct netmap_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct netmap_adapter*) ;
 int FUNC_3 (struct netmap_adapter*) ;
 int FUNC_4 (struct nmreq_header*,struct netmap_adapter**,int *,int ) ;
 int FUNC_5 (struct nmreq_vale_polling*,struct netmap_adapter*) ;
 int FUNC_6 (struct netmap_adapter*) ;
 int FUNC_7 (struct netmap_adapter*) ;

int
FUNC_8(struct nmreq_header *VAR_3)
{
 struct nmreq_vale_polling *VAR_4 =
  (struct nmreq_vale_polling *)(uintptr_t)VAR_3->nr_body;
 struct netmap_adapter *VAR_5 = ((void*)0);
 int VAR_6 = 0;

 FUNC_0();
 VAR_6 = FUNC_4(VAR_3, &VAR_5, ((void*)0), 0);
 if (VAR_5 && !VAR_6) {
  if (!FUNC_7(VAR_5)) {
   VAR_6 = VAR_1;
  } else if (VAR_3->nr_reqtype == VAR_2) {
   VAR_6 = FUNC_5(VAR_4, VAR_5);
   if (!VAR_6)
    FUNC_2(VAR_5);
  } else {
   VAR_6 = FUNC_6(VAR_5);
   if (!VAR_6)
    FUNC_3(VAR_5);
  }
  FUNC_3(VAR_5);
 } else if (!VAR_5 && !VAR_6) {

  VAR_6 = VAR_0;
 }
 FUNC_1();

 return VAR_6;
}
