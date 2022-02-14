
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct statfs {int f_bfree; int f_blocks; } ;
struct dir_ent {char softlim; char hardlim; char* dirname; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct dir_ent*) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (char*,int) ;
 int FUNC_6 (struct dir_ent*) ;
 scalar_t__ FUNC_7 (int) ;
 scalar_t__ FUNC_8 (char*,struct statfs*) ;
 int FUNC_9 (char*,char*,int) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*) ;

int
FUNC_12(int (*VAR_7)(char *), int (*VAR_8)(char *))
{
 char VAR_9[VAR_4];
 struct dir_ent *VAR_10;
 struct statfs VAR_11;
 int VAR_12;
 char VAR_13, VAR_14;
 int VAR_15 = 0;
 int VAR_16 = 0;
 int VAR_17 = 0;

 if (VAR_6 == -1 && (VAR_12 = FUNC_1()) != 0)
  return (VAR_12);

 if (VAR_5 == -1)
  FUNC_0();




 FUNC_4();
 FUNC_2();
 while (FUNC_5(VAR_9, VAR_4) >= 0) {
  if (FUNC_8(VAR_9, &VAR_11) < 0)
   continue;
  VAR_13 = (VAR_11.f_bfree < (VAR_11.f_blocks * VAR_6 / 100 )) ?
      1 : 0;
  VAR_14 = (VAR_11.f_bfree < VAR_3) ? 1 : 0;
  if (VAR_13) {
   if (VAR_7)
    (*VAR_7)(VAR_9);
   VAR_16++;
  }
  if (VAR_14) {
   if (VAR_8)
    (*VAR_8)(VAR_9);
   VAR_17++;
  }
  VAR_10 = (struct dir_ent *) FUNC_7(sizeof(struct dir_ent));
  if (VAR_10 == ((void*)0))
   return (VAR_1);
  VAR_10->softlim = VAR_13;
  VAR_10->hardlim = VAR_14;
  VAR_10->dirname = (char *) FUNC_7(VAR_4);
  if (VAR_10->dirname == ((void*)0)) {
   FUNC_3(VAR_10);
   return (VAR_1);
  }
  FUNC_9(VAR_10->dirname, VAR_9, VAR_4);
  FUNC_6(VAR_10);
  VAR_15++;
 }

 if (VAR_17 == VAR_15)
  return (VAR_0);
 if (VAR_16 == VAR_15)
  return (VAR_2);
 return (0);
}
