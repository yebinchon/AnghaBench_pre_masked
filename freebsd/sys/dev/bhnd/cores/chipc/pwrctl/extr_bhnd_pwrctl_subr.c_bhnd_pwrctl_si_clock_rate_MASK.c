
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct bhnd_chipid {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (struct bhnd_chipid const*,scalar_t__,int *) ;

uint32_t
FUNC_3(const struct bhnd_chipid *VAR_1,
    uint32_t VAR_2, uint32_t VAR_3, uint32_t VAR_4)
{
 uint32_t VAR_5;

 FUNC_0(FUNC_2(VAR_1, VAR_2, ((void*)0)) != 0,
     ("can't compute clock rate on fixed clock"));

 VAR_5 = FUNC_1(VAR_2, VAR_3, VAR_4);
 if (VAR_2 == VAR_0)
  VAR_5 /= 2;

 return (VAR_5);
}
