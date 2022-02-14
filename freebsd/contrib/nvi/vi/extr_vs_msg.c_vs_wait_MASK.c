
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int sw_t ;
struct TYPE_19__ {scalar_t__ linecount; int totalcount; } ;
typedef TYPE_1__ VI_PRIVATE ;
struct TYPE_22__ {scalar_t__ e_event; char e_c; } ;
struct TYPE_21__ {int (* scr_bell ) (TYPE_2__*) ;int (* scr_refresh ) (TYPE_2__*,int ) ;int (* scr_clrtoeol ) (TYPE_2__*) ;int (* scr_addstr ) (TYPE_2__*,char const*,size_t) ;int (* scr_move ) (TYPE_2__*,int ,int ) ;} ;
struct TYPE_20__ {TYPE_3__* gp; } ;
typedef TYPE_2__ SCR ;
typedef TYPE_3__ GS ;
typedef TYPE_4__ EVENT ;


 char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;



 TYPE_1__* FUNC_3 (TYPE_2__*) ;
 int FUNC_4 () ;
 char* FUNC_5 (TYPE_2__*,int ,size_t*) ;
 int FUNC_6 (TYPE_2__*,int ,int ) ;
 int FUNC_7 (TYPE_2__*,char const*,size_t) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*,int ) ;
 int FUNC_10 (TYPE_2__*) ;
 scalar_t__ FUNC_11 (TYPE_2__*,TYPE_4__*,int ,int ) ;

__attribute__((used)) static void
FUNC_12(SCR *VAR_8, int *VAR_9, sw_t VAR_10)
{
 EVENT VAR_11;
 VI_PRIVATE *VAR_12;
 const char *VAR_13;
 GS *VAR_14;
 size_t VAR_15;

 VAR_14 = VAR_8->gp;
 VAR_12 = FUNC_3(VAR_8);

 (void)VAR_14->scr_move(VAR_8, FUNC_2(VAR_8), 0);
 if (FUNC_1(VAR_8))
  VAR_13 = FUNC_5(VAR_8, VAR_4, &VAR_15);
 else
  switch (VAR_10) {
  case 128:
   VAR_13 = FUNC_5(VAR_8, VAR_3, &VAR_15);
   break;
  case 129:
   VAR_13 = FUNC_5(VAR_8, VAR_2, &VAR_15);
   break;
  case 130:
   VAR_13 = FUNC_5(VAR_8, VAR_1, &VAR_15);
   break;
  default:
   FUNC_4();

  }
 (void)VAR_14->scr_addstr(VAR_8, VAR_13, VAR_15);

 ++VAR_12->totalcount;
 VAR_12->linecount = 0;

 (void)VAR_14->scr_clrtoeol(VAR_8);
 (void)VAR_14->scr_refresh(VAR_8, 0);


 if (VAR_9 != ((void*)0))
  *VAR_9 = 0;
 for (;;) {
  if (FUNC_11(VAR_8, &VAR_11, 0, 0))
   return;
  if (VAR_11.e_event == VAR_5)
   break;
  if (VAR_11.e_event == VAR_6) {
   VAR_11.e_c = VAR_0;
   FUNC_0(VAR_14, VAR_7);
   break;
  }
  (void)VAR_14->scr_bell(VAR_8);
 }
 switch (VAR_10) {
 case 128:
  if (VAR_11.e_c == VAR_0)
   FUNC_0(VAR_14, VAR_7);
  break;
 case 129:
  if (VAR_11.e_c == ':' && VAR_9 != ((void*)0))
   *VAR_9 = 1;
  break;
 case 130:
  break;
 }
}
