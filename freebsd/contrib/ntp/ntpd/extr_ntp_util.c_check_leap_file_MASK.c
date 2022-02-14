
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int time_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int ,int const*) ;
 scalar_t__ VAR_1 ;
 scalar_t__* VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (scalar_t__*,int *,int,int) ;

void
FUNC_2(
 int VAR_4,
 uint32_t VAR_5 ,
 const time_t *VAR_6
 )
{

 if ( ! (VAR_2 && *VAR_2))
  return;


 if (FUNC_1(
      VAR_2, &VAR_3,
      !VAR_1, VAR_4))
  VAR_1 = VAR_0;
 else if (!VAR_1)
  return;

 FUNC_0(VAR_4, VAR_5, VAR_6);
}
