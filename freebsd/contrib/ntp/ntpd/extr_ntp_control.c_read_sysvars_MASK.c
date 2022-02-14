
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
typedef int u_char ;
struct ctl_var {int flags; size_t code; char* text; } ;
struct TYPE_2__ {int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ctl_var*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct ctl_var* FUNC_4 (struct ctl_var*,char**) ;
 int FUNC_5 (char const*,int ,int ) ;
 int FUNC_6 (int) ;
 scalar_t__ VAR_5 ;
 int FUNC_7 () ;
 int* VAR_6 ;
 int* FUNC_8 (size_t) ;
 struct ctl_var* VAR_7 ;
 int FUNC_9 (int*) ;
 int FUNC_10 (int ) ;
 scalar_t__ VAR_8 ;
 TYPE_1__ VAR_9 ;
 int FUNC_11 (char const*) ;
 struct ctl_var* VAR_10 ;

__attribute__((used)) static void
FUNC_12(void)
{
 const struct ctl_var *VAR_11;
 struct ctl_var *VAR_12;
 u_int VAR_13;
 u_int VAR_14;
 const u_char *VAR_15;
 char * VAR_16;
 const char * VAR_17;
 u_char *VAR_18;
 size_t VAR_19;





 VAR_9.status = FUNC_10(FUNC_7());
 if (VAR_8)
  VAR_5 = 0;
 VAR_19 = VAR_2 + 1 + FUNC_1(VAR_7);
 VAR_18 = FUNC_8(VAR_19);
 VAR_14 = 0;
 while (((void*)0) != (VAR_11 = FUNC_4(VAR_10, &VAR_16))) {
  if (!(VAR_4 & VAR_11->flags)) {
   FUNC_0(VAR_11->code < VAR_19);
   VAR_18[VAR_11->code] = 1;
   VAR_14 = 1;
  } else {
   VAR_11 = FUNC_4(VAR_7, &VAR_16);
   if (((void*)0) == VAR_11) {
    FUNC_2(VAR_0);
    FUNC_9(VAR_18);
    return;
   }
   if (VAR_4 & VAR_11->flags) {
    FUNC_2(VAR_1);
    FUNC_9(VAR_18);
    return;
   }
   VAR_13 = VAR_11->code + VAR_2 + 1;
   FUNC_0(VAR_13 < VAR_19);
   VAR_18[VAR_13] = 1;
   VAR_14 = 1;
  }
 }
 if (VAR_14) {
  for (VAR_13 = 1; VAR_13 <= VAR_2; VAR_13++)
   if (VAR_18[VAR_13])
    FUNC_6(VAR_13);
  for (VAR_13 = 0; VAR_13 + VAR_2 + 1 < VAR_19; VAR_13++)
   if (VAR_18[VAR_13 + VAR_2 + 1]) {
    VAR_17 = VAR_7[VAR_13].text;
    FUNC_5(VAR_17, FUNC_11(VAR_17), 0);
   }
 } else {
  for (VAR_15 = VAR_6; *VAR_15 != 0; VAR_15++)
   FUNC_6((int)*VAR_15);
  for (VAR_12 = VAR_7; VAR_12 && !(VAR_4 & VAR_12->flags); VAR_12++)
   if (VAR_3 & VAR_12->flags)
    FUNC_5(VAR_12->text, FUNC_11(VAR_12->text),
         0);
 }
 FUNC_9(VAR_18);
 FUNC_3(0);
}
