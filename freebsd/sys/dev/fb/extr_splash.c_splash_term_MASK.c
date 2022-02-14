
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int video_adapter_t ;
struct TYPE_2__ {int (* term ) (int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 TYPE_1__* VAR_4 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;

int
FUNC_3(video_adapter_t *VAR_5)
{
 int VAR_6 = 0;

 if (VAR_2 != VAR_5)
  return VAR_0;
 if (VAR_4 != ((void*)0)) {
  if (&FUNC_0 != ((void*)0))
   VAR_6 = FUNC_0)(VAR_1, VAR_3);
  if (VAR_6 == 0 && VAR_4->term)
   VAR_6 = (*VAR_4->term)(VAR_5);
  if (VAR_6 == 0)
   VAR_4 = ((void*)0);
 }
 return VAR_6;
}
