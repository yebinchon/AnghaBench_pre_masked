
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {int* vec; } ;
struct TYPE_4__ {TYPE_1__ aprox_match; } ;
struct ecore_mcast_obj {int (* set_registry_size ) (struct ecore_mcast_obj*,int) ;TYPE_2__ registry; } ;
struct bxe_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ecore_mcast_obj*,int) ;

__attribute__((used)) static inline int FUNC_1(struct bxe_softc *VAR_2,
        struct ecore_mcast_obj *VAR_3)
{
 int VAR_4, VAR_5 = 0;
 uint64_t VAR_6;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_6 = VAR_3->registry.aprox_match.vec[VAR_4];
  for (; VAR_6; VAR_5++)
   VAR_6 &= VAR_6 - 1;
 }

 VAR_3->set_registry_size(VAR_3, VAR_5);

 return VAR_1;
}
