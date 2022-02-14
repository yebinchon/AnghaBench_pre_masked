
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wps_registrar {struct wps_pbc_session* pbc_sessions; } ;
struct os_reltime {int dummy; } ;
struct wps_pbc_session {struct wps_pbc_session* next; struct os_reltime timestamp; int uuid_e; int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct os_reltime*) ;
 scalar_t__ FUNC_1 (int ,int const*,int ) ;
 int FUNC_2 (int ,int const*,int ) ;
 scalar_t__ FUNC_3 (struct os_reltime*,struct os_reltime*,int ) ;
 struct wps_pbc_session* FUNC_4 (int) ;
 int FUNC_5 (struct wps_pbc_session*) ;

__attribute__((used)) static void FUNC_6(struct wps_registrar *VAR_3,
       const u8 *VAR_4, const u8 *VAR_5)
{
 struct wps_pbc_session *VAR_6, *VAR_7 = ((void*)0);
 struct os_reltime VAR_8;

 FUNC_0(&VAR_8);

 VAR_6 = VAR_3->pbc_sessions;
 while (VAR_6) {
  if (FUNC_1(VAR_6->addr, VAR_4, VAR_0) == 0 &&
      FUNC_1(VAR_6->uuid_e, VAR_5, VAR_2) == 0) {
   if (VAR_7)
    VAR_7->next = VAR_6->next;
   else
    VAR_3->pbc_sessions = VAR_6->next;
   break;
  }
  VAR_7 = VAR_6;
  VAR_6 = VAR_6->next;
 }

 if (!VAR_6) {
  VAR_6 = FUNC_4(sizeof(*VAR_6));
  if (VAR_6 == ((void*)0))
   return;
  FUNC_2(VAR_6->addr, VAR_4, VAR_0);
  if (VAR_5)
   FUNC_2(VAR_6->uuid_e, VAR_5, VAR_2);
 }

 VAR_6->next = VAR_3->pbc_sessions;
 VAR_3->pbc_sessions = VAR_6;
 VAR_6->timestamp = VAR_8;


 VAR_7 = VAR_6;
 VAR_6 = VAR_6->next;

 while (VAR_6) {
  if (FUNC_3(&VAR_8, &VAR_6->timestamp,
           VAR_1)) {
   VAR_7->next = ((void*)0);
   FUNC_5(VAR_6);
   break;
  }
  VAR_7 = VAR_6;
  VAR_6 = VAR_6->next;
 }
}
