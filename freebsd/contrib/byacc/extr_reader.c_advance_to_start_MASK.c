
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ class; int name; } ;
typedef TYPE_1__ bucket ;


 int VAR_0 ;
 int VAR_1 ;

 int FUNC_0 (char*) ;

 scalar_t__ VAR_2 ;

 char* FUNC_1 (int*) ;
 int FUNC_2 () ;
 char* VAR_3 ;
 int FUNC_3 () ;
 TYPE_1__* FUNC_4 () ;
 TYPE_1__* VAR_4 ;
 int FUNC_5 (int) ;
 int FUNC_6 () ;
 int VAR_5 ;
 void* VAR_6 ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (TYPE_1__*,char*,int) ;
 void* VAR_7 ;
 int FUNC_10 (TYPE_1__*,int) ;
 int FUNC_11 (void*,int ,char*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 () ;

__attribute__((used)) static void
FUNC_14(void)
{
    int VAR_8;
    bucket *VAR_9;
    char *VAR_10;
    int VAR_11;





    for (;;)
    {
 VAR_8 = FUNC_7();
 if (VAR_8 != '%')
     break;
 VAR_10 = VAR_3;
 switch (FUNC_6())
 {
 case 130:
     FUNC_8();

 case 128:
     FUNC_2();
     break;

 case 129:
     FUNC_3();
     break;

 default:
     FUNC_11(VAR_6, VAR_5, VAR_10);
 }
    }

    VAR_8 = FUNC_7();
    if (!FUNC_5(VAR_8) && VAR_8 != '_' && VAR_8 != '.' && VAR_8 != '_')
 FUNC_11(VAR_6, VAR_5, VAR_3);
    VAR_9 = FUNC_4();
    if (VAR_4 == 0)
    {
 if (VAR_9->class == VAR_2)
     FUNC_12(VAR_9->name);
 VAR_4 = VAR_9;
    }

    VAR_11 = VAR_6;
    VAR_8 = FUNC_7();
    if (VAR_8 == VAR_0)
 FUNC_13();
    VAR_7 = VAR_6;
    if (VAR_8 != ':')
 FUNC_11(VAR_6, VAR_5, VAR_3);
    FUNC_10(VAR_9, VAR_11);



    ++VAR_3;
}
