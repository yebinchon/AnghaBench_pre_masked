
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct TYPE_2__ {scalar_t__ type; scalar_t__ length; scalar_t__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,unsigned int,unsigned long long,unsigned long long,...) ;
 scalar_t__* VAR_2 ;
 TYPE_1__* VAR_3 ;
 size_t VAR_4 ;

__attribute__((used)) static int
FUNC_1(int VAR_5, char *VAR_6[])
{
 u_int VAR_7;

 if (VAR_3 == ((void*)0) || VAR_4 == 0)
  return (VAR_0);
 if (VAR_2 != ((void*)0))
  for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++)
   FUNC_0("SMAP type=%02x base=%016llx len=%016llx attr=%02x\n",
       (unsigned int)VAR_3[VAR_7].type,
       (unsigned long long)VAR_3[VAR_7].base,
       (unsigned long long)VAR_3[VAR_7].length,
       (unsigned int)VAR_2[VAR_7]);
 else
  for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++)
   FUNC_0("SMAP type=%02x base=%016llx len=%016llx\n",
       (unsigned int)VAR_3[VAR_7].type,
       (unsigned long long)VAR_3[VAR_7].base,
       (unsigned long long)VAR_3[VAR_7].length);
 return (VAR_1);
}
