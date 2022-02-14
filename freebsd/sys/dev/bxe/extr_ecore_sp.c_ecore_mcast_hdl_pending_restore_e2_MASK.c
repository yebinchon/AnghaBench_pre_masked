
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ next_bin; } ;
struct ecore_pending_mcast_cmd {TYPE_1__ data; int done; } ;
struct ecore_mcast_obj {scalar_t__ (* hdl_restore ) (struct bxe_softc*,struct ecore_mcast_obj*,scalar_t__,int*) ;} ;
struct bxe_softc {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct bxe_softc*,struct ecore_mcast_obj*,scalar_t__,int*) ;

__attribute__((used)) static inline void FUNC_1(struct bxe_softc *VAR_1,
 struct ecore_mcast_obj *VAR_2, struct ecore_pending_mcast_cmd *VAR_3,
 int *VAR_4)
{
 VAR_3->data.next_bin = VAR_2->hdl_restore(VAR_1, VAR_2, VAR_3->data.next_bin,
      VAR_4);

 if (VAR_3->data.next_bin < 0)

  VAR_3->done = VAR_0;
 else

  VAR_3->data.next_bin++;
}
