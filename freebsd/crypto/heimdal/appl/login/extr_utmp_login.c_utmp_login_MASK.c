
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utmp {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int,long,int ) ;
 int FUNC_3 (int ,int,int ) ;
 int FUNC_4 (struct utmp*,char*,char const*,char const*) ;
 int FUNC_5 (struct utmp*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int,struct utmp*,int) ;

void FUNC_10(char *VAR_5, const char *VAR_6, const char *VAR_7)
{
    struct utmp VAR_8;
    int VAR_9;

    FUNC_4 (&VAR_8, VAR_5, VAR_6, VAR_7);
    if ((VAR_9 = FUNC_3(VAR_4, VAR_1|VAR_0, 0)) >= 0) {
 FUNC_9(VAR_9, &VAR_8, sizeof(struct utmp));
 FUNC_0(VAR_9);
    }
}
