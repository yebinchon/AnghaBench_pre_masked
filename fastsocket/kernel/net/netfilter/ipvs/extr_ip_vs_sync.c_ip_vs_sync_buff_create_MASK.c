
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ip_vs_sync_mesg {int dummy; } ;
struct ip_vs_sync_buff {unsigned char* head; unsigned char* end; int firstuse; TYPE_1__* mesg; } ;
struct TYPE_2__ {int size; scalar_t__ spare; scalar_t__ nr_conns; int syncid; int version; scalar_t__ reserved; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ip_vs_sync_buff*) ;
 void* FUNC_1 (int,int ) ;
 int VAR_4 ;

__attribute__((used)) static inline struct ip_vs_sync_buff * FUNC_2(void)
{
 struct ip_vs_sync_buff *VAR_5;

 if (!(VAR_5=FUNC_1(sizeof(struct ip_vs_sync_buff), VAR_0)))
  return ((void*)0);

 if (!(VAR_5->mesg=FUNC_1(VAR_4, VAR_0))) {
  FUNC_0(VAR_5);
  return ((void*)0);
 }
 VAR_5->mesg->reserved = 0;
 VAR_5->mesg->version = VAR_1;
 VAR_5->mesg->syncid = VAR_2;
 VAR_5->mesg->size = sizeof(struct ip_vs_sync_mesg);
 VAR_5->mesg->nr_conns = 0;
 VAR_5->mesg->spare = 0;
 VAR_5->head = (unsigned char *)VAR_5->mesg + sizeof(struct ip_vs_sync_mesg);
 VAR_5->end = (unsigned char *)VAR_5->mesg + VAR_4;

 VAR_5->firstuse = VAR_3;
 return VAR_5;
}
