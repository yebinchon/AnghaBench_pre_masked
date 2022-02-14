
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct pcmchan_matrix {scalar_t__ ext; } ;
struct TYPE_2__ {scalar_t__ channels; scalar_t__ ext; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__,scalar_t__) ;
 struct pcmchan_matrix* FUNC_3 (scalar_t__) ;
 TYPE_1__* VAR_2 ;

uint32_t
FUNC_4(uint32_t VAR_3)
{
 struct pcmchan_matrix *VAR_4;
 uint32_t VAR_5, VAR_6, VAR_7;

 VAR_6 = FUNC_0(VAR_3);
 VAR_7 = FUNC_1(VAR_3);

 if (VAR_7 != 0) {
  for (VAR_5 = VAR_0; VAR_5 <= VAR_1; VAR_5++) {
   if (VAR_2[VAR_5].channels == VAR_6 &&
       VAR_2[VAR_5].ext == VAR_7)
   return (FUNC_2(VAR_3, VAR_6, VAR_7));
  }
 }

 VAR_4 = FUNC_3(VAR_6);
 if (VAR_4 == ((void*)0))
  return (0x00000000);

 return (FUNC_2(VAR_3, VAR_6, VAR_4->ext));
}
