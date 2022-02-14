
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ldns_status ;
typedef int ldns_resolver ;
typedef int ldns_pkt ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *) ;
 size_t* FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,size_t*) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int **,int *,int *) ;

ldns_status
FUNC_10(ldns_pkt **VAR_1, ldns_resolver *VAR_2,
       ldns_pkt *VAR_3)
{
 ldns_pkt *VAR_4 = ((void*)0);
 ldns_status VAR_5 = VAR_0;
 size_t *VAR_6;

 VAR_5 = FUNC_9(&VAR_4, (ldns_resolver *)VAR_2, VAR_3);
 if (VAR_5 != VAR_0) {
  if(VAR_4) {
   FUNC_1(VAR_4);
   VAR_4 = ((void*)0);
  }
 } else {


  if (!FUNC_8(VAR_2) && FUNC_5(VAR_2)) {
   if (FUNC_3(VAR_4)) {

    if (FUNC_0(VAR_3) == 0) {
     FUNC_2(VAR_3
       , 4096);
     FUNC_1(VAR_4);
     VAR_4 = ((void*)0);
     VAR_6 = FUNC_4(VAR_2);
     VAR_5 = FUNC_9(&VAR_4, VAR_2
       , VAR_3);
     FUNC_6(VAR_2, VAR_6);
    }

    if (VAR_5 != VAR_0 ||
        FUNC_3(VAR_4)) {
     FUNC_7(VAR_2, 1);
     FUNC_1(VAR_4);
     VAR_5 = FUNC_9(&VAR_4, VAR_2, VAR_3);
     FUNC_7(VAR_2, 0);
    }
   }
  }
 }

 if (VAR_1) {
  *VAR_1 = VAR_4;
 }

 return VAR_5;
}
