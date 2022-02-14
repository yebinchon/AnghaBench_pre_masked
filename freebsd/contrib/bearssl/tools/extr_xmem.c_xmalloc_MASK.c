
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,unsigned long) ;
 void* FUNC_2 (size_t) ;
 int VAR_1 ;

void *
FUNC_3(size_t VAR_2)
{
 void *VAR_3;

 if (VAR_2 == 0) {
  return ((void*)0);
 }
 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3 == ((void*)0)) {

  FUNC_1(VAR_1, "ERROR: could not allocate %lu byte(s)\n",
   (unsigned long)VAR_2);
  FUNC_0(VAR_0);



 }
 return VAR_3;
}
