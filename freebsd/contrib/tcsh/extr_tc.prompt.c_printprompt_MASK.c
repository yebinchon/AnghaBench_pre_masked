
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
typedef char Char ;


 int VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int VAR_7 ;
 int FUNC_1 () ;
 int FUNC_2 (char) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 char* FUNC_5 (int ,char const*,char const*,int ,int *) ;
 char* FUNC_6 (int ) ;
 int FUNC_7 (char*) ;

void
FUNC_8(int VAR_8, const char *VAR_9)
{
    static const Char *VAR_10 = ((void*)0);
    static const char *VAR_11 = ((void*)0);
    time_t VAR_12 = FUNC_4(((void*)0));
    const Char *VAR_13;

    switch (VAR_8) {
    default:
    case 0:
 VAR_13 = FUNC_6(VAR_3);
 break;
    case 1:
 VAR_13 = FUNC_6(VAR_4);
 break;
    case 2:
 VAR_13 = FUNC_6(VAR_5);
 break;
    case 3:
 if (VAR_10 != ((void*)0)) {
     VAR_13 = VAR_10;
     VAR_9 = VAR_11;
 }
 else
     VAR_13 = FUNC_6(VAR_3);
 break;
    }

    if (VAR_8 < 2) {
 VAR_10 = VAR_13;
 VAR_11 = VAR_9;
    }

    FUNC_7(VAR_1);
    VAR_1 = ((void*)0);
    VAR_1 = FUNC_5(VAR_0, VAR_13, VAR_9, VAR_12, ((void*)0));
    if (!VAR_7) {
 for (VAR_13 = VAR_1; *VAR_13 ; )
     (void) FUNC_3(*VAR_13++);
 FUNC_0(0);
 FUNC_1();
    }

    FUNC_7(VAR_2);
    VAR_2 = ((void*)0);
    if (VAR_8 == 0) {
 VAR_13 = FUNC_6(VAR_6);
 VAR_2 = FUNC_5(VAR_0, VAR_13, ((void*)0), VAR_12, ((void*)0));

 if (!VAR_7 && VAR_2[0] != '\0') {
     for (VAR_13 = VAR_2; *VAR_13 ; )
  (void) FUNC_3(*VAR_13++);
     FUNC_0(0);
     FUNC_2(' ');
     FUNC_1();
 }
    }
}
