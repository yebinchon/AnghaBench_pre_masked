
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ addr; } ;
struct azx {int initialized; TYPE_1__ posbuf; int single_cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct azx*) ;
 int FUNC_1 (struct azx*) ;
 int FUNC_2 (struct azx*) ;
 int FUNC_3 (struct azx*,int) ;
 int FUNC_4 (struct azx*,int ,int ) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct azx *VAR_2, int VAR_3)
{
 if (VAR_2->initialized)
  return;


 FUNC_3(VAR_2, VAR_3);


 FUNC_1(VAR_2);
 FUNC_2(VAR_2);


 if (!VAR_2->single_cmd)
  FUNC_0(VAR_2);


 FUNC_4(VAR_2, VAR_0, (u32)VAR_2->posbuf.addr);
 FUNC_4(VAR_2, VAR_1, FUNC_5(VAR_2->posbuf.addr));

 VAR_2->initialized = 1;
}
