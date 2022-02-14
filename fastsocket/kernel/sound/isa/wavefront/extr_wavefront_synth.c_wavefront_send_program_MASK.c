
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* layer; } ;
struct TYPE_11__ {TYPE_2__ pr; } ;
struct TYPE_12__ {size_t number; TYPE_3__ hdr; } ;
typedef TYPE_4__ wavefront_patch_info ;
struct TYPE_13__ {int * patch_status; int * prog_status; } ;
typedef TYPE_5__ snd_wavefront_t ;
struct TYPE_9__ {size_t patch_number; scalar_t__ mute; } ;


 int FUNC_0 (int ,char*,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (unsigned char*,unsigned char*,int ) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (TYPE_5__*,int ,int *,unsigned char*) ;

__attribute__((used)) static int
FUNC_4 (snd_wavefront_t *VAR_6, wavefront_patch_info *VAR_7)

{
 unsigned char VAR_8[VAR_4+1];
 int VAR_9;

 FUNC_0 (VAR_2, "downloading program %d\n",
  VAR_7->number);

 VAR_6->prog_status[VAR_7->number] = VAR_5;





 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {
  if (VAR_7->hdr.pr.layer[VAR_9].mute) {
   VAR_6->patch_status[VAR_7->hdr.pr.layer[VAR_9].patch_number] |=
    VAR_5;




  }
 }

 VAR_8[0] = VAR_7->number;
 FUNC_1 ((unsigned char *)&VAR_7->hdr.pr, &VAR_8[1], VAR_4);

 if (FUNC_3 (VAR_6, VAR_1, ((void*)0), VAR_8)) {
  FUNC_2 ("download patch failed\n");
  return -(VAR_0);
 }

 return (0);
}
