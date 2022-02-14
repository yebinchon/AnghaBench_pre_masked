
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct hostapd_hw_modes {int * he_capab; } ;


 unsigned int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct nlattr*) ;
 int FUNC_1 (struct nlattr*) ;
 int FUNC_2 (struct nlattr**,int ,int ,int ,int *) ;
 scalar_t__ FUNC_3 (struct nlattr**,int ,struct nlattr*,int *) ;
 int FUNC_4 (int *,unsigned int,struct nlattr**,struct nlattr**) ;

__attribute__((used)) static int FUNC_5(struct hostapd_hw_modes *VAR_6,
      struct nlattr *VAR_7)
{
 struct nlattr *VAR_8[VAR_2 + 1];
 struct nlattr *VAR_9[VAR_3 + 1];
 unsigned int VAR_10;

 FUNC_2(VAR_8, VAR_2,
    FUNC_0(VAR_7), FUNC_1(VAR_7), ((void*)0));

 if (!VAR_8[VAR_1])
  return VAR_5;

 if (FUNC_3(VAR_9, VAR_3,
        VAR_8[VAR_1], ((void*)0)))
  return VAR_5;

 for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++)
  FUNC_4(&VAR_6->he_capab[VAR_10], VAR_10, VAR_8, VAR_9);

 return VAR_4;
}
