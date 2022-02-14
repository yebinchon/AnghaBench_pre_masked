
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct target_ops {int dummy; } ;
typedef enum target_object { ____Placeholder_target_object } target_object ;
typedef int ULONGEST ;
typedef int LONGEST ;


 int FUNC_0 (struct target_ops*,int,char const*,void*,void const*,int ,int) ;
 int FUNC_1 (struct target_ops*,int,char const*,void*,void const*,int ,int) ;
 int FUNC_2 (struct target_ops*,int,char const*,void*,void const*,int ,int) ;
 int FUNC_3 (struct target_ops*,int,char const*,void*,void const*,int ,int) ;





 int FUNC_4 (int ,void*,int,int,int *,struct target_ops*) ;

__attribute__((used)) static LONGEST
FUNC_5 (struct target_ops *VAR_0, enum target_object VAR_1,
      const char *VAR_2, void *VAR_3,
      const void *VAR_4, ULONGEST VAR_5, LONGEST VAR_6)
{
  switch (VAR_1)
    {
    case 130:
      if (VAR_3)
 return FUNC_4 (VAR_5, VAR_3, VAR_6, 0 ,
      ((void*)0), VAR_0);
      if (VAR_4)
 return FUNC_4 (VAR_5, VAR_3, VAR_6, 1 ,
      ((void*)0), VAR_0);
      return -1;

    case 129:



      return (-1);


    case 132:



      return (-1);


    case 128:



      return (-1);


    case 131:



      return (-1);


    default:
      return -1;
    }
}
