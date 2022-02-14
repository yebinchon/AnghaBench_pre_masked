
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int _TFILE_BASE ;






 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int,char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 char* FUNC_6 (char*) ;
 int * VAR_8 ;
 int FUNC_7 () ;
 int VAR_9 ;
 int * FUNC_8 (size_t) ;
 int FUNC_9 (int *,char const*,size_t) ;
 scalar_t__ FUNC_10 (char*,int) ;
 int FUNC_11 (int,char**) ;
 int FUNC_12 (int,char*) ;
 int FUNC_13 (int ,char*) ;
 int VAR_10 ;
 size_t FUNC_14 (char const*) ;
 int FUNC_15 (int ,int ,char*) ;
 int * VAR_11 ;
 int * VAR_12 ;
 scalar_t__ FUNC_16 () ;

int
FUNC_17(int VAR_13, char *VAR_14[])
{
 const char *VAR_15;
 size_t VAR_16;

 (void) FUNC_13(VAR_0, "");
 VAR_9 = VAR_10;



 VAR_5 = FUNC_10(".", VAR_2 | VAR_1);
 if (VAR_5 < 0) {
  FUNC_15(0, VAR_6, "Can't open current working directory.");
  return(VAR_7);
 }




 if ((VAR_15 = FUNC_6("TMPDIR")) == ((void*)0) || *VAR_15 == '\0')
  VAR_15 = VAR_3;
 VAR_16 = FUNC_14(VAR_15);
 while (VAR_16 > 0 && VAR_15[VAR_16 - 1] == '/')
  VAR_16--;
 VAR_12 = FUNC_8(VAR_16 + 1 + sizeof(_TFILE_BASE));
 if (VAR_12 == ((void*)0)) {
  FUNC_12(1, "Cannot allocate memory for temp file name.");
  return(VAR_7);
 }
 if (VAR_16)
  FUNC_9(VAR_12, VAR_15, VAR_16);
 VAR_11 = VAR_12 + VAR_16;
 *VAR_11++ = '/';




 FUNC_11(VAR_13, VAR_14);
 if ((FUNC_5() < 0) || (FUNC_16() < 0))
  return(VAR_7);




 switch (VAR_4) {
 case 129:
  FUNC_4();
  break;
 case 131:
  FUNC_1();
  break;
 case 132:
  if (VAR_8 != ((void*)0))
   FUNC_3(1, "can not gzip while appending");
  FUNC_0();
  break;
 case 130:
  FUNC_2();
  break;
 default:
 case 128:
  FUNC_7();
  break;
 }
 return(VAR_7);
}
