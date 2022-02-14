
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int gl_pathc; int gl_flags; scalar_t__ gl_offs; scalar_t__ gl_pathv; } ;
typedef TYPE_1__ glob_t ;
typedef int Char ;


 void* FUNC_0 (int) ;
 int VAR_0 ;

 int VAR_1 ;

 int const VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int * FUNC_1 (int const*,int) ;
 int FUNC_2 (int*,TYPE_1__*,size_t*) ;
 int FUNC_3 (int const*,TYPE_1__*,size_t*) ;
 int* FUNC_4 (int const*,int*,TYPE_1__*) ;
 int FUNC_5 (char*,int*) ;
 int FUNC_6 (scalar_t__,int,int,int ) ;

__attribute__((used)) static int
FUNC_7(const Char *VAR_16, glob_t *VAR_17)
{
 const Char *VAR_18;
 int VAR_19, VAR_20, VAR_21;
 Char *VAR_22, VAR_23[VAR_14+1];
 size_t VAR_24 = 0;

 VAR_18 = FUNC_4(VAR_16, VAR_23, VAR_17);
 VAR_21 = VAR_17->gl_pathc;
 VAR_22 = VAR_23;


 while ((VAR_19 = *VAR_18++) != VAR_0) {
  switch (VAR_19) {
  case 130:
   VAR_19 = *VAR_18;
   if (VAR_19 == VAR_1)
    ++VAR_18;
   if (*VAR_18 == VAR_0 ||
       FUNC_1(VAR_18+1, VAR_3) == ((void*)0)) {
    *VAR_22++ = 130;
    if (VAR_19 == VAR_1)
     --VAR_18;
    break;
   }
   *VAR_22++ = VAR_13;
   if (VAR_19 == VAR_1)
    *VAR_22++ = VAR_10;
   VAR_19 = *VAR_18++;
   do {
    *VAR_22++ = FUNC_0(VAR_19);
    if (*VAR_18 == VAR_2 &&
        (VAR_19 = VAR_18[1]) != VAR_3) {
     *VAR_22++ = VAR_12;
     *VAR_22++ = FUNC_0(VAR_19);
     VAR_18 += 2;
    }
   } while ((VAR_19 = *VAR_18++) != VAR_3);
   VAR_17->gl_flags |= VAR_4;
   *VAR_22++ = VAR_9;
   break;
  case 129:
   VAR_17->gl_flags |= VAR_4;
   *VAR_22++ = VAR_11;
   break;
  case 128:
   VAR_17->gl_flags |= VAR_4;



   if (VAR_22 == VAR_23 || VAR_22[-1] != VAR_8)
       *VAR_22++ = VAR_8;
   break;
  default:
   *VAR_22++ = FUNC_0(VAR_19);
   break;
  }
 }
 *VAR_22 = VAR_0;




 if ((VAR_20 = FUNC_2(VAR_23, VAR_17, &VAR_24)) != 0)
  return(VAR_20);







 if (VAR_17->gl_pathc == VAR_21 &&
     ((VAR_17->gl_flags & VAR_5) ||
       ((VAR_17->gl_flags & VAR_6) &&
        !(VAR_17->gl_flags & VAR_4))))
  return(FUNC_3(VAR_16, VAR_17, &VAR_24));
 else if (!(VAR_17->gl_flags & VAR_7))
  FUNC_6(VAR_17->gl_pathv + VAR_17->gl_offs + VAR_21,
      VAR_17->gl_pathc - VAR_21, sizeof(char *), VAR_15);
 return(0);
}
