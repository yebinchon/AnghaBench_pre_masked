
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcm_feeder {struct feed_volume_info* data; } ;
struct feed_volume_info {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct feed_volume_info*,int ) ;

__attribute__((used)) static int
FUNC_1(struct pcm_feeder *VAR_1)
{
 struct feed_volume_info *VAR_2;

 VAR_2 = VAR_1->data;
 if (VAR_2 != ((void*)0))
  FUNC_0(VAR_2, VAR_0);

 VAR_1->data = ((void*)0);

 return (0);
}
