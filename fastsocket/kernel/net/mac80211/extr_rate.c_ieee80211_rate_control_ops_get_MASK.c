
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rate_control_ops {int dummy; } ;


 char const* VAR_0 ;
 char const* VAR_1 ;
 struct rate_control_ops* FUNC_0 (char const*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char*,char const*) ;
 scalar_t__ FUNC_4 (char const*) ;

__attribute__((used)) static struct rate_control_ops *
FUNC_5(const char *VAR_2)
{
 struct rate_control_ops *VAR_3;
 const char *VAR_4;

 FUNC_1(VAR_1);
 if (!VAR_2)
  VAR_4 = VAR_1;
 else
  VAR_4 = VAR_2;

 VAR_3 = FUNC_0(VAR_4);
 if (!VAR_3) {
  FUNC_3("rc80211_%s", VAR_4);
  VAR_3 = FUNC_0(VAR_4);
 }
 if (!VAR_3 && VAR_2)

  VAR_3 = FUNC_0(VAR_1);


 if (!VAR_3 && FUNC_4(VAR_0))
  VAR_3 = FUNC_0(VAR_0);
 FUNC_2(VAR_1);

 return VAR_3;
}
