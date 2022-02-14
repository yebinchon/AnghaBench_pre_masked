
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int type; } ;
struct fs_fte {unsigned int index; int action; int dests; int flow_tag; scalar_t__ dests_size; TYPE_1__ base; int val; } ;


 int VAR_0 ;
 struct fs_fte* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 struct fs_fte* FUNC_2 (int,int ) ;
 int FUNC_3 (int ,int *,int) ;

__attribute__((used)) static struct fs_fte *FUNC_4(u8 VAR_3,
       u32 VAR_4,
       u32 *VAR_5,
       unsigned int VAR_6)
{
 struct fs_fte *VAR_7;


 VAR_7 = FUNC_2(sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return FUNC_0(-VAR_0);

 FUNC_3(VAR_7->val, VAR_5, sizeof(VAR_7->val));
 VAR_7->base.type = VAR_1;
 VAR_7->dests_size = 0;
 VAR_7->flow_tag = VAR_4;
 VAR_7->index = VAR_6;
 FUNC_1(&VAR_7->dests);
 VAR_7->action = VAR_3;

 return VAR_7;
}
