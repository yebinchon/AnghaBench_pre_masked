
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bhnd_chipid {int dummy; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ,int ,int ) ;
 scalar_t__ FUNC_2 (struct bhnd_chipid const*,int ,int *) ;

uint32_t
FUNC_3(const struct bhnd_chipid *VAR_0,
    uint32_t VAR_1, uint32_t VAR_2, uint32_t VAR_3)
{
 FUNC_0(FUNC_2(VAR_0, VAR_1, ((void*)0)) != 0,
     ("can't compute clock rate on fixed clock"));

 return (FUNC_1(VAR_1, VAR_2, VAR_3));
}
