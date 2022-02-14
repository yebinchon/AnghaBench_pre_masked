
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct voistatspec {int (* hlpr ) (int,struct voistatspec*,int ) ;int hlprinfo; } ;
typedef enum vsd_dtype { ____Placeholder_vsd_dtype } vsd_dtype ;


 int FUNC_0 (int,struct voistatspec*,int ) ;

int
FUNC_1(enum vsd_dtype VAR_0, uint32_t VAR_1,
    struct voistatspec *VAR_2)
{
 int VAR_3, VAR_4;

 for (VAR_3 = VAR_1 - 1; VAR_3 >= 0; VAR_3--) {
  if (VAR_2[VAR_3].hlpr && (VAR_4 = VAR_2[VAR_3].hlpr(VAR_0, &VAR_2[VAR_3],
      VAR_2[VAR_3].hlprinfo)) != 0)
   return (VAR_4);
 }

 return (0);
}
