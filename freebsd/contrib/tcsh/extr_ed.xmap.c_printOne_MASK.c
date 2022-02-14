
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct KeyFuncs {unsigned char* name; int func; } ;
struct TYPE_3__ {int cmd; int str; } ;
typedef TYPE_1__ XmapVal ;
typedef unsigned char Char ;


 unsigned char* FUNC_0 (int,int,char*) ;
 struct KeyFuncs* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_1 () ;
 int FUNC_2 (unsigned char*,int ) ;
 int FUNC_3 (unsigned char*) ;
 unsigned char* FUNC_4 (int *,int ) ;
 int VAR_3 ;
 int FUNC_5 (char const*,unsigned char const*) ;

void
FUNC_6(const Char *VAR_4, const XmapVal *VAR_5, int VAR_6)
{
    struct KeyFuncs *VAR_7;
    static const char *VAR_8 = "%s\n";

    FUNC_5("%-15S-> ", VAR_4);
    if (VAR_5 != ((void*)0))
 switch (VAR_6) {
 case 128:
 case 129: {
     unsigned char *VAR_9;

     VAR_9 = FUNC_4(&VAR_5->str, VAR_6 == 128 ? VAR_2 : VAR_1);
     FUNC_2(VAR_9, VAR_3);
     FUNC_5(VAR_8, VAR_9);
     FUNC_3(VAR_9);
     break;
 }
 case 130:
     for (VAR_7 = VAR_0; VAR_7->name; VAR_7++)
  if (VAR_5->cmd == VAR_7->func)
      FUNC_5(VAR_8, VAR_7->name);
  break;
 default:
     FUNC_1();
     break;
 }
    else
 FUNC_5(VAR_8, FUNC_0(9, 7, "no input"));
}
