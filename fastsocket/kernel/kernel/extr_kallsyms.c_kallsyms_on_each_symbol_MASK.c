
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned long* VAR_1 ;
 unsigned int FUNC_0 (unsigned int,char*) ;
 unsigned long VAR_2 ;
 int FUNC_1 (int (*) (void*,char const*,struct module*,unsigned long),void*) ;

int FUNC_2(int (*VAR_3)(void *, const char *, struct module *,
          unsigned long),
       void *VAR_4)
{
 char VAR_5[VAR_0];
 unsigned long VAR_6;
 unsigned int VAR_7;
 int VAR_8;

 for (VAR_6 = 0, VAR_7 = 0; VAR_6 < VAR_2; VAR_6++) {
  VAR_7 = FUNC_0(VAR_7, VAR_5);
  VAR_8 = VAR_3(VAR_4, VAR_5, ((void*)0), VAR_1[VAR_6]);
  if (VAR_8 != 0)
   return VAR_8;
 }
 return FUNC_1(VAR_3, VAR_4);
}
