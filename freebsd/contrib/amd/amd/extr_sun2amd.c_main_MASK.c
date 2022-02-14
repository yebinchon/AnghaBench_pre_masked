
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,char**,char*) ;
 int VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int FUNC_2 (int *,int *) ;
 int * FUNC_3 (int ,char*) ;
 int FUNC_4 () ;

int
FUNC_5(int VAR_3, char **VAR_4)
{

  FILE *VAR_5 = VAR_1, *VAR_6 = VAR_2;
  int VAR_7, VAR_8 = 1;

  while ((VAR_7 = FUNC_1(VAR_3, VAR_4 , "i:o:hH")) != -1) {
    switch (VAR_7) {

    case 'i':
      if ((VAR_5 = FUNC_3(VAR_0,"r")) == ((void*)0)) {
 goto err;
      }
      break;

    case 'o':
      if ((VAR_6 = FUNC_3(VAR_0,"w")) == ((void*)0)) {
 goto err;
      }
      break;

    case 'h':
    case 'H':
      FUNC_4();
      goto err;
    }
  }

  VAR_8 = FUNC_2(VAR_5,VAR_6);

 err:
  FUNC_0(VAR_8);
}
