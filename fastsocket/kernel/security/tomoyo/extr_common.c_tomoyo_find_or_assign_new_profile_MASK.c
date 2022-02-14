
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tomoyo_profile {int * value; } ;
struct TYPE_2__ {int current_value; } ;
typedef int DEFINE_MUTEX ;


 int VAR_0 ;
 unsigned int const VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct tomoyo_profile* FUNC_3 (int) ;
 TYPE_1__* VAR_2 ;
 struct tomoyo_profile** VAR_3 ;

__attribute__((used)) static struct tomoyo_profile *FUNC_4(const unsigned
        int VAR_4)
{
 static DEFINE_MUTEX(VAR_5);
 struct tomoyo_profile *VAR_6 = ((void*)0);
 int VAR_7;

 if (VAR_4 >= VAR_1)
  return ((void*)0);
 FUNC_1(&VAR_5);
 VAR_6 = VAR_3[VAR_4];
 if (VAR_6)
  goto ok;
 VAR_6 = FUNC_3(sizeof(*VAR_6));
 if (!VAR_6)
  goto ok;
 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++)
  VAR_6->value[VAR_7] = VAR_2[VAR_7].current_value;
 FUNC_0();
 VAR_3[VAR_4] = VAR_6;
 ok:
 FUNC_2(&VAR_5);
 return VAR_6;
}
