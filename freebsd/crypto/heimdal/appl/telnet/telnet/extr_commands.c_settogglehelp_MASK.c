
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct togglelist {char* name; char* help; } ;


 struct togglelist* VAR_0 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void
FUNC_1(int VAR_1)
{
    struct togglelist *VAR_2;

    for (VAR_2 = VAR_0; VAR_2->name; VAR_2++) {
 if (VAR_2->help) {
     if (*VAR_2->help)
  FUNC_0("%-15s %s %s\r\n", VAR_2->name, VAR_1 ? "enable" : "disable",
      VAR_2->help);
     else
  FUNC_0("\r\n");
 }
    }
}
