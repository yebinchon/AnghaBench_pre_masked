
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_proto {size_t id; int name; } ;


 int FUNC_0 (char*,struct hci_proto*,int ,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 struct hci_proto** VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct hci_proto *VAR_5)
{
 int VAR_6 = 0;

 FUNC_0("%p name %s id %d", VAR_5, VAR_5->name, VAR_5->id);

 if (VAR_5->id >= VAR_2)
  return -VAR_1;

 FUNC_1(&VAR_4);

 if (!VAR_3[VAR_5->id])
  VAR_3[VAR_5->id] = VAR_5;
 else
  VAR_6 = -VAR_0;

 FUNC_2(&VAR_4);

 return VAR_6;
}
