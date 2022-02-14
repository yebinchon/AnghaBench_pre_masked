
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rlimit {int rlim_max; int rlim_cur; } ;
struct limits {int limdiv; scalar_t__ limconst; int limscale; int limname; } ;
typedef int RLIM_TYPE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__,struct rlimit*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char) ;

__attribute__((used)) static void
FUNC_5(struct limits *VAR_4, int VAR_5)
{



    RLIM_TYPE VAR_6;
    int VAR_7 = VAR_4->limdiv;

    FUNC_3("%-13.13s", VAR_4->limname);


    VAR_6 = FUNC_2(VAR_4->limconst, 0);
    if (VAR_4->limconst == VAR_2) {
 if (VAR_6 >= (VAR_3 / 512))
     VAR_6 = VAR_3;
 else
     VAR_7 = (VAR_7 == 1024 ? 2 : 1);
    }


    if (VAR_6 == VAR_3)
 FUNC_3("unlimited");
    else
 FUNC_3("%ld %s", (long) (VAR_6 / VAR_7), VAR_4->limscale);
    FUNC_4('\n');
}
