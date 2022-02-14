
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* name; int offs; } ;


 size_t FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,char*,int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (char*,char const*,int) ;

__attribute__((used)) static void
FUNC_3(const char *VAR_1)
{
 FUNC_1("TZ", "US/Eastern", 1);

 FUNC_2("GMT", VAR_1, 0);
 FUNC_2("UTC", VAR_1, 0);
 FUNC_2("US/Eastern", VAR_1, -18000);

 for (size_t VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++)
  FUNC_2(VAR_0[VAR_2].name, VAR_1, VAR_0[VAR_2].offs);
}
