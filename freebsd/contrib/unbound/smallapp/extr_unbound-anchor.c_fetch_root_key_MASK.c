
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ub_result {int dummy; } ;
struct ub_ctx {int dummy; } ;


 int FUNC_0 (struct ub_ctx*,char const*) ;
 struct ub_ctx* FUNC_1 (char const*,char const*,char const*,int,int) ;
 struct ub_result* FUNC_2 (struct ub_ctx*) ;
 int FUNC_3 (struct ub_ctx*) ;

__attribute__((used)) static struct ub_result *
FUNC_4(const char* VAR_0, const char* VAR_1,
 const char* VAR_2, const char* VAR_3,
 int VAR_4, int VAR_5)
{
 struct ub_ctx* VAR_6;
 struct ub_result* VAR_7;

 VAR_6 = FUNC_1(VAR_1, VAR_2, VAR_3,
  VAR_4, VAR_5);
 FUNC_0(VAR_6, VAR_0);
 VAR_7 = FUNC_2(VAR_6);
 FUNC_3(VAR_6);
 return VAR_7;
}
