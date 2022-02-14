
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int index; int func; } ;
struct tblentry {scalar_t__ cmdtype; TYPE_1__ param; int cmdname; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (char*,scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (char const**,char const**,int ) ;
 char* FUNC_8 () ;
 int FUNC_9 (char*) ;

__attribute__((used)) static void
FUNC_10(struct tblentry *VAR_5, int VAR_6)
{
 int VAR_7;
 const char *VAR_8, *VAR_9;
 char *VAR_10;

 if (VAR_5->cmdtype == VAR_2) {
  VAR_7 = VAR_5->param.index;
  VAR_8 = FUNC_8();
  do {
   VAR_10 = FUNC_7(&VAR_8, &VAR_9, VAR_5->cmdname);
   FUNC_9(VAR_10);
  } while (--VAR_7 >= 0);
  FUNC_6(VAR_10);
 } else if (VAR_5->cmdtype == VAR_0) {
  FUNC_5("builtin %s", VAR_5->cmdname);
 } else if (VAR_5->cmdtype == VAR_1) {
  FUNC_5("function %s", VAR_5->cmdname);
  if (VAR_6) {
   VAR_3;
   VAR_10 = FUNC_1(FUNC_3(VAR_5->param.func));
   FUNC_4(' ');
   FUNC_6(VAR_10);
   FUNC_0(VAR_10);
   VAR_4;
  }




 }
 FUNC_4('\n');
}
