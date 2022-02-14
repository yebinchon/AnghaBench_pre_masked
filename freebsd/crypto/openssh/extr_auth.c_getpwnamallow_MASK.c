
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct ssh {int dummy; } ;
struct passwd {int pw_name; } ;
struct connection_info {char const* user; } ;
typedef int login_cap_t ;
typedef int auth_session_t ;
struct TYPE_4__ {int use_dns; int log_level; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char const*) ;
 int VAR_1 ;
 struct ssh* VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (struct passwd*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int *,int *,int ,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct ssh*,int ) ;
 int * FUNC_8 () ;
 scalar_t__ FUNC_9 (int *,struct passwd*) ;
 int FUNC_10 (char*,char const*) ;
 struct connection_info* FUNC_11 (int,int ) ;
 struct passwd* FUNC_12 (char const*) ;
 int FUNC_13 (int ) ;
 int * FUNC_14 (struct passwd*) ;
 int FUNC_15 (char*,char const*,int ,...) ;
 TYPE_1__ VAR_3 ;
 int FUNC_16 (TYPE_1__*,struct connection_info*) ;
 int FUNC_17 (struct ssh*,TYPE_1__*) ;
 struct passwd* FUNC_18 (struct passwd*) ;
 int FUNC_19 (char const*,int ,char*) ;
 int FUNC_20 (struct ssh*) ;
 int FUNC_21 (struct ssh*) ;
 scalar_t__ FUNC_22 (char const*,int ) ;

struct passwd *
FUNC_23(const char *VAR_4)
{
 struct ssh *VAR_5 = VAR_2;






 struct passwd *VAR_6;
 struct connection_info *VAR_7 = FUNC_11(1, VAR_3.use_dns);

 VAR_7->user = VAR_4;
 FUNC_16(&VAR_3, VAR_7);
 FUNC_13(VAR_3.log_level);
 FUNC_17(VAR_5, &VAR_3);





 VAR_6 = FUNC_12(VAR_4);
 if (VAR_6 == ((void*)0)) {
  FUNC_0(VAR_0, VAR_4);
  FUNC_15("Invalid user %.100s from %.100s port %d",
      VAR_4, FUNC_20(VAR_5), FUNC_21(VAR_5));







  return (((void*)0));
 }
 if (!FUNC_3(VAR_6))
  return (((void*)0));
 if (VAR_6 != ((void*)0))
  return (FUNC_18(VAR_6));
 return (((void*)0));
}
