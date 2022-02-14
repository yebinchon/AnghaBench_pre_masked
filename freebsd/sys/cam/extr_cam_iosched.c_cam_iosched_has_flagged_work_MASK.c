
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cam_iosched_softc {int flags; } ;


 int VAR_0 ;

__attribute__((used)) static inline bool
FUNC_0(struct cam_iosched_softc *VAR_1)
{
 return !!(VAR_1->flags & VAR_0);
}
