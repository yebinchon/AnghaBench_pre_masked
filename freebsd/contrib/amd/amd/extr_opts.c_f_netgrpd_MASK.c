
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,int,char*) ;
 int FUNC_1 (char*,char*,int *,int *) ;
 char* VAR_0 ;
 char* FUNC_2 (char*,char) ;

__attribute__((used)) static int
FUNC_3(char *VAR_1)
{
  int VAR_2;
  char *VAR_3, *VAR_4;

  if ((VAR_3 = FUNC_2(VAR_1, ',')) != ((void*)0)) {
    *VAR_3 = '\0';
    VAR_4 = VAR_3 + 1;
  } else {
    VAR_4 = VAR_0;
  }
  VAR_2 = FUNC_1(VAR_1, VAR_4, ((void*)0), ((void*)0));
  FUNC_0("netgrp = %s status = %d hostd = %s", VAR_1, VAR_2, VAR_4);
  if (VAR_3)
    *VAR_3 = ',';
  return VAR_2;
}
