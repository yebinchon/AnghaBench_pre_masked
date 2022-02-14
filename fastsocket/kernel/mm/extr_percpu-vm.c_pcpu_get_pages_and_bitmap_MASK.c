
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcpu_chunk {int populated; } ;
struct page {int dummy; } ;
typedef int pages ;


 int FUNC_0 (int) ;
 int FUNC_1 (unsigned long*,int ,int) ;
 int FUNC_2 (struct page**,int ,size_t) ;
 void* FUNC_3 (size_t) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static struct page **FUNC_4(struct pcpu_chunk *VAR_2,
            unsigned long **VAR_3,
            bool VAR_4)
{
 static struct page **VAR_5;
 static unsigned long *VAR_6;
 size_t VAR_7 = VAR_0 * VAR_1 * sizeof(VAR_5[0]);
 size_t VAR_8 = FUNC_0(VAR_1) *
        sizeof(unsigned long);

 if (!VAR_5 || !VAR_6) {
  if (VAR_4 && !VAR_5)
   VAR_5 = FUNC_3(VAR_7);
  if (VAR_4 && !VAR_6)
   VAR_6 = FUNC_3(VAR_8);
  if (!VAR_5 || !VAR_6)
   return ((void*)0);
 }

 FUNC_2(VAR_5, 0, VAR_7);
 FUNC_1(VAR_6, VAR_2->populated, VAR_1);

 *VAR_3 = VAR_6;
 return VAR_5;
}
