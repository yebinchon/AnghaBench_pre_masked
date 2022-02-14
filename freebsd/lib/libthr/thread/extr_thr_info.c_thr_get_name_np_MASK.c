
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pthread {int * name; } ;


 int FUNC_0 (char*,int *,size_t) ;

__attribute__((used)) static void
FUNC_1(struct pthread *VAR_0, char *VAR_1, size_t VAR_2)
{

 if (VAR_0->name != ((void*)0))
  FUNC_0(VAR_1, VAR_0->name, VAR_2);
 else if (VAR_2 > 0)
  VAR_1[0] = '\0';
}
