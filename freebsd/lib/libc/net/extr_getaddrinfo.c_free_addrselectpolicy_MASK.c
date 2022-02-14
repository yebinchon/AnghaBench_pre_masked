
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct policyqueue {int dummy; } ;
struct policyhead {int dummy; } ;


 struct policyqueue* FUNC_0 (struct policyhead*) ;
 struct policyqueue* FUNC_1 (struct policyqueue*,int ) ;
 int FUNC_2 (struct policyhead*,struct policyqueue*,int ) ;
 int FUNC_3 (struct policyqueue*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_4(struct policyhead *VAR_1)
{
 struct policyqueue *VAR_2, *VAR_3;

 for (VAR_2 = FUNC_0(VAR_1); VAR_2; VAR_2 = VAR_3) {
  VAR_3 = FUNC_1(VAR_2, VAR_0);
  FUNC_2(VAR_1, VAR_2, VAR_0);
  FUNC_3(VAR_2);
 }
}
