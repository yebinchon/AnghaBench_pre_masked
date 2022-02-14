
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num; } ;
typedef TYPE_1__ HistEvent ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char*,char const*) ;
 int VAR_5 ;
 int FUNC_2 (int ,TYPE_1__*,int ,...) ;
 scalar_t__ FUNC_3 (char const*) ;

__attribute__((used)) static int
FUNC_4(const char *VAR_6, int VAR_7)
{
 HistEvent VAR_8;
 const char *VAR_9 = VAR_6;
 int VAR_10 = 0;
 int VAR_11, VAR_12;

 VAR_12 = FUNC_2(VAR_5, &VAR_8, VAR_0);
 switch (*VAR_9) {
 case '-':
  VAR_10 = 1;

 case '+':
  VAR_9++;
 }
 if (FUNC_3(VAR_9)) {
  VAR_11 = FUNC_0(VAR_9);
  if (VAR_10) {
   while (VAR_12 != -1 && VAR_11--) {
    VAR_12 = FUNC_2(VAR_5, &VAR_8, VAR_2);
   }
   if (VAR_12 == -1)
    VAR_12 = FUNC_2(VAR_5, &VAR_8, VAR_1);
  } else {
   VAR_12 = FUNC_2(VAR_5, &VAR_8, VAR_3, VAR_11);
   if (VAR_12 == -1) {




    VAR_12 = FUNC_2(VAR_5, &VAR_8, VAR_7 ? VAR_0 : VAR_1);
   }
  }
  if (VAR_12 == -1)
   FUNC_1("history number %s not found (internal error)",
          VAR_6);
 } else {



  VAR_12 = FUNC_2(VAR_5, &VAR_8, VAR_4, VAR_6);
  if (VAR_12 == -1)
   FUNC_1("history pattern not found: %s", VAR_6);
 }
 return (VAR_8.num);
}
