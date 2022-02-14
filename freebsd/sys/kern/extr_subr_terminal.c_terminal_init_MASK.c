
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct terminal {int tm_flags; int tm_emulator; int tm_mtx; } ;
struct TYPE_5__ {int ta_fgcolor; int ta_bgcolor; } ;
struct TYPE_4__ {int ta_fgcolor; int ta_bgcolor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int*) ;
 TYPE_1__ VAR_6 ;
 TYPE_2__ VAR_7 ;
 int FUNC_1 (int *,char*,int *,int ) ;
 int FUNC_2 (int *,int *,struct terminal*) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int VAR_8 ;

__attribute__((used)) static void
FUNC_4(struct terminal *VAR_9)
{
 int VAR_10, VAR_11;

 if (VAR_9->tm_flags & VAR_5)
  FUNC_1(&VAR_9->tm_mtx, "trmlck", ((void*)0), VAR_0);

 FUNC_2(&VAR_9->tm_emulator, &VAR_8, VAR_9);

 VAR_10 = VAR_11 = -1;
 FUNC_0("teken.fg_color", &VAR_10);
 FUNC_0("teken.bg_color", &VAR_11);

 if (VAR_10 != -1) {
  VAR_6.ta_fgcolor = VAR_10;
  VAR_7.ta_fgcolor = VAR_10;
 }
 if (VAR_11 != -1) {
  VAR_6.ta_bgcolor = VAR_11;
  VAR_7.ta_bgcolor = VAR_11;
 }

 if (VAR_6.ta_bgcolor == VAR_4) {
  VAR_6.ta_bgcolor |= VAR_2;
  VAR_7.ta_bgcolor |= VAR_2;
 }

 if (VAR_6.ta_bgcolor == VAR_1 &&
     VAR_6.ta_fgcolor < VAR_3)
  VAR_7.ta_fgcolor |= VAR_2;
 FUNC_3(&VAR_9->tm_emulator, &VAR_6);
}
