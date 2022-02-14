
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct o2hb_region {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 unsigned long FUNC_2 (char*,char**,int ) ;

__attribute__((used)) static int FUNC_3(struct o2hb_region *VAR_2,
     const char *VAR_3,
     size_t VAR_4,
     unsigned long *VAR_5,
     unsigned int *VAR_6)
{
 unsigned long VAR_7;
 char *VAR_8 = (char *)VAR_3;

 VAR_7 = FUNC_2(VAR_8, &VAR_8, 0);
 if (!VAR_8 || (*VAR_8 && (*VAR_8 != '\n')))
  return -VAR_0;


 if (VAR_7 > 4096 || VAR_7 < 512)
  return -VAR_1;
 if (FUNC_1(VAR_7) != 1)
  return -VAR_0;

 if (VAR_5)
  *VAR_5 = VAR_7;
 if (VAR_6)
  *VAR_6 = FUNC_0(VAR_7) - 1;

 return 0;
}
