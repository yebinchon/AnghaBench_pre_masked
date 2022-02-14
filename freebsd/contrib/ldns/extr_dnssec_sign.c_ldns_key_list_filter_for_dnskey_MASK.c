
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ldns_signing_algorithm ;
typedef int ldns_key_list ;
typedef int ldns_key ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,size_t) ;
 size_t FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static void
FUNC_5(ldns_key_list *VAR_2, int VAR_3)
{
 bool VAR_4[256]

                 = { 0 }

                            ;
 ldns_signing_algorithm VAR_5 = 0;
 ldns_key *VAR_6;
 size_t VAR_7;

 if (!FUNC_3(VAR_2))
  return;

 for (VAR_7 = 0; VAR_7 < FUNC_3(VAR_2); VAR_7++) {
  VAR_6 = FUNC_2(VAR_2, VAR_7);
  if ((FUNC_1(VAR_6) & VAR_0) && !VAR_5)
   VAR_5 = FUNC_0(VAR_6);
  VAR_4[FUNC_0(VAR_6)] = 1;
 }
 if (!VAR_5)
  return;
 else
  VAR_4[VAR_5] = 0;

 for (VAR_7 =0; VAR_7 < FUNC_3(VAR_2); VAR_7++) {
  VAR_6 = FUNC_2(VAR_2, VAR_7);
  if (!(FUNC_1(VAR_6) & VAR_0)) {



   if ((VAR_3 & VAR_1) &&
       VAR_4[FUNC_0(VAR_6)])
    VAR_4[FUNC_0(VAR_6)] = 0;
   else
    FUNC_4(VAR_6, 0);
  }
 }
}
