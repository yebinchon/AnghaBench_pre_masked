
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct respip_set {int dummy; } ;
struct resp_addr {scalar_t__ action; } ;
typedef enum respip_action { ____Placeholder_respip_action } respip_action ;


 int VAR_0 ;
 int FUNC_0 (char*,char const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct resp_addr* FUNC_1 (struct respip_set*,char const*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (char const*,char*) ;
 int FUNC_3 (int ,char*,char const*) ;

__attribute__((used)) static int
FUNC_4(struct respip_set* VAR_10, const char* VAR_11,
 const char* VAR_12)
{
 struct resp_addr* VAR_13;
 enum respip_action VAR_14;

 if(!(VAR_13=FUNC_1(VAR_10, VAR_11, 1)))
  return 0;
 if(VAR_13->action != VAR_8) {
  FUNC_3(VAR_0, "duplicate response-ip action for '%s', overridden.",
   VAR_11);
 }
        if(FUNC_2(VAR_12, "deny") == 0)
                VAR_14 = VAR_4;
        else if(FUNC_2(VAR_12, "redirect") == 0)
                VAR_14 = VAR_9;
        else if(FUNC_2(VAR_12, "inform") == 0)
                VAR_14 = VAR_5;
        else if(FUNC_2(VAR_12, "inform_deny") == 0)
                VAR_14 = VAR_6;
        else if(FUNC_2(VAR_12, "inform_redirect") == 0)
                VAR_14 = VAR_7;
        else if(FUNC_2(VAR_12, "always_transparent") == 0)
                VAR_14 = VAR_3;
        else if(FUNC_2(VAR_12, "always_refuse") == 0)
                VAR_14 = VAR_2;
        else if(FUNC_2(VAR_12, "always_nxdomain") == 0)
                VAR_14 = VAR_1;
        else {
                FUNC_0("unknown response-ip action %s", VAR_12);
                return 0;
        }
 VAR_13->action = VAR_14;
 return 1;
}
