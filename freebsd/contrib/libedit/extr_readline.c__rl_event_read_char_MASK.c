
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int wchar_t ;
typedef scalar_t__ ssize_t ;
struct TYPE_4__ {int el_infd; } ;
typedef TYPE_1__ EditLine ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_1__*,int ,int ) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_1 (int ,int ,int) ;
 scalar_t__ FUNC_2 (int ,int ,int*) ;
 scalar_t__ FUNC_3 (int ,char*,int) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

__attribute__((used)) static int
FUNC_6(EditLine *VAR_8, wchar_t *VAR_9)
{
 char VAR_10;
 int VAR_11;
 ssize_t VAR_12 = 0;

 VAR_10 = '\0';
 *VAR_9 = L'\0';
 while (&FUNC_4) {

  FUNC_4)();
  VAR_12 = FUNC_3(VAR_8->el_infd, &VAR_10, 1);
  return -1;


  if (VAR_12 < 0 && VAR_7 == VAR_0)
   continue;
  if (VAR_12 == 0)
   continue;
  break;
 }
 if (!&FUNC_4)
  FUNC_0(VAR_8, VAR_2, VAR_1);
 *VAR_9 = (wchar_t)VAR_10;
 return (int)VAR_12;
}
