
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ldns_rr_list ;
typedef int ldns_rr ;
typedef int ldns_resolver ;


 int * FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int * FUNC_3 (int *,size_t) ;
 size_t FUNC_4 (int *) ;

bool
FUNC_5(const ldns_resolver *VAR_0, ldns_rr_list * VAR_1, ldns_rr_list * VAR_2)
{
  size_t VAR_3;
  bool VAR_4 = 0;

  ldns_rr_list * VAR_5;
  ldns_rr * VAR_6;

  if (!VAR_0 || !VAR_1) { return 0; }

  VAR_5 = FUNC_0(VAR_0);

  if (!VAR_5) { return 0; }

  for (VAR_3 = 0; VAR_3 < FUNC_4(VAR_1); VAR_3++) {

    VAR_6 = FUNC_3(VAR_1, VAR_3);
    if (FUNC_1(VAR_5, VAR_6)) {
      if (VAR_2) { FUNC_2(VAR_2, VAR_6); }
      VAR_4 = 1;
    }
  }

  return VAR_4;
}
