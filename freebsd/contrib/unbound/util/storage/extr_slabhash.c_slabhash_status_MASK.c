
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slabhash {size_t size; int * array; int shift; scalar_t__ mask; } ;
typedef int num ;


 int FUNC_0 (char*,char const*,unsigned int,unsigned int,int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (char*,int,char*,unsigned int) ;

void FUNC_3(struct slabhash* VAR_0, const char* VAR_1, int VAR_2)
{
 size_t VAR_3;
 char VAR_4[17];
 FUNC_0("Slabhash %s: %u tables mask=%x shift=%d",
  VAR_1, (unsigned)VAR_0->size, (unsigned)VAR_0->mask, VAR_0->shift);
 for(VAR_3=0; VAR_3<VAR_0->size; VAR_3++) {
  FUNC_2(VAR_4, sizeof(VAR_4), "table %u", (unsigned)VAR_3);
  FUNC_1(VAR_0->array[VAR_3], VAR_4, VAR_2);
 }
}
