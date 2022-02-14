
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct timeval {int tv_usec; scalar_t__ tv_sec; } ;
typedef scalar_t__ recno_t ;
typedef int fd_set ;
struct TYPE_19__ {int ibcw; } ;
struct TYPE_18__ {size_t cno; scalar_t__ lno; TYPE_1__* script; } ;
struct TYPE_17__ {scalar_t__ sh_master; } ;
typedef TYPE_1__ SCRIPT ;
typedef TYPE_2__ SCR ;
typedef TYPE_3__ EX_PRIVATE ;
typedef int CHAR_T ;


 scalar_t__ FUNC_0 (TYPE_2__*,int ,char*,size_t,int *,size_t) ;
 TYPE_3__* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (scalar_t__,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*,char*,size_t) ;
 int FUNC_5 (TYPE_2__*,char*,size_t,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_6 (TYPE_2__*,int,int ,int *,size_t) ;
 scalar_t__ FUNC_7 (TYPE_2__*,scalar_t__*) ;
 int FUNC_8 (char*,char*,size_t) ;
 int FUNC_9 (TYPE_2__*,int ,char*) ;
 int FUNC_10 (scalar_t__,char*,int ) ;
 int FUNC_11 (scalar_t__,int *,int *,int *,struct timeval*) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (TYPE_2__*,char*,size_t,size_t*) ;
 scalar_t__ FUNC_14 (TYPE_2__*,char*,size_t) ;
 int FUNC_15 (TYPE_2__*,int) ;

__attribute__((used)) static int
FUNC_16(SCR *VAR_3)
{
 EX_PRIVATE *VAR_4;
 struct timeval VAR_5;
 char *VAR_6, *VAR_7, *VAR_8;
 SCRIPT *VAR_9;
 fd_set VAR_10;
 recno_t VAR_11;
 size_t VAR_12, VAR_13, VAR_14;
 int VAR_15, VAR_16;
 char *VAR_17;
 CHAR_T *VAR_18;
 size_t VAR_19 = 0;

 VAR_4 = FUNC_1(VAR_3);



 if (FUNC_7(VAR_3, &VAR_11))
  return (1);


 FUNC_5(VAR_3, VAR_17, VAR_12, 1024);
 VAR_6 = VAR_17;


 VAR_16 = 1;
 VAR_9 = VAR_3->script;
more: switch (VAR_15 = FUNC_10(VAR_9->sh_master, VAR_6, 1024)) {
 case 0:
  FUNC_12(VAR_3);
  VAR_16 = 0;
  goto ret;
 case -1:
  FUNC_9(VAR_3, VAR_2, "shell");
  goto ret;
 default:
  VAR_6 += VAR_15;
  break;
 }


 for (VAR_7 = VAR_8 = VAR_17; VAR_7 < VAR_6; ++VAR_7) {
  if (*VAR_7 == '\r' || *VAR_7 == '\n') {
   VAR_13 = VAR_7 - VAR_8;
   if (FUNC_0(VAR_3, VAR_4->ibcw, VAR_8, VAR_13, VAR_18, VAR_19))
    goto conv_err;
   if (FUNC_6(VAR_3, 1, VAR_11++, VAR_18, VAR_19))
    goto ret;
   VAR_8 = VAR_7 + 1;
  }
 }
 if (VAR_7 > VAR_8) {
  VAR_13 = VAR_7 - VAR_8;







  if (!FUNC_13(VAR_3, VAR_8, VAR_13, &VAR_14) || VAR_14 != 0) {
   VAR_5.tv_sec = 0;
   VAR_5.tv_usec = 100000;
   FUNC_3(&VAR_10);
   FUNC_2(VAR_9->sh_master, &VAR_10);
   if (FUNC_11(VAR_9->sh_master + 1,
       &VAR_10, ((void*)0), ((void*)0), &VAR_5) == 1) {
    FUNC_8(VAR_17, VAR_8, VAR_13);
    VAR_6 = VAR_17 + VAR_13;
    goto more;
   }
  }
  if (FUNC_14(VAR_3, VAR_8, VAR_13))
   return (1);
  if (FUNC_0(VAR_3, VAR_4->ibcw, VAR_8, VAR_13, VAR_18, VAR_19))
   goto conv_err;
  if (FUNC_6(VAR_3, 1, VAR_11++, VAR_18, VAR_19))
   goto ret;
 }


 VAR_3->lno = VAR_11;
 VAR_3->cno = VAR_19 ? VAR_19 - 1 : 0;
 VAR_16 = FUNC_15(VAR_3, 1);

 if (0)
conv_err: FUNC_9(VAR_3, VAR_1, "323|Invalid input. Truncated.");

ret: FUNC_4(VAR_3, VAR_17, VAR_12);
 return (VAR_16);
}
