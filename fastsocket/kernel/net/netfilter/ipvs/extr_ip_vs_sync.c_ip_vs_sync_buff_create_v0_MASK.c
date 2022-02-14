
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_vs_sync_mesg_v0 {int size; int syncid; scalar_t__ nr_conns; } ;
struct ip_vs_sync_buff {unsigned char* head; unsigned char* end; int firstuse; void* mesg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ip_vs_sync_buff*) ;
 void* FUNC_1 (int,int ) ;
 int VAR_3 ;

__attribute__((used)) static inline struct ip_vs_sync_buff * FUNC_2(void)
{
 struct ip_vs_sync_buff *VAR_4;
 struct ip_vs_sync_mesg_v0 *VAR_5;

 if (!(VAR_4=FUNC_1(sizeof(struct ip_vs_sync_buff), VAR_0)))
  return ((void*)0);

 if (!(VAR_4->mesg=FUNC_1(VAR_3, VAR_0))) {
  FUNC_0(VAR_4);
  return ((void*)0);
 }
 VAR_5 = (struct ip_vs_sync_mesg_v0 *)VAR_4->mesg;
 VAR_5->nr_conns = 0;
 VAR_5->syncid = VAR_1;
 VAR_5->size = 4;
 VAR_4->head = (unsigned char *)VAR_5 + 4;
 VAR_4->end = (unsigned char *)VAR_5 + VAR_3;
 VAR_4->firstuse = VAR_2;
 return VAR_4;
}
