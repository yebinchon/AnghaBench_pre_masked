
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {scalar_t__ rev; } ;
struct TYPE_9__ {TYPE_1__ params; } ;
typedef TYPE_2__ adapter_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (int) ;
 int VAR_6 ;
 unsigned int FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (unsigned int) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_4 (TYPE_2__*,int ,int,int ,int ,int) ;
 scalar_t__ FUNC_5 (TYPE_2__*,int ,int,int ,int ,int,int*) ;
 int FUNC_6 (TYPE_2__*,int ,unsigned int) ;

int FUNC_7(adapter_t *VAR_7, unsigned int VAR_8, unsigned int VAR_9,
        unsigned int VAR_10)
{
 u32 VAR_11;

 if (FUNC_3(VAR_7, VAR_0) & VAR_4)
  return -VAR_2;

 FUNC_6(VAR_7, VAR_1, VAR_10 << 16);
 FUNC_6(VAR_7, VAR_0, FUNC_2(VAR_9) |
       FUNC_1(VAR_8) | VAR_5);
 if (FUNC_5(VAR_7, VAR_0, VAR_4,
    0, VAR_6, 1, &VAR_11))
  return -VAR_3;

 if (VAR_9 >= 2 && VAR_9 < 7) {
  if (VAR_7->params.rev > 0)
   return FUNC_0(VAR_11);

  FUNC_6(VAR_7, VAR_0,
        FUNC_2(0) | VAR_5 | FUNC_1(VAR_8));
  if (FUNC_4(VAR_7, VAR_0,
        VAR_4, 0,
        VAR_6, 1))
   return -VAR_3;
  return FUNC_0(FUNC_3(VAR_7, VAR_1));
 }
 return 0;
}
