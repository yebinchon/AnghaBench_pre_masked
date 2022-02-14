
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uschar ;
typedef int rrow ;
struct TYPE_7__ {int accept; int** posns; int anchor; int * restr; int initstat; TYPE_1__* re; } ;
typedef TYPE_2__ fa ;
struct TYPE_6__ {int* lfollow; } ;
typedef int Node ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_2__*,int *) ;
 int * VAR_6 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int * FUNC_4 (int ,int *,int *) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *) ;
 int VAR_7 ;
 int * FUNC_7 (char const*) ;
 scalar_t__ FUNC_8 (char const*) ;
 int FUNC_9 (int *) ;

fa *FUNC_10(const char *VAR_8, int VAR_9)

{
 Node *VAR_10, *VAR_11;
 fa *VAR_12;

 VAR_6 = (uschar *) VAR_8;
 VAR_5 = VAR_6;
 VAR_10 = FUNC_7(VAR_8);
 VAR_11 = FUNC_4(VAR_1, FUNC_4(VAR_4, FUNC_4(VAR_0, VAR_3, VAR_3), VAR_3), VAR_10);

 VAR_11 = FUNC_4(VAR_1, VAR_11, FUNC_4(VAR_2, VAR_3, VAR_3));


 VAR_7 = 0;
 FUNC_6(VAR_11);
 if ((VAR_12 = (fa *) FUNC_0(1, sizeof(fa) + VAR_7*sizeof(rrow))) == ((void*)0))
  FUNC_5("out of space for fa");
 VAR_12->accept = VAR_7-1;
 FUNC_1(VAR_12, VAR_11);
 FUNC_2(VAR_11);
 if ((VAR_12->posns[0] = (int *) FUNC_0(*(VAR_12->re[0].lfollow), sizeof(int))) == ((void*)0))
   FUNC_5("out of space in makedfa");
 if ((VAR_12->posns[1] = (int *) FUNC_0(1, sizeof(int))) == ((void*)0))
  FUNC_5("out of space in makedfa");
 *VAR_12->posns[1] = 0;
 VAR_12->initstat = FUNC_3(VAR_12, VAR_9);
 VAR_12->anchor = VAR_9;
 VAR_12->restr = (uschar *) FUNC_8(VAR_8);
 if (VAR_6 != VAR_5) {
  if (VAR_5)
   FUNC_9(VAR_5);
 }
 return VAR_12;
}
