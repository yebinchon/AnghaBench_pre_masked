
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int snap3name ;
typedef int snap2name ;
typedef int snap1name ;
typedef int clone2name ;
typedef int clone1name ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ,char*,char*,int) ;
 int FUNC_3 (char*,int,char*,char*,int ) ;

void
FUNC_4(char *VAR_3, uint64_t VAR_4)
{
 char VAR_5[VAR_2];
 char VAR_6[VAR_2];
 char VAR_7[VAR_2];
 char VAR_8[VAR_2];
 char VAR_9[VAR_2];
 int VAR_10;

 (void) FUNC_3(VAR_5, sizeof (VAR_5),
     "%s@s1_%llu", VAR_3, VAR_4);
 (void) FUNC_3(VAR_6, sizeof (VAR_6),
     "%s/c1_%llu", VAR_3, VAR_4);
 (void) FUNC_3(VAR_7, sizeof (VAR_7),
     "%s@s2_%llu", VAR_6, VAR_4);
 (void) FUNC_3(VAR_8, sizeof (VAR_8),
     "%s/c2_%llu", VAR_3, VAR_4);
 (void) FUNC_3(VAR_9, sizeof (VAR_9),
     "%s@s3_%llu", VAR_6, VAR_4);

 VAR_10 = FUNC_0(VAR_8);
 if (VAR_10 && VAR_10 != VAR_1)
  FUNC_2(0, "dsl_destroy_head(%s) = %d", VAR_8, VAR_10);
 VAR_10 = FUNC_1(VAR_9, VAR_0);
 if (VAR_10 && VAR_10 != VAR_1)
  FUNC_2(0, "dsl_destroy_snapshot(%s) = %d", VAR_9, VAR_10);
 VAR_10 = FUNC_1(VAR_7, VAR_0);
 if (VAR_10 && VAR_10 != VAR_1)
  FUNC_2(0, "dsl_destroy_snapshot(%s) = %d", VAR_7, VAR_10);
 VAR_10 = FUNC_0(VAR_6);
 if (VAR_10 && VAR_10 != VAR_1)
  FUNC_2(0, "dsl_destroy_head(%s) = %d", VAR_6, VAR_10);
 VAR_10 = FUNC_1(VAR_5, VAR_0);
 if (VAR_10 && VAR_10 != VAR_1)
  FUNC_2(0, "dsl_destroy_snapshot(%s) = %d", VAR_5, VAR_10);
}
