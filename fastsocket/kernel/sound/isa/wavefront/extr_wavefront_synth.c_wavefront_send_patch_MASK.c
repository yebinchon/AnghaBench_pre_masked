
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int p; } ;
struct TYPE_8__ {size_t number; TYPE_1__ hdr; } ;
typedef TYPE_2__ wavefront_patch_info ;
struct TYPE_9__ {int * patch_status; } ;
typedef TYPE_3__ snd_wavefront_t ;


 int FUNC_0 (int ,char*,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (unsigned char*,unsigned char*,int ) ;
 unsigned char* FUNC_2 (size_t,unsigned char*,int) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (TYPE_3__*,int ,int *,unsigned char*) ;

__attribute__((used)) static int
FUNC_5 (snd_wavefront_t *VAR_5, wavefront_patch_info *VAR_6)

{
 unsigned char VAR_7[VAR_3+2];
 unsigned char *VAR_8;

 FUNC_0 (VAR_2, "downloading patch %d\n",
          VAR_6->number);

 VAR_5->patch_status[VAR_6->number] |= VAR_4;

 VAR_8 = VAR_7;
 VAR_8 = FUNC_2 (VAR_6->number, VAR_7, 2);
 FUNC_1 ((unsigned char *)&VAR_6->hdr.p, VAR_8, VAR_3);

 if (FUNC_4 (VAR_5, VAR_1, ((void*)0), VAR_7)) {
  FUNC_3 ("download patch failed\n");
  return -(VAR_0);
 }

 return (0);
}
