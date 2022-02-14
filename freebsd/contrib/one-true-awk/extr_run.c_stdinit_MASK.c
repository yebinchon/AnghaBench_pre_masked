
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* fname; void* mode; int fp; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 TYPE_1__* FUNC_1 (int ,int) ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

void FUNC_2(void)
{
 VAR_4 = VAR_0;
 VAR_3 = FUNC_1(VAR_4, sizeof(*VAR_3));
 if (VAR_3 == ((void*)0))
  FUNC_0("can't allocate file memory for %u files", VAR_4);
        VAR_3[0].fp = VAR_6;
 VAR_3[0].fname = "/dev/stdin";
 VAR_3[0].mode = VAR_2;
        VAR_3[1].fp = VAR_7;
 VAR_3[1].fname = "/dev/stdout";
 VAR_3[1].mode = VAR_1;
        VAR_3[2].fp = VAR_5;
 VAR_3[2].fname = "/dev/stderr";
 VAR_3[2].mode = VAR_1;
}
