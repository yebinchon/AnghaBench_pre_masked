
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct statfs {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct statfs*,long,int ) ;
 struct statfs* FUNC_2 (size_t) ;

size_t
FUNC_3(struct statfs **VAR_1)
{
 static struct statfs *VAR_2;
 size_t VAR_3;
 int VAR_4;

 VAR_4 = FUNC_1(((void*)0), 0, VAR_0);
 if (VAR_4 <= 0)
  return (0);
 VAR_3 = (VAR_4 + 1) * sizeof(struct statfs);
 if ((VAR_2 = FUNC_2(VAR_3)) == ((void*)0))
  FUNC_0(1, "malloc");
 VAR_4 = FUNC_1(VAR_2, (long)VAR_3, VAR_0);
 *VAR_1 = VAR_2;
 return (VAR_4);
}
