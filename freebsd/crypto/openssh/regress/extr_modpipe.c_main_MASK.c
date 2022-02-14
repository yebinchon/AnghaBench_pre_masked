
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;
struct modification {size_t offset; int what; int m2; int m1; } ;
typedef size_t ssize_t ;
typedef int buf ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int,char**,char*) ;
 int VAR_6 ;
 int FUNC_4 (int ,struct modification*) ;
 size_t FUNC_5 (int ,int *,int) ;
 int VAR_7 ;
 int FUNC_6 () ;
 size_t FUNC_7 (int ,int *,size_t) ;

int
FUNC_8(int VAR_8, char **VAR_9)
{
 int VAR_10;
 u_char VAR_11[8192];
 size_t VAR_12;
 ssize_t VAR_13, VAR_14, VAR_15;
 struct modification VAR_16[VAR_2];
 u_int VAR_17, VAR_18 = 0, VAR_19 = 0;

 while ((VAR_10 = FUNC_3(VAR_8, VAR_9, "wm:")) != -1) {
  switch (VAR_10) {
  case 'm':
   if (VAR_19 >= VAR_2)
    FUNC_1(1, "Too many modifications");
   FUNC_4(VAR_6, &(VAR_16[VAR_19++]));
   break;
  case 'w':
   VAR_18 = 1;
   break;
  default:
   FUNC_6();

  }
 }
 for (VAR_12 = 0;;) {
  VAR_13 = VAR_14 = FUNC_5(VAR_3, VAR_11, sizeof(VAR_11));
  if (VAR_13 == 0)
   break;
  if (VAR_13 < 0) {
   if (VAR_5 == VAR_0 || VAR_5 == VAR_1)
    continue;
   FUNC_0(1, "read");
  }
  for (VAR_17 = 0; VAR_17 < VAR_19; VAR_17++) {
   if (VAR_16[VAR_17].offset < VAR_12 ||
       VAR_16[VAR_17].offset >= VAR_12 + VAR_14)
    continue;
   switch (VAR_16[VAR_17].what) {
   case 128:
    VAR_11[VAR_16[VAR_17].offset - VAR_12] ^= VAR_16[VAR_17].m1;
    break;
   case 129:
    VAR_11[VAR_16[VAR_17].offset - VAR_12] &= VAR_16[VAR_17].m1;
    VAR_11[VAR_16[VAR_17].offset - VAR_12] |= VAR_16[VAR_17].m2;
    break;
   }
  }
  for (VAR_15 = 0; VAR_15 < VAR_14; VAR_15 += VAR_13) {
   VAR_13 = FUNC_7(VAR_4, VAR_11, VAR_14 - VAR_15);
   if (VAR_13 == 0)
    break;
   if (VAR_13 < 0) {
    if (VAR_5 == VAR_0 || VAR_5 == VAR_1)
     continue;
    FUNC_0(1, "write");
   }
  }
  VAR_12 += VAR_14;
 }

 VAR_13 = 0;
 for (VAR_17 = 0; VAR_18 && VAR_17 < VAR_19; VAR_17++) {
  if (VAR_16[VAR_17].offset < VAR_12)
   continue;
  VAR_13 = 1;
  FUNC_2(VAR_7, "modpipe: warning - mod %u not reached\n", VAR_17);
 }
 return VAR_13;
}
