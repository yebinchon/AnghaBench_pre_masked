
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 size_t FUNC_3 (char*,int,int,int *) ;
 void* FUNC_4 (void*,size_t,int,int,int,int ) ;
 int FUNC_5 (void*,size_t) ;

__attribute__((used)) static void *
FUNC_6 (size_t VAR_7, int VAR_8)
{
  size_t VAR_9 = 32 * 1024 * 1024;
  void *VAR_10, *VAR_11;
  FILE *VAR_12;
  bool VAR_13;

  VAR_10 = FUNC_4 ((void *)VAR_6, VAR_7, VAR_4 | VAR_5,
        VAR_2, VAR_8, 0);


  if (VAR_10 == (void *) VAR_1)
    return ((void*)0);

  FUNC_5 (VAR_10, VAR_7);


  if (VAR_6 && VAR_10 == (void *) VAR_6)
    return VAR_10;





  VAR_12 = FUNC_2 ("/proc/sys/kernel/randomize_va_space", "r");
  if (VAR_12 == ((void*)0))
    VAR_12 = FUNC_2 ("/proc/sys/kernel/exec-shield-randomize", "r");
  VAR_13 = 0;
  if (VAR_12 != ((void*)0))
    {
      char VAR_14[100];
      size_t VAR_15;

      VAR_15 = FUNC_3 (VAR_14, 1, sizeof VAR_14 - 1, VAR_12);
      if (VAR_15 > 0)
 {
   VAR_14[VAR_15] = '\0';
   VAR_13 = (FUNC_0 (VAR_14) > 0);
 }
      FUNC_1 (VAR_12);
    }


  if (!VAR_13)
    return VAR_10;


  VAR_11 = FUNC_4 (0, VAR_9, VAR_3, VAR_2 | VAR_0, -1, 0);
  VAR_10 = FUNC_4 (0, VAR_7, VAR_4 | VAR_5, VAR_2, VAR_8, 0);
  if (VAR_11 != (void *) VAR_1)
    FUNC_5 (VAR_11, VAR_9);
  if (VAR_10 == (void *) VAR_1)
    return ((void*)0);
  FUNC_5 (VAR_10, VAR_7);

  return VAR_10;
}
