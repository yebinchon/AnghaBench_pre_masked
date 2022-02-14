
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (void*,size_t) ;
 int FUNC_1 (void*,size_t) ;
 int FUNC_2 (void*,size_t) ;
 int FUNC_3 (void*,size_t) ;
 int FUNC_4 (int ) ;

int
FUNC_5(void *VAR_4, size_t VAR_5)
{
 int VAR_6 = -1;

 if (VAR_5 > 256) {
  VAR_3 = VAR_0;
  return -1;
 }
 VAR_6 = FUNC_3(VAR_4, VAR_5);
 if (VAR_6 != -1)
  return (VAR_6);
 VAR_6 = FUNC_0(VAR_4, VAR_5);
 if (VAR_6 != -1)
  return (VAR_6);

 VAR_3 = VAR_0;
 return (VAR_6);
}
