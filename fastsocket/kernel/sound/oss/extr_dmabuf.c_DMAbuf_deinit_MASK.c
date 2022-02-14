
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct audio_operations {int flags; int dmap_in; int dmap_out; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct audio_operations** VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;

void FUNC_1(int VAR_4)
{
 struct audio_operations *VAR_5 = VAR_2[VAR_4];

 if (!VAR_5)
  return;


 if (VAR_3 == VAR_0) {
  FUNC_0(VAR_5->dmap_out);
  if (VAR_5->flags & VAR_1)
   FUNC_0(VAR_5->dmap_in);
 }
}
