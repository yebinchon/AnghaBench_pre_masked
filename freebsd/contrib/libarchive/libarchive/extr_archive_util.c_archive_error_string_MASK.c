
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive {char* error; } ;



const char *
FUNC_0(struct archive *VAR_0)
{

 if (VAR_0->error != ((void*)0) && *VAR_0->error != '\0')
  return (VAR_0->error);
 else
  return (((void*)0));
}
