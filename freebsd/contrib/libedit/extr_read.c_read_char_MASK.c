
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int wchar_t ;
typedef int ssize_t ;
typedef int mbstate_t ;
typedef int mbs ;
struct TYPE_7__ {int el_infd; TYPE_1__* el_signal; } ;
struct TYPE_6__ {int sig_no; } ;
typedef TYPE_2__ EditLine ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (TYPE_2__*,int ) ;
 int VAR_3 ;
 int FUNC_1 (int*,char*,size_t,int *) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int ,char*,size_t) ;
 scalar_t__ FUNC_4 (int ,int) ;
 int FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_6(EditLine *VAR_4, wchar_t *VAR_5)
{
 ssize_t VAR_6;
 int VAR_7 = 0;
 char VAR_8[VAR_2];
 size_t VAR_9 = 0;
 int VAR_10 = VAR_3;

 again:
 VAR_4->el_signal->sig_no = 0;
 while ((VAR_6 = FUNC_3(VAR_4->el_infd, VAR_8 + VAR_9, (size_t)1)) == -1) {
  int VAR_11 = VAR_3;
  switch (VAR_4->el_signal->sig_no) {
  case 129:
   FUNC_0(VAR_4, VAR_1);

  case 128:
   FUNC_5(VAR_4);
   goto again;
  default:
   break;
  }
  if (!VAR_7 && FUNC_4(VAR_4->el_infd, VAR_11) == 0) {
   VAR_3 = VAR_10;
   VAR_7 = 1;
  } else {
   VAR_3 = VAR_11;
   *VAR_5 = L'\0';
   return -1;
  }
 }


 if (VAR_6 == 0) {
  *VAR_5 = L'\0';
  return 0;
 }

 for (;;) {
  mbstate_t VAR_12;

  ++VAR_9;

  FUNC_2(&VAR_12, 0, sizeof(VAR_12));
  switch (FUNC_1(VAR_5, VAR_8, VAR_9, &VAR_12)) {
  case (size_t)-1:
   if (VAR_9 > 1) {




    VAR_8[0] = VAR_8[VAR_9 - 1];
    VAR_9 = 0;
    break;
   } else {

    VAR_9 = 0;
    goto again;
   }
  case (size_t)-2:
   if (VAR_9 >= VAR_2) {
    VAR_3 = VAR_0;
    *VAR_5 = L'\0';
    return -1;
   }

   goto again;
  default:

   return 1;
  }
 }
}
