
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct procdata {unsigned long param1; unsigned long param2; unsigned long param3; unsigned long param4; int retval; int member_7; int member_6; int member_5; int member_4; int member_3; int member_2; int member_1; int member_0; } ;
struct devdata {unsigned long param1; unsigned long param2; unsigned long param3; unsigned long param4; int retval; int member_7; int member_6; int member_5; int member_4; int member_3; int member_2; int member_1; int member_0; } ;
struct ViceIoctl {int dummy; } ;


 int VAR_0 ;

 int VAR_1 ;



 int FUNC_0 (char*,int,struct ViceIoctl*,int) ;
 int VAR_2 ;



 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_1 (struct procdata*) ;
 int VAR_5 ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,char*,...) ;

int
FUNC_5(char *VAR_6,
  int VAR_7,
  struct ViceIoctl *VAR_8,
  int VAR_9)
{

    switch(VAR_3){
    case 133: {
 struct procdata VAR_10 = { 0, 0, 0, 0, VAR_0 };
 VAR_10.param1 = (unsigned long)VAR_6;
 VAR_10.param2 = (unsigned long)VAR_7;
 VAR_10.param3 = (unsigned long)VAR_8;
 VAR_10.param4 = (unsigned long)VAR_9;
 return FUNC_1(&VAR_10);
    }
    case 132: {
 struct devdata VAR_11 = { VAR_0, 0, 0, 0, 0, 0, 0, 0 };
 int VAR_12;

 VAR_11.param1 = (unsigned long)VAR_6;
 VAR_11.param2 = (unsigned long)VAR_7;
 VAR_11.param3 = (unsigned long)VAR_8;
 VAR_11.param4 = (unsigned long)VAR_9;

 VAR_12 = FUNC_1(&VAR_11);
 if (VAR_12)
     return VAR_12;

 return VAR_11.retval;
    }




    }
    VAR_5 = VAR_1;




    return -1;
}
