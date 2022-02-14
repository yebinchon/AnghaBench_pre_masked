
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Elf ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int *,char*) ;
 int FUNC_2 (int,char*,int,int) ;
 int * FUNC_3 (int,int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (char*,char*,...) ;

int
FUNC_10(char **VAR_3, int VAR_4)
{
 int VAR_5 = 0, VAR_6 = 0;
 Elf *VAR_7;
 int VAR_8, VAR_9, VAR_10;

 (void) FUNC_7(VAR_1);

 for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
  char *VAR_11 = VAR_3[VAR_10];

  if ((VAR_8 = FUNC_8(VAR_11, VAR_2)) < 0) {
   FUNC_9("Can't read input file %s", VAR_11);
   VAR_6++;
   continue;
  }

  if ((VAR_7 = FUNC_3(VAR_8, VAR_0, ((void*)0))) == ((void*)0)) {
   FUNC_9("Can't open input file %s: %s\n", VAR_11,
       FUNC_5(-1));
   VAR_6++;
   (void) FUNC_0(VAR_8);
   continue;
  }

  switch (FUNC_6(VAR_7)) {
  case 129:
   if ((VAR_9 = FUNC_1(VAR_8, VAR_7, VAR_11)) < 0)
    VAR_6++;
   else
    VAR_5 += VAR_9;
   break;
  case 128:
   VAR_5++;
   break;
  default:
   FUNC_9("Input file %s is corrupt\n", VAR_11);
   VAR_6++;
  }

  (void) FUNC_4(VAR_7);
  (void) FUNC_0(VAR_8);
 }

 if (VAR_6 > 0)
  return (-1);

 FUNC_2(2, "Found %d files in %d input files\n", VAR_5, VAR_4);

 return (VAR_5);
}
