
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_2__* bktr_ptr_t ;
struct TYPE_6__ {unsigned int frequency; } ;
struct TYPE_7__ {TYPE_1__ tuner; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_2__*,unsigned int,int,int,int,int) ;
 char* FUNC_2 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (char*,char*,unsigned int,int,int) ;

__attribute__((used)) static void
FUNC_4(bktr_ptr_t VAR_1, unsigned int VAR_2)
{
 int VAR_3,VAR_4,VAR_5;
 int VAR_6, VAR_7;






 VAR_4=32900*1000;
 VAR_5=39900*1000;
 VAR_3=38900*1000;


 if (FUNC_1(VAR_1, VAR_2*62500 ,
   1090*1000*1000, VAR_3, VAR_4, VAR_5) == 0) {
  VAR_1->tuner.frequency = VAR_2;
  VAR_6 = FUNC_0(0x0e);
  VAR_7 = FUNC_0(0x0f);
  if (VAR_0)
   FUNC_3("%s: frequency set to %d, st = %#x, tad = %#x\n",
    FUNC_2(VAR_1), VAR_2*62500, VAR_6, VAR_7);
 }
}
