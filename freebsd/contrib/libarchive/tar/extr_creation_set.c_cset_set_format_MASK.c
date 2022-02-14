
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct creation_set {char* create_format; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int,int ,char*) ;
 char* FUNC_2 (char const*) ;

void
FUNC_3(struct creation_set *VAR_0, const char *VAR_1)
{
 char *VAR_2;

 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2 == ((void*)0))
  FUNC_1(1, 0, "No memory");
 FUNC_0(VAR_0->create_format);
 VAR_0->create_format = VAR_2;
}
