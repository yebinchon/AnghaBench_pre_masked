
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct glob_limit {int dummy; } ;
struct TYPE_6__ {size_t gl_pathc; int gl_flags; } ;
typedef TYPE_1__ glob_t ;
typedef int Char ;


 void* FUNC_0 (int) ;
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
 int VAR_10 ;
 int VAR_11 ;

 int const VAR_12 ;
 int VAR_13 ;

 int VAR_14 ;
 int * FUNC_1 (int const*,int) ;
 int FUNC_2 (int*,TYPE_1__*,struct glob_limit*) ;
 int FUNC_3 (TYPE_1__*,struct glob_limit*,size_t,char const*) ;
 int* FUNC_4 (int const*,int*,int,TYPE_1__*) ;
 int FUNC_5 (char*,int*) ;

__attribute__((used)) static int
FUNC_6(const Char *VAR_15, glob_t *VAR_16, struct glob_limit *VAR_17,
    const char *VAR_18) {
 const Char *VAR_19;
 int VAR_20;
 size_t VAR_21;
 Char *VAR_22, VAR_23, VAR_24[VAR_4];

 VAR_19 = FUNC_4(VAR_15, VAR_24, VAR_4, VAR_16);
 if (VAR_19 == ((void*)0)) {
  VAR_14 = VAR_0;
  return (VAR_3);
 }
 VAR_21 = VAR_16->gl_pathc;
 VAR_22 = VAR_24;


 while ((VAR_23 = *VAR_19++) != VAR_1) {
  switch (VAR_23) {
  case 130:
   VAR_23 = *VAR_19;
   if (VAR_23 == VAR_11)
    ++VAR_19;
   if (*VAR_19 == VAR_1 ||
       FUNC_1(VAR_19+1, VAR_13) == ((void*)0)) {
    *VAR_22++ = 130;
    if (VAR_23 == VAR_11)
     --VAR_19;
    break;
   }
   *VAR_22++ = VAR_10;
   if (VAR_23 == VAR_11)
    *VAR_22++ = VAR_7;
   VAR_23 = *VAR_19++;
   do {
    *VAR_22++ = FUNC_0(VAR_23);
    if (*VAR_19 == VAR_12 &&
        (VAR_23 = VAR_19[1]) != VAR_13) {
     *VAR_22++ = VAR_9;
     *VAR_22++ = FUNC_0(VAR_23);
     VAR_19 += 2;
    }
   } while ((VAR_23 = *VAR_19++) != VAR_13);
   VAR_16->gl_flags |= VAR_2;
   *VAR_22++ = VAR_6;
   break;
  case 129:
   VAR_16->gl_flags |= VAR_2;
   *VAR_22++ = VAR_8;
   break;
  case 128:
   VAR_16->gl_flags |= VAR_2;




   if (VAR_22 == VAR_24 || VAR_22[-1] != VAR_5)
       *VAR_22++ = VAR_5;
   break;
  default:
   *VAR_22++ = FUNC_0(VAR_23);
   break;
  }
 }
 *VAR_22 = VAR_1;




 if ((VAR_20 = FUNC_2(VAR_24, VAR_16, VAR_17)) != 0)
  return(VAR_20);

 if (VAR_18 != ((void*)0))
  return (FUNC_3(VAR_16, VAR_17, VAR_21, VAR_18));

 return (0);
}
