
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_mirror_softc {int sc_disks; } ;
struct g_mirror_disk {scalar_t__ d_state; } ;


 scalar_t__ VAR_0 ;
 struct g_mirror_disk* FUNC_0 (int *) ;
 struct g_mirror_disk* FUNC_1 (struct g_mirror_disk*,int ) ;
 int VAR_1 ;

__attribute__((used)) static __inline struct g_mirror_disk *
FUNC_2(struct g_mirror_softc *VAR_2, struct g_mirror_disk *VAR_3)
{
 struct g_mirror_disk *VAR_4;

 for (VAR_4 = FUNC_1(VAR_3, VAR_1); VAR_4 != VAR_3;
     VAR_4 = FUNC_1(VAR_4, VAR_1)) {
  if (VAR_4 == ((void*)0))
   VAR_4 = FUNC_0(&VAR_2->sc_disks);
  if (VAR_4->d_state == VAR_0)
   break;
 }
 if (VAR_4->d_state != VAR_0)
  return (((void*)0));
 return (VAR_4);
}
