
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct statvfs {unsigned long f_namemax; } ;
struct statfs {int dummy; } ;


 int VAR_0 ;
 long FUNC_0 (char const*,int ) ;
 int FUNC_1 (struct statfs*,struct statvfs*) ;
 int FUNC_2 (char const*,struct statfs*) ;

int
FUNC_3(const char * __restrict VAR_1, struct statvfs * __restrict VAR_2)
{
 struct statfs VAR_3;
 int VAR_4;
 long VAR_5;

 VAR_4 = FUNC_2(VAR_1, &VAR_3);
 if (VAR_4 != 0)
  return (VAR_4);

 FUNC_1(&VAR_3, VAR_2);





 VAR_5 = FUNC_0(VAR_1, VAR_0);
 if (VAR_5 == -1)
  VAR_2->f_namemax = ~0UL;
 else
  VAR_2->f_namemax = (unsigned long)VAR_5;
 return (0);
}
