
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct statfs {int f_mntonname; int f_fstypename; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,char const**) ;
 size_t FUNC_1 (struct statfs**,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ,struct statfs*) ;
 int FUNC_3 (char*,int ) ;

__attribute__((used)) static size_t
FUNC_4(struct statfs **VAR_2, long VAR_3, const char **VAR_4)
{
 int VAR_5, VAR_6, VAR_7;
 struct statfs *VAR_8;

 if (VAR_4 == ((void*)0))
  return (VAR_1 ? VAR_3 : FUNC_1(VAR_2, VAR_0));

 VAR_8 = *VAR_2;
 for (VAR_7 = 0, VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  if (FUNC_0(VAR_8[VAR_6].f_fstypename, VAR_4))
   continue;






  VAR_5 = FUNC_2(VAR_8[VAR_6].f_mntonname, &VAR_8[VAR_7]);
  if (VAR_1 || VAR_5 < 0)
   if (VAR_6 != VAR_7) {
    if (VAR_5 < 0)
     FUNC_3("%s stats possibly stale",
         VAR_8[VAR_6].f_mntonname);
    VAR_8[VAR_7] = VAR_8[VAR_6];
   }
  VAR_7++;
 }
 return (VAR_7);
}
