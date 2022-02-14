
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 void* FUNC_0 (size_t,size_t) ;
 int VAR_5 ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (size_t) ;
 int FUNC_3 (void*,void*,size_t) ;
 int FUNC_4 (char*,int ,size_t) ;

void *
FUNC_5(void *VAR_6, size_t VAR_7, size_t VAR_8, size_t VAR_9)
{
 size_t VAR_10, VAR_11;
 void *VAR_12;

 if (VAR_6 == ((void*)0))
  return FUNC_0(VAR_8, VAR_9);

 if ((VAR_8 >= VAR_3 || VAR_9 >= VAR_3) &&
     VAR_8 > 0 && VAR_4 / VAR_8 < VAR_9) {
  VAR_5 = VAR_1;
  return ((void*)0);
 }
 VAR_11 = VAR_8 * VAR_9;

 if ((VAR_7 >= VAR_3 || VAR_9 >= VAR_3) &&
     VAR_7 > 0 && VAR_4 / VAR_7 < VAR_9) {
  VAR_5 = VAR_0;
  return ((void*)0);
 }
 VAR_10 = VAR_7 * VAR_9;





 if (VAR_11 <= VAR_10) {
  size_t VAR_13 = VAR_10 - VAR_11;

  if (VAR_13 < VAR_10 / 2 && VAR_13 < VAR_2) {
   FUNC_4((char *)VAR_6 + VAR_11, 0, VAR_13);
   return VAR_6;
  }
 }

 VAR_12 = FUNC_2(VAR_11);
 if (VAR_12 == ((void*)0))
  return ((void*)0);

 if (VAR_11 > VAR_10) {
  FUNC_3(VAR_12, VAR_6, VAR_10);
  FUNC_4((char *)VAR_12 + VAR_10, 0, VAR_11 - VAR_10);
 } else
  FUNC_3(VAR_12, VAR_6, VAR_11);
 FUNC_1(VAR_6);

 return VAR_12;
}
