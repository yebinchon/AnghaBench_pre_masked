
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aarp_entry {int packet_queue; } ;


 int VAR_0 ;
 struct aarp_entry* FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static struct aarp_entry *FUNC_2(void)
{
 struct aarp_entry *VAR_1 = FUNC_0(sizeof(*VAR_1), VAR_0);

 if (VAR_1)
  FUNC_1(&VAR_1->packet_queue);
 return VAR_1;
}
