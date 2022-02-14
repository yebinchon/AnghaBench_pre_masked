
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tomoyo_page_buffer {int dummy; } ;
struct path {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (struct path*,char*,int) ;

char *FUNC_4(struct path *VAR_1)
{
 char *VAR_2 = FUNC_1(sizeof(struct tomoyo_page_buffer));

 FUNC_0(sizeof(struct tomoyo_page_buffer)
       <= VAR_0 - 1);
 if (!VAR_2)
  return ((void*)0);
 if (FUNC_3(VAR_1, VAR_2,
           VAR_0 - 1) == 0)
  return VAR_2;
 FUNC_2(VAR_2);
 return ((void*)0);
}
