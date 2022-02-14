
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvlist_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int const*,char const*) ;
 int * FUNC_1 (int const*,char const*) ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (int const*,int ) ;

__attribute__((used)) static int
FUNC_5(const nvlist_t *VAR_3, const char *VAR_4)
{
 const nvlist_t *VAR_5;
 int VAR_6;

 if (!FUNC_0(VAR_3, VAR_4))
  return (VAR_1);
 VAR_5 = FUNC_1(VAR_3, VAR_4);

 VAR_6 = FUNC_4(VAR_5, VAR_2);
 if (VAR_6 != 0)
  return (VAR_6);

 VAR_6 = FUNC_4(VAR_5,
     VAR_0);
 if (VAR_6 != 0)
  return (VAR_6);

 VAR_6 = FUNC_2(VAR_5);
 if (VAR_6 != 0)
  return (VAR_6);

 return (FUNC_3(VAR_5));
}
