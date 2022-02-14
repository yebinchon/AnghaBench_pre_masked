
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* fts_path; int fts_info; } ;
typedef TYPE_1__ FTSENT ;
typedef int FTS ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char* const*,int,int *) ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (int *,TYPE_1__*,int ) ;
 int FUNC_4 (int,char const*,int) ;
 int FUNC_5 (int,int,char const*) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (char*,char const*) ;

int
FUNC_8(int VAR_10, int VAR_11)
{
 FTS *VAR_12;
 FTSENT *VAR_13;
 const char *VAR_14[2];
 const char *VAR_15;

 VAR_14[0] = ".";
 VAR_14[1] = (char *)((void*)0);

 if ((VAR_12 = FUNC_1((char * const *)VAR_14,
     VAR_2 | VAR_1, ((void*)0))) == ((void*)0)) {
  FUNC_6("fts_open");
  return -1;
 }

 while ((VAR_13 = FUNC_2(VAR_12)) != ((void*)0)) {
  VAR_15 = VAR_13->fts_path + 2;
  switch (VAR_13->fts_info) {
  case 128:
   if (FUNC_5(VAR_10, VAR_11, VAR_15) == -1) {
    FUNC_0(VAR_12);
    return -1;
   }
   break;
  case 130:
   if (*VAR_15 != '\0' &&
       FUNC_4(VAR_11, VAR_15, VAR_6 | VAR_4 |
         VAR_7 | VAR_5 | VAR_8) == -1 &&
       VAR_9 != VAR_0) {
    FUNC_6("mkdirat(%s)", VAR_15);
    (void)FUNC_3(VAR_12, VAR_13, VAR_3);
   }
   break;
  case 129:
   break;
  default:
   FUNC_7("%s: not a regular file", VAR_15);
   break;
  }
 }

 FUNC_0(VAR_12);
 return 0;
}
