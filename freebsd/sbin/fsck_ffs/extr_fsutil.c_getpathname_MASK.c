
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inodesc {scalar_t__ id_parent; scalar_t__ id_number; char* id_name; int id_func; int id_fix; int id_type; } ;
typedef scalar_t__ ino_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ,struct inodesc*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*,char*,size_t) ;
 int FUNC_4 (struct inodesc*,int ,int) ;
 int FUNC_5 (char*,char*) ;
 char* FUNC_6 (char*) ;
 int FUNC_7 (char*) ;

void
FUNC_8(char *VAR_8, ino_t VAR_9, ino_t VAR_10)
{
 int VAR_11;
 char *VAR_12;
 struct inodesc VAR_13;
 static int VAR_14 = 0;

 if (VAR_9 == VAR_10 && VAR_10 == VAR_5) {
  (void)FUNC_5(VAR_8, "/");
  return;
 }
 if (VAR_14 || !FUNC_0(VAR_9)) {
  (void)FUNC_5(VAR_8, "?");
  return;
 }
 VAR_14 = 1;
 FUNC_4(&VAR_13, 0, sizeof(struct inodesc));
 VAR_13.id_type = VAR_0;
 VAR_13.id_fix = VAR_2;
 VAR_12 = &VAR_8[VAR_3 - 1];
 *VAR_12 = '\0';
 if (VAR_9 != VAR_10) {
  VAR_13.id_parent = VAR_9;
  goto namelookup;
 }
 while (VAR_10 != VAR_5) {
  VAR_13.id_number = VAR_10;
  VAR_13.id_func = VAR_6;
  VAR_13.id_name = FUNC_6("..");
  if ((FUNC_1(FUNC_2(VAR_10), &VAR_13) & VAR_1) == 0)
   break;
 namelookup:
  VAR_13.id_number = VAR_13.id_parent;
  VAR_13.id_parent = VAR_10;
  VAR_13.id_func = VAR_7;
  VAR_13.id_name = VAR_8;
  if ((FUNC_1(FUNC_2(VAR_13.id_number), &VAR_13)&VAR_1) == 0)
   break;
  VAR_11 = FUNC_7(VAR_8);
  VAR_12 -= VAR_11;
  FUNC_3(VAR_12, VAR_8, (size_t)VAR_11);
  *--VAR_12 = '/';
  if (VAR_12 < &VAR_8[VAR_4])
   break;
  VAR_10 = VAR_13.id_number;
 }
 VAR_14 = 0;
 if (VAR_10 != VAR_5)
  *--VAR_12 = '?';
 FUNC_3(VAR_8, VAR_12, (size_t)(&VAR_8[VAR_3] - VAR_12));
}
