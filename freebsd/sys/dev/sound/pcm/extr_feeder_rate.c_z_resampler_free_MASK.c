
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct z_info {struct z_info* z_delay; struct z_info* z_pcoeff; } ;
struct pcm_feeder {struct z_info* data; } ;


 int VAR_0 ;
 int FUNC_0 (struct z_info*,int ) ;

__attribute__((used)) static int
FUNC_1(struct pcm_feeder *VAR_1)
{
 struct z_info *VAR_2;

 VAR_2 = VAR_1->data;
 if (VAR_2 != ((void*)0)) {
  if (VAR_2->z_pcoeff != ((void*)0))
   FUNC_0(VAR_2->z_pcoeff, VAR_0);
  if (VAR_2->z_delay != ((void*)0))
   FUNC_0(VAR_2->z_delay, VAR_0);
  FUNC_0(VAR_2, VAR_0);
 }

 VAR_1->data = ((void*)0);

 return (0);
}
