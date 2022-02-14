
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int nvlist_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (void*,size_t*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int const*) ;
 char* FUNC_3 (int const*,int*,void**) ;
 scalar_t__ FUNC_4 (char const*,char*) ;

__attribute__((used)) static int
FUNC_5(const nvlist_t *VAR_10, bool VAR_11)
{
 const char *VAR_12;
 void *VAR_13;
 int VAR_14;
 size_t VAR_15;
 unsigned int VAR_16, VAR_17;


 if (VAR_10 == ((void*)0))
  return (VAR_2);
 if (FUNC_2(VAR_10) != 0)
  return (FUNC_2(VAR_10));






 VAR_17 = 0;
 VAR_13 = ((void*)0);
 while ((VAR_12 = FUNC_3(VAR_10, &VAR_14, &VAR_13)) != ((void*)0)) {
  if ((FUNC_4(VAR_12, "name") == 0 && VAR_14 == VAR_9) ||
      (FUNC_4(VAR_12, "mib") == 0 && VAR_14 == VAR_7)) {
   if (FUNC_4(VAR_12, "mib") == 0) {

    (void)FUNC_0(VAR_13, &VAR_15);
    if (VAR_15 % sizeof(int) != 0)
     return (VAR_2);
    VAR_16 = 0x02;
   } else
    VAR_16 = 0x01;




   if ((VAR_17 & VAR_16) != 0 ||
       (!VAR_11 && (VAR_17 & (0x01 | 0x02)) != 0))
    return (VAR_2);
   VAR_17 |= VAR_16;
  } else if (FUNC_4(VAR_12, "operation") == 0) {
   uint64_t VAR_18, VAR_19;

   if (VAR_14 != VAR_8)
    return (VAR_2);

   VAR_19 = FUNC_1(VAR_13);





   VAR_18 = VAR_11 ? (VAR_0 |
       VAR_1) : VAR_0;
   if ((VAR_19 & ~VAR_18) != 0 ||
       (VAR_19 & VAR_0) == 0)
    return (VAR_2);

   if ((VAR_17 & 0x04) != 0)
    return (VAR_2);
   VAR_17 |= 0x04;
  } else if (VAR_11)
   return (VAR_2);
 }

 if ((VAR_17 & 0x04) == 0 || (VAR_17 & (0x01 | 0x02)) == 0)
  return (VAR_2);






 return (0);
}
