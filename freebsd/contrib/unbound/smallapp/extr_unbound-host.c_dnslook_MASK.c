
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ub_result {int nxdomain; } ;
struct ub_ctx {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (char*,int,int,struct ub_result*,int) ;
 int VAR_0 ;
 int FUNC_3 (struct ub_ctx*,char*,int,int,struct ub_result**) ;
 int FUNC_4 (struct ub_result*) ;
 char* FUNC_5 (int) ;

__attribute__((used)) static int
FUNC_6(struct ub_ctx* VAR_1, char* VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6;
 struct ub_result* VAR_7;

 VAR_6 = FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4, &VAR_7);
 if(VAR_6 != 0) {
  FUNC_1(VAR_0, "resolve error: %s\n", FUNC_5(VAR_6));
  FUNC_0(1);
 }
 FUNC_2(VAR_2, VAR_3, VAR_4, VAR_7, VAR_5);
 VAR_6 = VAR_7->nxdomain;
 FUNC_4(VAR_7);
 return VAR_6;
}
