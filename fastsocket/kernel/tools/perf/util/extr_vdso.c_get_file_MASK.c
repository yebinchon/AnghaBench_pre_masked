
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (void**,void**) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (void*,size_t) ;
 int FUNC_4 (char*) ;
 char* VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_5 (int,char*,size_t) ;

__attribute__((used)) static char *FUNC_6(void)
{
 char *VAR_2 = ((void*)0);
 char *VAR_3 = ((void*)0);
 void *VAR_4, *VAR_5;
 size_t VAR_6;
 int VAR_7;

 if (VAR_1)
  return VAR_0;

 if (FUNC_1(&VAR_4, &VAR_5))
  return ((void*)0);

 VAR_6 = VAR_5 - VAR_4;

 VAR_3 = FUNC_3(VAR_4, VAR_6);
 if (!VAR_3)
  return ((void*)0);

 VAR_7 = FUNC_4(VAR_0);
 if (VAR_7 < 0)
  goto out;

 if (VAR_6 == (size_t) FUNC_5(VAR_7, VAR_3, VAR_6))
  VAR_2 = VAR_0;

 FUNC_0(VAR_7);

 out:
 FUNC_2(VAR_3);

 VAR_1 = (VAR_2 != ((void*)0));
 return VAR_2;
}
