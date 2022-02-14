
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ppb_microseq {TYPE_1__* arg; } ;
typedef int device_t ;
struct TYPE_2__ {int i; void* p; } ;


 struct ppb_microseq FUNC_0 (int ) ;
 struct ppb_microseq FUNC_1 (int) ;
 struct ppb_microseq FUNC_2 (int ) ;
 struct ppb_microseq FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (int ,int ,struct ppb_microseq*,int*) ;

int
FUNC_5(device_t VAR_1, device_t VAR_2, struct ppb_microseq *VAR_3,
  struct ppb_microseq *VAR_4, struct ppb_microseq *VAR_5,
  int VAR_6, int *VAR_7)
{
 struct ppb_microseq VAR_8[] = {
    FUNC_0(0),

    FUNC_3(VAR_0),

    FUNC_0(0),
    FUNC_1(-1 ),

    FUNC_0(0),
    FUNC_2(0)
 };


 VAR_8[0].arg[0].p = (void *)VAR_3;
 VAR_8[1].arg[0].i = VAR_6;
 VAR_8[2].arg[0].p = (void *)VAR_4;
 VAR_8[4].arg[0].p = (void *)VAR_5;


 return (FUNC_4(VAR_1, VAR_2, VAR_8, VAR_7));
}
