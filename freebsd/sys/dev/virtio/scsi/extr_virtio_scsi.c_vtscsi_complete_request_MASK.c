
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtscsi_request {int vsr_flags; int vsr_softc; int (* vsr_complete ) (int ,struct vtscsi_request*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct vtscsi_request*) ;

__attribute__((used)) static void
FUNC_1(struct vtscsi_request *VAR_2)
{

 if (VAR_2->vsr_flags & VAR_1)
  VAR_2->vsr_flags |= VAR_0;

 if (VAR_2->vsr_complete != ((void*)0))
  VAR_2->vsr_complete(VAR_2->vsr_softc, VAR_2);
}
