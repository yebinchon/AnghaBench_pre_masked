
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sub_seq {scalar_t__ lower; scalar_t__ upper; } ;
struct name_seq {int first_free; struct sub_seq* sseqs; } ;



__attribute__((used)) static struct sub_seq *FUNC_0(struct name_seq *VAR_0,
        u32 VAR_1)
{
 struct sub_seq *VAR_2 = VAR_0->sseqs;
 int VAR_3 = 0;
 int VAR_4 = VAR_0->first_free - 1;
 int VAR_5;

 while (VAR_3 <= VAR_4) {
  VAR_5 = (VAR_3 + VAR_4) / 2;
  if (VAR_1 < VAR_2[VAR_5].lower)
   VAR_4 = VAR_5 - 1;
  else if (VAR_1 > VAR_2[VAR_5].upper)
   VAR_3 = VAR_5 + 1;
  else
   return &VAR_2[VAR_5];
 }
 return ((void*)0);
}
