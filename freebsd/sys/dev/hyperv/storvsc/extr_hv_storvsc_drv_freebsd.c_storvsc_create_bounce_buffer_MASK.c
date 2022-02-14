
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct sglist {int sg_maxseg; int sg_nseg; TYPE_1__* sg_segs; } ;
struct hv_sgl_node {struct sglist* sgl_data; } ;
struct TYPE_4__ {int in_use_sgl_list; int free_sgl_list; } ;
struct TYPE_3__ {unsigned int ss_len; } ;


 scalar_t__ FUNC_0 (int *) ;
 struct hv_sgl_node* FUNC_1 (int *) ;
 int FUNC_2 (int *,struct hv_sgl_node*,int ) ;
 int FUNC_3 (struct hv_sgl_node*,int ) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (char*) ;

__attribute__((used)) static struct sglist *
FUNC_5(uint16_t VAR_4, int VAR_5)
{
 int VAR_6 = 0;
 struct sglist *VAR_7 = ((void*)0);
 unsigned int VAR_8 = ((VAR_5 == VAR_1) ? 0 : VAR_0);
 struct hv_sgl_node *VAR_9 = ((void*)0);


 if (FUNC_0(&VAR_2.free_sgl_list)) {
  FUNC_4("storvsc error: not enough free sgl\n");
  return ((void*)0);
 }
 VAR_9 = FUNC_1(&VAR_2.free_sgl_list);
 FUNC_3(VAR_9, VAR_3);
 VAR_7 = VAR_9->sgl_data;
 FUNC_2(&VAR_2.in_use_sgl_list, VAR_9, VAR_3);

 VAR_7->sg_maxseg = VAR_4;

 if (VAR_5 == VAR_1)
  VAR_7->sg_nseg = 0;
 else
  VAR_7->sg_nseg = VAR_4;

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++)
         VAR_7->sg_segs[VAR_6].ss_len = VAR_8;

 return VAR_7;
}
