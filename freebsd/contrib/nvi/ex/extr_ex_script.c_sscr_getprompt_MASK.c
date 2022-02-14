
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct timeval {int tv_sec; int tv_usec; } ;
typedef int recno_t ;
typedef int fd_set ;
typedef int buf ;
struct TYPE_15__ {int ibcw; } ;
struct TYPE_14__ {TYPE_1__* script; } ;
struct TYPE_13__ {scalar_t__ sh_master; } ;
typedef TYPE_1__ SCRIPT ;
typedef TYPE_2__ SCR ;
typedef TYPE_3__ EX_PRIVATE ;
typedef int CHAR_T ;


 scalar_t__ FUNC_0 (TYPE_2__*,int ,char*,size_t,int *,size_t) ;
 TYPE_3__* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (scalar_t__,int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (TYPE_2__*,int ,int ,int *,size_t) ;
 scalar_t__ FUNC_5 (TYPE_2__*,int *) ;
 int FUNC_6 (char*,char*,int) ;
 int FUNC_7 (TYPE_2__*,int ,char*) ;
 int FUNC_8 (scalar_t__,char*,size_t) ;
 int FUNC_9 (scalar_t__,int *,int *,int *,struct timeval*) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*,char*,size_t) ;

__attribute__((used)) static int
FUNC_12(SCR *VAR_2)
{
 EX_PRIVATE *VAR_3;
 struct timeval VAR_4;
 char *VAR_5, *VAR_6, *VAR_7, VAR_8[1024];
 SCRIPT *VAR_9;
 fd_set VAR_10;
 recno_t VAR_11;
 size_t VAR_12, VAR_13;
 int VAR_14;
 CHAR_T *VAR_15;
 size_t VAR_16;

 VAR_3 = FUNC_1(VAR_2);

 FUNC_3(&VAR_10);
 VAR_5 = VAR_8;
 VAR_13 = sizeof(VAR_8);


 VAR_4.tv_sec = 5;
 VAR_4.tv_usec = 0;
 VAR_9 = VAR_2->script;
 FUNC_2(VAR_9->sh_master, &VAR_10);
 switch (FUNC_9(VAR_9->sh_master + 1, &VAR_10, ((void*)0), ((void*)0), &VAR_4)) {
 case -1:
  FUNC_7(VAR_2, VAR_1, "select");
  goto prompterr;
 case 0:
  FUNC_7(VAR_2, VAR_0, "Error: timed out");
  goto prompterr;
 case 1:
  break;
 }


more: VAR_13 = sizeof(VAR_8) - (VAR_5 - VAR_8);
 switch (VAR_14 = FUNC_8(VAR_9->sh_master, VAR_5, VAR_13)) {
 case 0:
  FUNC_7(VAR_2, VAR_0, "Error: shell: EOF");
  goto prompterr;
 case -1:
  FUNC_7(VAR_2, VAR_1, "shell");
  goto prompterr;
 default:
  VAR_5 += VAR_14;
  break;
 }


 for (VAR_6 = VAR_7 = VAR_8; VAR_6 < VAR_5; ++VAR_6) {
  if (*VAR_6 == '\r' || *VAR_6 == '\n') {
   if (FUNC_0(VAR_2, VAR_3->ibcw, VAR_7, VAR_6 - VAR_7, VAR_15, VAR_16))
    goto conv_err;
   if (FUNC_5(VAR_2, &VAR_11) ||
       FUNC_4(VAR_2, 0, VAR_11, VAR_15, VAR_16))
    goto prompterr;
   VAR_7 = VAR_6 + 1;
  }
 }
 if (VAR_6 > VAR_8) {
  FUNC_6(VAR_8, VAR_7, VAR_5 - VAR_7);
  VAR_5 = VAR_8 + (VAR_5 - VAR_7);
 }
 if (VAR_5 == VAR_8)
  goto more;


 VAR_4.tv_sec = 0;
 VAR_4.tv_usec = 100000;
 switch (FUNC_9(VAR_9->sh_master + 1, &VAR_10, ((void*)0), ((void*)0), &VAR_4)) {
 case -1:
  FUNC_7(VAR_2, VAR_1, "select");
  goto prompterr;
 case 0:
  break;
 case 1:
  goto more;
 }


 VAR_12 = VAR_5 - VAR_8;
 VAR_5 = VAR_8;


 if (FUNC_0(VAR_2, VAR_3->ibcw, VAR_8, VAR_12, VAR_15, VAR_16))
  goto conv_err;
 if (FUNC_5(VAR_2, &VAR_11) || FUNC_4(VAR_2, 0, VAR_11, VAR_15, VAR_16)) {
  if (0)
conv_err: FUNC_7(VAR_2, VAR_0, "323|Invalid input. Truncated.");
prompterr: FUNC_10(VAR_2);
  return (1);
 }

 return (FUNC_11(VAR_2, VAR_8, VAR_12));
}
