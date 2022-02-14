
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union ctl_io {int scsiio; } ;


 int FUNC_0 (union ctl_io*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(union ctl_io *VAR_0, int VAR_1)
{
 FUNC_1(&VAR_0->scsiio);
 FUNC_0(VAR_0);
}
