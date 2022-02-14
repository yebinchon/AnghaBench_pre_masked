
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ iconv_t ;
struct TYPE_8__ {scalar_t__* id; } ;
struct TYPE_9__ {TYPE_1__ conv; } ;
typedef TYPE_2__ SCR ;


 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 scalar_t__* VAR_0 ;
 scalar_t__* VAR_1 ;
 scalar_t__* VAR_2 ;
 scalar_t__* VAR_3 ;
 int VAR_4 ;


 char* FUNC_2 (TYPE_2__*,int const) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 () ;
 char* FUNC_4 () ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 int FUNC_7 (TYPE_2__*,int ,char*) ;
 int FUNC_8 (char*,char*) ;

int
FUNC_9(SCR *VAR_7, int VAR_8, char *VAR_9)
{
 switch (VAR_8) {
 case 129:
  FUNC_7(VAR_7, VAR_4, "321|File encoding conversion not supported");
  break;
 case 128:
  FUNC_7(VAR_7, VAR_4, "322|Input encoding conversion not supported");
  break;
 }
 return 1;
}
