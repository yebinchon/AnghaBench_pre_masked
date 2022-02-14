
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_nvram_io {int dummy; } ;


 int FUNC_0 (struct bhnd_nvram_io*,size_t,void**,size_t,int *) ;
 int FUNC_1 (void*,void*,size_t) ;

__attribute__((used)) static int
FUNC_2(struct bhnd_nvram_io *VAR_0, size_t VAR_1,
         void *VAR_2, size_t VAR_3)
{
 void *VAR_4;
 int VAR_5;


 if ((VAR_5 = FUNC_0(VAR_0, VAR_1, &VAR_4, VAR_3, ((void*)0))))
  return (VAR_5);


 FUNC_1(VAR_4, VAR_2, VAR_3);
 return (0);
}
