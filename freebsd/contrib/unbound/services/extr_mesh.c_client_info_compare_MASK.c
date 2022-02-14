
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct respip_client_info {scalar_t__ taglen; scalar_t__ tag_actions_size; scalar_t__ tag_datas; scalar_t__ view; scalar_t__ respip_set; int tag_actions; int taglist; } ;


 int FUNC_0 (int ,int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_1(const struct respip_client_info* VAR_0,
 const struct respip_client_info* VAR_1)
{
 int VAR_2;

 if(!VAR_0 && !VAR_1)
  return 0;
 if(VAR_0 && !VAR_1)
  return -1;
 if(!VAR_0 && VAR_1)
  return 1;
 if(VAR_0->taglen != VAR_1->taglen)
  return (VAR_0->taglen < VAR_1->taglen) ? -1 : 1;
 VAR_2 = FUNC_0(VAR_0->taglist, VAR_1->taglist, VAR_0->taglen);
 if(VAR_2 != 0)
  return VAR_2;
 if(VAR_0->tag_actions_size != VAR_1->tag_actions_size)
  return (VAR_0->tag_actions_size < VAR_1->tag_actions_size) ?
   -1 : 1;
 VAR_2 = FUNC_0(VAR_0->tag_actions, VAR_1->tag_actions,
  VAR_0->tag_actions_size);
 if(VAR_2 != 0)
  return VAR_2;
 if(VAR_0->tag_datas != VAR_1->tag_datas)
  return VAR_0->tag_datas < VAR_1->tag_datas ? -1 : 1;
 if(VAR_0->view != VAR_1->view)
  return VAR_0->view < VAR_1->view ? -1 : 1;


 if(VAR_0->respip_set != VAR_1->respip_set)
  return VAR_0->respip_set < VAR_1->respip_set ? -1 : 1;
 return 0;
}
