
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct apm_softc {int sc_flags; size_t event_count; scalar_t__* event_filter; size_t event_ptr; int sc_rsel; struct apm_event_info* event_list; } ;
struct apm_event_info {size_t type; scalar_t__ index; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static int
FUNC_1(struct apm_softc *VAR_5, u_int VAR_6)
{
 struct apm_event_info *VAR_7;

 if ((VAR_5->sc_flags & VAR_3) == 0)
  return 1;
 if (VAR_5->event_count == VAR_0)
  return 1;
 if (VAR_5->event_filter[VAR_6] == 0)
  return 1;
 VAR_7 = &VAR_5->event_list[VAR_5->event_ptr];
 VAR_5->event_count++;
 VAR_5->event_ptr++;
 VAR_5->event_ptr %= VAR_0;
 VAR_7->type = VAR_6;
 VAR_7->index = ++VAR_4;
 FUNC_0(&VAR_5->sc_rsel, VAR_1);
 return (VAR_5->sc_flags & VAR_2) ? 0 : 1;
}
