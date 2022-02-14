
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Ain {scalar_t__ f_seek; int c_seek; int a_seek; scalar_t__ type; } ;
typedef scalar_t__ off_t ;


 int FUNC_0 (int,int,char*) ;



 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__* VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (int ,scalar_t__,...) ;

void
FUNC_3(struct Ain *VAR_10)
{
    switch (VAR_2 = VAR_10->type) {
    case 129:
 VAR_5 = VAR_10->a_seek;
 VAR_4 = VAR_10->c_seek;



 return;
    case 130:
 VAR_0 = VAR_10->a_seek;
 VAR_1 = VAR_10->c_seek;



 return;
    case 128:



 VAR_9 = VAR_10->f_seek;
 return;
    default:
 FUNC_2(FUNC_0(16, 7, "Bad seek type %d\n"), VAR_2);
 FUNC_1();
    }
}
