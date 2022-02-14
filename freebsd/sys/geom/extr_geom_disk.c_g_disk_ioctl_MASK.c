
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct thread {int dummy; } ;
struct g_provider {struct g_disk_softc* private; } ;
struct g_disk_softc {struct disk* dp; } ;
struct disk {int (* d_ioctl ) (struct disk*,int ,void*,int,struct thread*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct disk*,int ,void*,int,struct thread*) ;

__attribute__((used)) static int
FUNC_1(struct g_provider *VAR_1, u_long VAR_2, void * VAR_3, int VAR_4, struct thread *VAR_5)
{
 struct disk *VAR_6;
 struct g_disk_softc *VAR_7;
 int VAR_8;

 VAR_7 = VAR_1->private;
 VAR_6 = VAR_7->dp;

 if (VAR_6->d_ioctl == ((void*)0))
  return (VAR_0);
 VAR_8 = VAR_6->d_ioctl(VAR_6, VAR_2, VAR_3, VAR_4, VAR_5);
 return (VAR_8);
}
