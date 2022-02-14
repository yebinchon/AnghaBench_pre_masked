
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_long ;
struct partition {size_t p_size; size_t p_offset; int p_fstype; size_t p_fsize; size_t p_frag; size_t p_cpg; } ;
struct disklabel {struct partition* d_partitions; } ;


 size_t VAR_0 ;



 int FUNC_0 (size_t) ;
 int FUNC_1 (char,size_t) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ,char*,int,...) ;
 char const** VAR_2 ;
 scalar_t__ FUNC_3 (char) ;
 char* VAR_3 ;
 char* VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (char const*,char*) ;
 size_t FUNC_5 (char*,char**,int) ;
 char* FUNC_6 (char*) ;

__attribute__((used)) static int
FUNC_7(char *VAR_6, struct disklabel *VAR_7, int VAR_8, int VAR_9)
{
 struct partition *VAR_10;
 char *VAR_11, *VAR_12;
 const char **VAR_13;
 u_long VAR_14;

 VAR_10 = &VAR_7->d_partitions[VAR_8];
 VAR_11 = ((void*)0);

 VAR_14 = 0;
 FUNC_1(VAR_4[VAR_8],VAR_14);
 if (VAR_14 == 0 && VAR_4[VAR_8] != '*') {
  FUNC_2(VAR_5,
      "line %d: %s: bad partition size\n", VAR_9, VAR_11);
  return (1);
 }
 VAR_10->p_size = VAR_14;

 VAR_14 = 0;
 FUNC_1(VAR_3[VAR_8],VAR_14);
 if (VAR_14 == 0 && VAR_3[VAR_8] != '*' &&
     VAR_3[VAR_8] != '\0') {
  FUNC_2(VAR_5,
      "line %d: %s: bad partition offset\n", VAR_9, VAR_11);
  return (1);
 }
 VAR_10->p_offset = VAR_14;
 if (VAR_6 == ((void*)0)) {
  FUNC_2(VAR_5, "line %d: missing file system type\n", VAR_9);
  return (1);
 }
 VAR_11 = VAR_6, VAR_6 = FUNC_6(VAR_11);
 for (VAR_13 = VAR_2; VAR_13 < &VAR_2[VAR_0]; VAR_13++)
  if (*VAR_13 && !FUNC_4(*VAR_13, VAR_11))
   break;
 if (*VAR_13 != ((void*)0)) {
  VAR_10->p_fstype = VAR_13 - VAR_2;
 } else {
  if (FUNC_3(*VAR_11)) {
   VAR_1 = 0;
   VAR_14 = FUNC_5(VAR_11, &VAR_12, 10);
   if (VAR_1 != 0 || *VAR_12 != '\0')
    VAR_14 = VAR_0;
  } else
   VAR_14 = VAR_0;
  if (VAR_14 >= VAR_0) {
   FUNC_2(VAR_5,
       "line %d: Warning, unknown file system type %s\n",
       VAR_9, VAR_11);
   VAR_14 = 128;
  }
  VAR_10->p_fstype = VAR_14;
 }

 switch (VAR_10->p_fstype) {
 case 128:
 case 130:
 case 129:

  if (VAR_6) {
   FUNC_0(VAR_10->p_fsize);
   if (VAR_10->p_fsize == 0)
    break;
   FUNC_0(VAR_14);
   VAR_10->p_frag = VAR_14 / VAR_10->p_fsize;
   if (VAR_6 != ((void*)0))
    FUNC_0(VAR_10->p_cpg);
  }

  break;
 default:
  break;
 }
 return (0);
}
