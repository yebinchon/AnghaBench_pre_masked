
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct respip_set {int region; } ;
struct resp_addr {scalar_t__ action; } ;


 int FUNC_0 (char*,char const*,char const*) ;
 int FUNC_1 (int ,struct resp_addr*,char const*,char const*) ;
 struct resp_addr* FUNC_2 (struct respip_set*,char const*,int ) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static int
FUNC_3(struct respip_set* VAR_1, const char* VAR_2, const char* VAR_3)
{
 struct resp_addr* VAR_4;

 VAR_4=FUNC_2(VAR_1, VAR_2, 0);
 if(!VAR_4 || VAR_4->action == VAR_0) {
  FUNC_0("cannot parse response-ip-data %s: "
   "response-ip node for %s not found", VAR_3, VAR_2);
  return 0;
 }
 return FUNC_1(VAR_1->region, VAR_4, VAR_3, VAR_2);
}
