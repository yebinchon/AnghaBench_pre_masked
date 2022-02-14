
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct pcmchan_matrix {size_t channels; size_t ext; } ;


 size_t FUNC_0 (size_t) ;
 size_t FUNC_1 (size_t) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 struct pcmchan_matrix* VAR_2 ;

struct pcmchan_matrix *
FUNC_2(uint32_t VAR_3)
{
 uint32_t VAR_4, VAR_5, VAR_6;

 VAR_5 = FUNC_0(VAR_3);
 VAR_6 = FUNC_1(VAR_3);

 for (VAR_4 = VAR_0; VAR_4 <= VAR_1; VAR_4++) {
  if (VAR_2[VAR_4].channels == VAR_5 &&
      VAR_2[VAR_4].ext == VAR_6)
   return (&VAR_2[VAR_4]);
 }

 return (((void*)0));
}
