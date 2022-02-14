
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {size_t st_size; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int,struct stat*) ;
 char* FUNC_5 (size_t) ;
 int FUNC_6 (char const*,int) ;
 size_t FUNC_7 (int,char*,size_t) ;
 size_t FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (char*,char*,size_t) ;
 size_t FUNC_10 (int,char*,size_t) ;

__attribute__((used)) static void
FUNC_11(const char *VAR_5)
{
 struct stat VAR_6;
 size_t VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
 char *VAR_12;
 int VAR_13 = 0, VAR_14;

 if ((VAR_14 = FUNC_6(VAR_5, VAR_1)) == -1) {



  if (VAR_4 != VAR_0)
   FUNC_2("failed to open %s", VAR_5);
  return;
 }

 if (FUNC_4(VAR_14, &VAR_6) == -1)
  FUNC_2("failed to fstat %s", VAR_5);

 if ((VAR_12 = FUNC_5((VAR_7 = VAR_6.st_size) + 1)) == ((void*)0))
  FUNC_2("failed to allocate memory for %s", VAR_5);

 if (FUNC_7(VAR_14, VAR_12, VAR_7) != VAR_7)
  FUNC_2("failed to read %s", VAR_5);

 VAR_12[VAR_7] = '\0';
 (void) FUNC_0(VAR_14);

 if ((VAR_14 = FUNC_6(VAR_5, VAR_3 | VAR_2)) == -1)
  FUNC_2("failed to open %s for writing", VAR_5);

 VAR_11 = FUNC_8("dof-data-");

 for (VAR_10 = 0, VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
  if (FUNC_9(&VAR_12[VAR_8], "dof-data-", VAR_11) != 0)
   continue;




  if (VAR_8 != 0 && VAR_12[VAR_8 - 1] != '\n')
   continue;

  if (VAR_13++ == 0) {
   FUNC_1("cleaned up old anonymous "
       "enabling in %s\n", VAR_5);
  }




  if (VAR_8 != VAR_10) {
   if (FUNC_10(VAR_14, &VAR_12[VAR_10], VAR_8 - VAR_10) != VAR_8 - VAR_10)
    FUNC_2("failed to write to %s", VAR_5);
  }




  for (VAR_9 = VAR_8; VAR_9 < VAR_7 && VAR_12[VAR_9] != '\n'; VAR_9++)
   continue;




  if ((VAR_10 = VAR_9 + 1) >= VAR_7)
   break;

  VAR_8 = VAR_9;
 }

 if (VAR_10 < VAR_7) {
  if (FUNC_10(VAR_14, &VAR_12[VAR_10], VAR_7 - VAR_10) != VAR_7 - VAR_10)
   FUNC_2("failed to write to %s", VAR_5);
 }

 (void) FUNC_0(VAR_14);
 FUNC_3(VAR_12);
}
