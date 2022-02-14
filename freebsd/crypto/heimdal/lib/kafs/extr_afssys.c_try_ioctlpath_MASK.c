
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct procdata {unsigned long param2; int member_7; int member_6; int member_5; int member_4; int member_3; int member_2; int member_1; int member_0; } ;
struct devdata {unsigned long param2; int member_7; int member_6; int member_5; int member_4; int member_3; int member_2; int member_1; int member_0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 () ;
 int VAR_6 ;
 unsigned long VAR_7 ;
 int * VAR_8 ;
 int FUNC_1 (int) ;
 int VAR_9 ;
 int FUNC_2 (int,unsigned long,struct procdata*) ;
 int FUNC_3 (char const*,int ) ;
 int * FUNC_4 (char const*) ;

__attribute__((used)) static int
FUNC_5(const char *VAR_10, unsigned long VAR_11, int VAR_12)
{
    int VAR_13, VAR_14, VAR_15;

    VAR_13 = FUNC_3(VAR_10, VAR_4);
    if (VAR_13 < 0)
 return 1;
    switch (VAR_12) {
    case 129: {
 struct procdata VAR_16 = { 0, 0, 0, 0, VAR_0 };
 VAR_16.param2 = (unsigned long)VAR_5;
 VAR_14 = FUNC_2(VAR_13, VAR_11, &VAR_16);
 break;
    }
    case 128: {
 struct devdata VAR_17 = { VAR_0, 0, 0, 0, 0, 0, 0, 0 };
 VAR_17.param2 = (unsigned long)VAR_5;
 VAR_14 = FUNC_2(VAR_13, VAR_11, &VAR_17);
 break;
    }
    default:
 FUNC_0();
    }
    VAR_15 = VAR_9;
    FUNC_1(VAR_13);




    if (VAR_14 &&
 (VAR_15 != VAR_2 &&
  VAR_15 != VAR_1 &&
  VAR_15 != VAR_3))
 return 1;
    VAR_7 = VAR_11;
    VAR_8 = FUNC_4(VAR_10);
    if (VAR_8 == ((void*)0))
 return 1;
    VAR_6 = VAR_12;
    return 0;
}
