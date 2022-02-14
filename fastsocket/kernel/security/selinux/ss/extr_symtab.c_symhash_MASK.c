
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hashtab {int size; } ;


 unsigned int FUNC_0 (char const*) ;

__attribute__((used)) static unsigned int FUNC_1(struct hashtab *VAR_0, const void *VAR_1)
{
 const char *VAR_2, *VAR_3;
 unsigned int VAR_4;
 unsigned int VAR_5;

 VAR_5 = 0;
 VAR_3 = VAR_1;
 VAR_4 = FUNC_0(VAR_3);
 for (VAR_2 = VAR_3; (VAR_2 - VAR_3) < VAR_4; VAR_2++)
  VAR_5 = (VAR_5 << 4 | (VAR_5 >> (8*sizeof(unsigned int)-4))) ^ (*VAR_2);
 return VAR_5 & (VAR_0->size - 1);
}
