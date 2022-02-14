
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FTSENT ;
typedef int FTS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_3 ;
 int * FUNC_1 (char* const*,int,int ) ;
 int * FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (char*) ;

int
FUNC_5(void)
{
 const char *VAR_4[2];
 FTS *VAR_5;
 FTSENT *VAR_6;

 VAR_4[0] = ".";
 VAR_4[1] = (char *)((void*)0);

 VAR_5 = FUNC_1((char * const *)VAR_4,
     VAR_1 | VAR_0, VAR_3);

 if (VAR_5 == ((void*)0)) {
  FUNC_4("fts_open");
  return 1;
 }

 VAR_6 = FUNC_2(VAR_5);

 if (VAR_6 == ((void*)0)) {
  FUNC_4("fts_read");
  return 1;
 }

 if (FUNC_3(VAR_5, VAR_6, VAR_2) != 0) {
  FUNC_4("fts_set");
  return 1;
 }

 if (FUNC_0(VAR_5) != 0) {
  FUNC_4("fts_close");
  return 1;
 }

 return 0;
}
