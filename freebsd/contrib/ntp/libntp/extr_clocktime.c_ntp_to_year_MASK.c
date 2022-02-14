
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vint64 ;
typedef int u_int32 ;
struct TYPE_4__ {scalar_t__ hi; } ;
typedef TYPE_1__ ntpcal_split ;
typedef scalar_t__ int32 ;


 scalar_t__ VAR_0 ;
 TYPE_1__ FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 TYPE_1__ FUNC_2 (scalar_t__,int *) ;

__attribute__((used)) static int32
FUNC_3(
 u_int32 VAR_1)
{
 vint64 VAR_2;
 ntpcal_split VAR_3;

 VAR_2 = FUNC_1(VAR_1, ((void*)0));
 VAR_3 = FUNC_0(&VAR_2);
 VAR_3 = FUNC_2(VAR_3.hi + VAR_0 - 1, ((void*)0));
 return VAR_3.hi + 1;
}
