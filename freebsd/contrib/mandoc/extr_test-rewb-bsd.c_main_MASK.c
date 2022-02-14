
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int regex_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,char*,int) ;
 scalar_t__ FUNC_1 (int *,char*,int ,int *,int ) ;

int
FUNC_2(void)
{
 regex_t VAR_3;

 if (FUNC_0(&VAR_3, "[[:<:]]word[[:>:]]", VAR_0 | VAR_2))
  return 1;
 if (FUNC_1(&VAR_3, "the word is here", 0, ((void*)0), 0))
  return 2;
 if (FUNC_1(&VAR_3, "same word", 0, ((void*)0), 0))
  return 3;
 if (FUNC_1(&VAR_3, "word again", 0, ((void*)0), 0))
  return 4;
 if (FUNC_1(&VAR_3, "word", 0, ((void*)0), 0))
  return 5;
 if (FUNC_1(&VAR_3, "wordy", 0, ((void*)0), 0) != VAR_1)
  return 6;
 if (FUNC_1(&VAR_3, "sword", 0, ((void*)0), 0) != VAR_1)
  return 7;
 if (FUNC_1(&VAR_3, "reworded", 0, ((void*)0), 0) != VAR_1)
  return 8;
 return 0;
}
