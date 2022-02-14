
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpage {char* sec; void* desc; struct mlink* mlinks; } ;
struct mlink {char* dsec; int file; } ;
typedef int ssize_t ;
typedef int FILE ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int,char*) ;
 int * FUNC_3 (int ,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char**,size_t*,int *) ;
 scalar_t__ FUNC_6 (unsigned char) ;
 char* FUNC_7 (char*,size_t) ;
 void* FUNC_8 (char*,int) ;
 char* FUNC_9 (char*,char,size_t) ;
 int FUNC_10 (char*,char*,int) ;
 int FUNC_11 (char*,char*,size_t) ;
 int FUNC_12 (int ,char*,...) ;
 scalar_t__ FUNC_13 (char*,char*) ;
 char* FUNC_14 (char*,char) ;
 size_t FUNC_15 (char*) ;
 char* FUNC_16 (char*,char*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_17(struct mpage *VAR_1, int VAR_2)
{
 FILE *VAR_3;
 struct mlink *VAR_4;
 char *VAR_5, *VAR_6, *VAR_7, *VAR_8;
 size_t VAR_9, VAR_10, VAR_11;
 ssize_t VAR_12;
 int VAR_13;

 VAR_4 = VAR_1->mlinks;
 VAR_3 = VAR_2 == -1 ? FUNC_3(VAR_4->file, "r") : FUNC_2(VAR_2, "r");
 if (VAR_3 == ((void*)0)) {
  if (VAR_2 != -1)
   FUNC_0(VAR_2);
  if (VAR_0)
   FUNC_12(VAR_4->file, "&fopen");
  return;
 }

 VAR_5 = ((void*)0);
 VAR_9 = 0;



 while (FUNC_5(&VAR_5, &VAR_9, VAR_3) != -1) {
  if (*VAR_5 == '\n')
   continue;
  if ((VAR_8 = FUNC_14(VAR_5, '(')) == ((void*)0))
   break;
  if ((VAR_6 = FUNC_14(++VAR_8, ')')) == ((void*)0))
   break;
  FUNC_4(VAR_1->sec);
  VAR_1->sec = FUNC_8(VAR_8, VAR_6 - VAR_8);
  if (VAR_0 && *VAR_4->dsec != '\0' &&
      FUNC_13(VAR_1->sec, VAR_4->dsec))
   FUNC_12(VAR_4->file,
       "Section \"%s\" manual in %s directory",
       VAR_1->sec, VAR_4->dsec);
  break;
 }



 while (VAR_5 == ((void*)0) || *VAR_5 != '\n')
  if (FUNC_5(&VAR_5, &VAR_9, VAR_3) == -1)
   break;






 while (FUNC_5(&VAR_5, &VAR_9, VAR_3) != -1)
  if (*VAR_5 != '\n' && *VAR_5 != ' ')
   break;
 VAR_11 = 0;
 VAR_7 = ((void*)0);

 while ((VAR_12 = FUNC_5(&VAR_5, &VAR_9, VAR_3)) != -1) {
  if (*VAR_5 != ' ')
   break;
  VAR_13 = 0;
  while (FUNC_6((unsigned char)VAR_5[VAR_13]))
   VAR_13++;
  if (VAR_5[VAR_13] == '\0')
   continue;
  VAR_7 = FUNC_7(VAR_7, VAR_11 + VAR_12 - VAR_13);
  FUNC_10(VAR_7 + VAR_11, VAR_5 + VAR_13, VAR_12 - VAR_13);
  VAR_11 += VAR_12 - VAR_13;
  VAR_7[VAR_11 - 1] = ' ';
 }
 FUNC_4(VAR_5);
 if (((void*)0) == VAR_7 || '\0' == *VAR_7) {
  if (VAR_0)
   FUNC_12(VAR_4->file, "Cannot find NAME section");
  FUNC_1(VAR_3);
  FUNC_4(VAR_7);
  return;
 }

 VAR_7[VAR_11 - 1] = '\0';







 if (((void*)0) != (VAR_6 = FUNC_16(VAR_7, "- "))) {
  for (VAR_6 += 2; ' ' == *VAR_6 || '\b' == *VAR_6; VAR_6++)
                            ;
 } else {
  if (VAR_0)
   FUNC_12(VAR_4->file, "No dash in title line, "
       "reusing \"%s\" as one-line description", VAR_7);
  VAR_6 = VAR_7;
 }

 VAR_10 = FUNC_15(VAR_6);



 while (((void*)0) != (VAR_5 = FUNC_9(VAR_6, '\b', VAR_10))) {
  VAR_12 = VAR_5 - VAR_6;
  if (0 == VAR_12) {
   FUNC_11(VAR_5, VAR_5 + 1, VAR_10--);
   continue;
  }
  FUNC_11(VAR_5 - 1, VAR_5 + 1, VAR_10 - VAR_12);
  VAR_10 -= 2;
 }






 VAR_1->desc = FUNC_8(VAR_6, 150);
 FUNC_1(VAR_3);
 FUNC_4(VAR_7);
}
