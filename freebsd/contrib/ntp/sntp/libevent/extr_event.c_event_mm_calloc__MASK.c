
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 size_t VAR_1 ;
 void* FUNC_0 (size_t,size_t) ;
 int VAR_2 ;
 void* FUNC_1 (void*,int ,size_t) ;
 void* FUNC_2 (size_t) ;

void *
FUNC_3(size_t VAR_3, size_t VAR_4)
{
 if (VAR_3 == 0 || VAR_4 == 0)
  return ((void*)0);

 if (&FUNC_2) {
  size_t VAR_5 = VAR_3 * VAR_4;
  void *VAR_6 = ((void*)0);
  if (VAR_3 > VAR_1 / VAR_4)
   goto error;
  VAR_6 = FUNC_2(VAR_5);
  if (VAR_6)
   return FUNC_1(VAR_6, 0, VAR_5);
 } else {
  void *VAR_7 = FUNC_0(VAR_3, VAR_4);





  return VAR_7;
 }

error:
 VAR_2 = VAR_0;
 return ((void*)0);
}
