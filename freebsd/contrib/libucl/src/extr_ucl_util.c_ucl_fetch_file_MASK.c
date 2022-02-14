
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {size_t st_size; int st_mode; } ;
typedef int UT_string ;


 unsigned char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int FUNC_2 (unsigned char const*,int ) ;
 int FUNC_3 (unsigned char const*,struct stat*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int **,char*,unsigned char const*,int ) ;
 unsigned char* FUNC_6 (int *,size_t,int ,int ,int,int ) ;

bool
FUNC_7 (const unsigned char *VAR_5, unsigned char **VAR_6, size_t *VAR_7,
  UT_string **VAR_8, bool VAR_9)
{
 int VAR_10;
 struct stat VAR_11;

 if (FUNC_3 (VAR_5, &VAR_11) == -1 || !FUNC_0 (VAR_11.st_mode)) {
  if (VAR_9) {
   FUNC_5 (VAR_8, "cannot stat file %s: %s",
     VAR_5, FUNC_4 (VAR_4));
  }
  return 0;
 }
 if (VAR_11.st_size == 0) {

  *VAR_6 = ((void*)0);
  *VAR_7 = 0;
 }
 else {
  if ((VAR_10 = FUNC_2 (VAR_5, VAR_2)) == -1) {
   FUNC_5 (VAR_8, "cannot open file %s: %s",
     VAR_5, FUNC_4 (VAR_4));
   return 0;
  }
  if ((*VAR_6 = FUNC_6 (((void*)0), VAR_11.st_size, VAR_3, VAR_1, VAR_10, 0)) == VAR_0) {
   FUNC_1 (VAR_10);
   FUNC_5 (VAR_8, "cannot mmap file %s: %s",
     VAR_5, FUNC_4 (VAR_4));
   *VAR_6 = ((void*)0);

   return 0;
  }
  *VAR_7 = VAR_11.st_size;
  FUNC_1 (VAR_10);
 }

 return 1;
}
