
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
typedef int u_char ;
struct peer {scalar_t__ num_events; } ;
struct ctl_var {int flags; size_t code; } ;
struct TYPE_2__ {int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (int*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct ctl_var* FUNC_5 (int ,char**) ;
 int FUNC_6 (int,struct peer*) ;
 int FUNC_7 (struct peer*) ;
 int* VAR_4 ;
 struct peer* FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_1__ VAR_8 ;

__attribute__((used)) static void
FUNC_10(void)
{
 const struct ctl_var *VAR_9;
 struct peer *VAR_10;
 const u_char *VAR_11;
 size_t VAR_12;
 char * VAR_13;
 u_char VAR_14[VAR_2 + 1];
 u_int VAR_15;





 VAR_10 = FUNC_8(VAR_6);
 if (((void*)0) == VAR_10) {
  FUNC_3(VAR_0);
  return;
 }
 VAR_8.status = FUNC_9(FUNC_7(VAR_10));
 if (VAR_7)
  VAR_10->num_events = 0;
 FUNC_2(VAR_14);
 VAR_15 = 0;
 while (((void*)0) != (VAR_9 = FUNC_5(VAR_5, &VAR_13))) {
  if (VAR_9->flags & VAR_3) {
   FUNC_3(VAR_1);
   return;
  }
  FUNC_1(VAR_9->code < FUNC_0(VAR_14));
  VAR_14[VAR_9->code] = 1;
  VAR_15 = 1;
 }
 if (VAR_15) {
  for (VAR_12 = 1; VAR_12 < FUNC_0(VAR_14); VAR_12++)
   if (VAR_14[VAR_12])
    FUNC_6(VAR_12, VAR_10);
 } else
  for (VAR_11 = VAR_4; *VAR_11 != 0; VAR_11++)
   FUNC_6((int)*VAR_11, VAR_10);
 FUNC_4(0);
}
