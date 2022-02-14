
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cleanup {int dummy; } ;
typedef scalar_t__ ULONGEST ;
typedef scalar_t__ CORE_ADDR ;


 int FUNC_0 (struct cleanup*) ;
 int FUNC_1 (char*,char*,char*,scalar_t__,void*,scalar_t__) ;
 int FUNC_2 (char*,char*,void*,scalar_t__) ;
 int FUNC_3 (char*) ;
 struct cleanup* FUNC_4 (int ,void*) ;
 int VAR_0 ;
 scalar_t__ FUNC_5 (char*) ;
 char* FUNC_6 (char**,int *) ;
 char* FUNC_7 (char**,int *) ;
 scalar_t__ FUNC_8 (char*,char*) ;
 int FUNC_9 (scalar_t__,void*,scalar_t__) ;
 int VAR_1 ;
 void* FUNC_10 (scalar_t__) ;

__attribute__((used)) static void
FUNC_11 (char *VAR_2, char *VAR_3, char *VAR_4)
{
  struct cleanup *VAR_5 = FUNC_4 (VAR_0, ((void*)0));
  CORE_ADDR VAR_6;
  CORE_ADDR VAR_7;
  ULONGEST VAR_8;
  char *VAR_9;
  void *VAR_10;
  char *VAR_11;
  char *VAR_12;
  int VAR_13;


  VAR_9 = FUNC_7 (&VAR_2, ((void*)0));


  if (VAR_2 == ((void*)0) || *VAR_2 == '\0')
    FUNC_3 ("Missing start address.");
  VAR_11 = FUNC_6 (&VAR_2, ((void*)0));


  if (VAR_2 == ((void*)0) || *VAR_2 == '\0')
    FUNC_3 ("Missing stop address.");
  VAR_12 = VAR_2;

  VAR_6 = FUNC_5 (VAR_11);
  VAR_7 = FUNC_5 (VAR_12);
  if (VAR_7 <= VAR_6)
    FUNC_3 ("Invalid memory address range (start >= end).");
  VAR_8 = VAR_7 - VAR_6;



  VAR_10 = FUNC_10 (VAR_8);
  FUNC_4 (VAR_1, VAR_10);
  FUNC_9 (VAR_6, VAR_10, VAR_8);


  if (VAR_4 == ((void*)0) || FUNC_8 (VAR_4, "binary") == 0)
    {
      FUNC_2 (VAR_9, VAR_3, VAR_10, VAR_8);
    }
  else
    {
      FUNC_1 (VAR_9, VAR_3, VAR_4, VAR_6, VAR_10, VAR_8);
    }

  FUNC_0 (VAR_5);
}
