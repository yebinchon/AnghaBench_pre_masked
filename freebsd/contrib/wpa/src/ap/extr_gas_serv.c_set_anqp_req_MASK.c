
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct anqp_query_info {unsigned int request; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char const*) ;

__attribute__((used)) static void FUNC_1(unsigned int VAR_1, const char *VAR_2, int VAR_3,
    struct anqp_query_info *VAR_4)
{
 VAR_4->request |= VAR_1;
 if (VAR_3) {
  FUNC_0(VAR_0, "ANQP: %s (local)", VAR_2);
 } else {
  FUNC_0(VAR_0, "ANQP: %s not available", VAR_2);
 }
}
