
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_2__ {char* name; scalar_t__ afmt; } ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__,scalar_t__) ;
 TYPE_1__* VAR_1 ;
 int FUNC_4 (char*,int ,size_t) ;
 int FUNC_5 (char*,size_t,char*,char*,scalar_t__,scalar_t__) ;

uint32_t
FUNC_6(uint32_t VAR_2, char *VAR_3, size_t VAR_4)
{
 uint32_t VAR_5;
 uint32_t VAR_6;
 uint32_t VAR_7;
 int VAR_8;

 if (VAR_3 == ((void*)0) || VAR_4 < VAR_0)
  return (0);

 FUNC_4(VAR_3, 0, VAR_4);

 VAR_5 = FUNC_1(VAR_2);
 VAR_7 = FUNC_0(VAR_2);
 VAR_6 = FUNC_2(VAR_2);

 if (VAR_7 <= VAR_6)
  return (0);
 for (VAR_8 = 0; VAR_1[VAR_8].name != ((void*)0); VAR_8++) {
  if (VAR_5 != VAR_1[VAR_8].afmt)
   continue;

  FUNC_5(VAR_3, VAR_4, "%s:%d.%d",
      VAR_1[VAR_8].name, VAR_7 - VAR_6, VAR_6);
  return (FUNC_3(VAR_5, VAR_7, VAR_6));
 }
 return (0);
}
