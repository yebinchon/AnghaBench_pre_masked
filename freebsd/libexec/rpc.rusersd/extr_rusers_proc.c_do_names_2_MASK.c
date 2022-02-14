
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int utmpidlearr_len; TYPE_5__* utmpidlearr_val; } ;
typedef TYPE_3__ utmpidlearr ;
typedef int ut ;
struct TYPE_9__ {int tv_sec; } ;
struct utmpx {scalar_t__ ut_type; int ut_host; int ut_line; TYPE_1__ ut_tv; } ;
struct TYPE_10__ {int ut_host; int ut_name; int ut_line; int ut_time; } ;
struct TYPE_13__ {TYPE_2__ ui_utmp; int ui_idle; } ;
struct TYPE_12__ {int ut_host; int ut_user; int ut_line; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 struct utmpx* FUNC_2 () ;
 int FUNC_3 (TYPE_4__*,struct utmpx*,int) ;
 int FUNC_4 (TYPE_3__*,int ,int) ;
 int FUNC_5 () ;
 TYPE_5__* VAR_2 ;
 TYPE_4__* VAR_3 ;

__attribute__((used)) static utmpidlearr *
FUNC_6(void)
{
 static utmpidlearr VAR_4;
 struct utmpx *VAR_5;
 int VAR_6 = 0;

 FUNC_4(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.utmpidlearr_val = &VAR_2[0];

 FUNC_5();
 while ((VAR_5 = FUNC_2()) != ((void*)0) && VAR_6 < VAR_0) {
  if (VAR_5->ut_type != VAR_1)
   continue;

  FUNC_3(&VAR_3[VAR_6], VAR_5, sizeof(*VAR_5));
  VAR_2[VAR_6].ui_utmp.ut_time = VAR_5->ut_tv.tv_sec;
  VAR_2[VAR_6].ui_idle =
      FUNC_1(VAR_5->ut_line, VAR_5->ut_host);
  VAR_2[VAR_6].ui_utmp.ut_line =
      VAR_3[VAR_6].ut_line;
  VAR_2[VAR_6].ui_utmp.ut_name =
      VAR_3[VAR_6].ut_user;
  VAR_2[VAR_6].ui_utmp.ut_host =
      VAR_3[VAR_6].ut_host;

  VAR_6++;
 }
 FUNC_0();

 VAR_4.utmpidlearr_len = VAR_6;
 return(&VAR_4);
}
