
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct apm_softc {int dummy; } ;
struct apm_info {int ai_acline; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct apm_info*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2(struct apm_softc *VAR_2)
{
 int VAR_3;
 struct apm_info VAR_4;
 static int VAR_5 = 0;

 if (FUNC_0(&VAR_4))
  return;

 if (VAR_5 != VAR_4.ai_acline) {
  VAR_5 = VAR_4.ai_acline;
  VAR_3 = VAR_5 ? VAR_1 : VAR_0;
  FUNC_1(VAR_3);
 }
}
