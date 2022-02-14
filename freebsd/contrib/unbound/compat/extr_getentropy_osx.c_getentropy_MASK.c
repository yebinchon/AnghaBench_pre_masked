
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*,size_t) ;
 int FUNC_1 (void*,size_t) ;
 int FUNC_2 (int ) ;

int
FUNC_3(void *VAR_3, size_t VAR_4)
{
 int VAR_5 = -1;

 if (VAR_4 > 256) {
  VAR_2 = VAR_0;
  return -1;
 }







 VAR_5 = FUNC_1(VAR_3, VAR_4);
 if (VAR_5 != -1)
  return (VAR_5);
 VAR_5 = FUNC_0(VAR_3, VAR_4);
 if (VAR_5 != -1)
  return (VAR_5);

 VAR_2 = VAR_0;
 return (VAR_5);
}
