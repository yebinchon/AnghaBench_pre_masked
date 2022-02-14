
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_raid_disk {int dummy; } ;
struct g_consumer {struct g_raid_disk* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct g_raid_disk*,int ,int ) ;
 int FUNC_1 () ;

__attribute__((used)) static void
FUNC_2(struct g_consumer *VAR_2)
{
 struct g_raid_disk *VAR_3;

 FUNC_1();

 VAR_3 = VAR_2->private;
 if (VAR_3 == ((void*)0))
  return;
 FUNC_0(VAR_3, VAR_0,
     VAR_1);
}
