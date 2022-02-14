
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union node {int dummy; } node ;
struct stackmark {int dummy; } ;
struct localvar {int dummy; } ;
struct job {int dummy; } ;
struct jmploc {int loc; } ;
struct backcmd {int fd; struct job* jp; scalar_t__ nleft; int * buf; } ;
struct TYPE_2__ {unsigned char reset; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int VAR_5 ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (union node*,int ,struct backcmd*) ;
 int FUNC_5 (union node*,int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_6 (struct job*,union node*,int ) ;
 struct jmploc* VAR_9 ;
 scalar_t__ FUNC_7 (union node*) ;
 struct localvar* VAR_10 ;
 int FUNC_8 (int ,int) ;
 struct job* FUNC_9 (union node*,int) ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_10 (int*) ;
 int FUNC_11 () ;
 int FUNC_12 (struct stackmark*) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (struct stackmark*) ;
 TYPE_1__ VAR_12 ;
 int FUNC_15 (int ) ;

void
FUNC_16(union node *VAR_13, struct backcmd *VAR_14)
{
 int VAR_15[2];
 struct job *VAR_16;
 struct stackmark VAR_17;
 struct jmploc VAR_18;
 struct jmploc *VAR_19;
 struct localvar *VAR_20;
 unsigned char VAR_21;

 VAR_14->fd = -1;
 VAR_14->buf = ((void*)0);
 VAR_14->nleft = 0;
 VAR_14->jp = ((void*)0);
 if (VAR_13 == ((void*)0)) {
  VAR_7 = 0;
  return;
 }
 FUNC_14(&VAR_17);
 VAR_7 = VAR_11;
 if (FUNC_7(VAR_13)) {
  VAR_20 = VAR_10;
  VAR_10 = ((void*)0);
  VAR_21 = VAR_12.reset;
  VAR_8++;
  VAR_19 = VAR_9;
  if (FUNC_13(VAR_18.loc)) {
   if (VAR_6 == VAR_2)
                 ;
   else if (VAR_6 != 0) {
    VAR_9 = VAR_19;
    VAR_8--;
    FUNC_11();
    VAR_10 = VAR_20;
    VAR_12.reset = VAR_21;
    FUNC_8(VAR_9->loc, 1);
   }
  } else {
   VAR_9 = &VAR_18;
   FUNC_4(VAR_13, VAR_0, VAR_14);
  }
  VAR_9 = VAR_19;
  VAR_8--;
  FUNC_11();
  VAR_10 = VAR_20;
  VAR_12.reset = VAR_21;
 } else {
  if (FUNC_10(VAR_15) < 0)
   FUNC_3("Pipe call failed: %s", FUNC_15(VAR_5));
  VAR_16 = FUNC_9(VAR_13, 1);
  if (FUNC_6(VAR_16, VAR_13, VAR_4) == 0) {
   VAR_3;
   FUNC_1(VAR_15[0]);
   if (VAR_15[1] != 1) {
    FUNC_2(VAR_15[1], 1);
    FUNC_1(VAR_15[1]);
   }
   FUNC_5(VAR_13, VAR_1);
  }
  FUNC_1(VAR_15[1]);
  VAR_14->fd = VAR_15[0];
  VAR_14->jp = VAR_16;
 }
 FUNC_12(&VAR_17);
 FUNC_0(("evalbackcmd done: fd=%d buf=%p nleft=%d jp=%p\n",
  VAR_14->fd, VAR_14->buf, VAR_14->nleft, VAR_14->jp));
}
