
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int video_adapter_t ;
struct TYPE_2__ {scalar_t__ data_size; int * data; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static int
FUNC_1(video_adapter_t *VAR_2)
{


 if (VAR_1.data == ((void*)0) || VAR_1.data_size <= 0) {
  FUNC_0("splash_txt: No ASCII bitmap file found\n");
  return (VAR_0);
 }
 return (0);
}
