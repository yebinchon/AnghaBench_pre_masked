
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* from; char* to; } ;
typedef TYPE_1__ assoc ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char const*,int ) ;
 scalar_t__ FUNC_1 (char*,char const*,size_t) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*,char*) ;

__attribute__((used)) static char *
FUNC_4(const assoc * VAR_3, char *VAR_4, char *VAR_5)
{
    char *VAR_6 = 0;
    const char *VAR_7 = FUNC_3(VAR_5, ";");

    if (VAR_7 != 0) {
 const assoc *VAR_8;

 do {
     bool VAR_9 = VAR_0;

     for (VAR_8 = VAR_3; VAR_8->from; VAR_8++) {
  size_t VAR_10 = FUNC_2(VAR_8->from);

  if (FUNC_1(VAR_8->from, VAR_7, VAR_10)) {
      FUNC_0(VAR_4, VAR_8->to, VAR_1);
      VAR_9 = VAR_2;
      break;
  }
     }

     if (!VAR_9)
  FUNC_0(VAR_4, VAR_7, VAR_1);
     FUNC_0(VAR_4, ";", VAR_1);
 } while
     ((VAR_7 = FUNC_3((char *) 0, ";")));

 VAR_4[FUNC_2(VAR_4) - 1] = '\0';

 VAR_6 = VAR_4;
    }
    return VAR_6;
}
