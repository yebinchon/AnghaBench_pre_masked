
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_consumer {int dummy; } ;


 int FUNC_0 (struct g_consumer*) ;
 int FUNC_1 (struct g_consumer*) ;
 scalar_t__ FUNC_2 (char const*,char*) ;

__attribute__((used)) static void
FUNC_3(struct g_consumer *VAR_0, const char *VAR_1)
{

 if (FUNC_2(VAR_1, "GEOM::media") == 0) {
  FUNC_0(VAR_0);
  return;
 }

 if (FUNC_2(VAR_1, "GEOM::physpath") == 0) {
  FUNC_1(VAR_0);
  return;
 }
}
