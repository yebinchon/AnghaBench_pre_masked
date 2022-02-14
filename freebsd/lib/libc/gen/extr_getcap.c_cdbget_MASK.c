
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int (* get ) (TYPE_2__*,TYPE_1__*,TYPE_1__*,int ) ;} ;
struct TYPE_7__ {char* data; scalar_t__ size; } ;
typedef TYPE_1__ DBT ;
typedef TYPE_2__ DB ;


 char VAR_0 ;
 char VAR_1 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (TYPE_2__*,TYPE_1__*,TYPE_1__*,int ) ;

__attribute__((used)) static int
FUNC_4(DB *VAR_2, char **VAR_3, const char *VAR_4)
{
 DBT VAR_5, VAR_6;
 char *VAR_7;

 VAR_7 = FUNC_1(VAR_4);
 if (VAR_7 == ((void*)0))
  return (-2);
 VAR_5.data = VAR_7;
 VAR_5.size = FUNC_2(VAR_7);

 for (;;) {

  switch(VAR_2->get(VAR_2, &VAR_5, &VAR_6, 0)) {
  case -1:
   FUNC_0(VAR_7);
   return (-2);
  case 1:
   FUNC_0(VAR_7);
   return (-1);
  }


  if (((char *)VAR_6.data)[0] != VAR_0)
   break;

  VAR_5.data = (char *)VAR_6.data + 1;
  VAR_5.size = VAR_6.size - 1;
 }

 *VAR_3 = (char *)VAR_6.data + 1;
 FUNC_0(VAR_7);
 return (((char *)(VAR_6.data))[0] == VAR_1 ? 1 : 0);
}
