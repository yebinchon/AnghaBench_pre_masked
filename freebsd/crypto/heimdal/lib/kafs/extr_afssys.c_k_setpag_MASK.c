
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct procdata {int retval; int member_7; int member_6; int member_5; int member_4; int member_3; int member_2; int member_1; int member_0; } ;
struct devdata {int retval; int member_7; int member_6; int member_5; int member_4; int member_3; int member_2; int member_1; int member_0; } ;


 int VAR_0 ;

 int VAR_1 ;



 int VAR_2 ;



 int FUNC_0 () ;
 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_1 (struct procdata*) ;
 int VAR_5 ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,...) ;

int
FUNC_5(void)
{

    switch(VAR_3){
    case 133: {
 struct procdata VAR_6 = { 0, 0, 0, 0, VAR_0 };
 return FUNC_1(&VAR_6);
    }
    case 132: {
 struct devdata VAR_7 = { VAR_0, 0, 0, 0, 0, 0, 0, 0 };
 int VAR_8 = FUNC_1(&VAR_7);
 if (VAR_8)
     return VAR_8;
 return VAR_7.retval;
     }




    }

    VAR_5 = VAR_1;




    return -1;
}
