
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serviced_query {int qbuflen; scalar_t__ status; struct service_callback* cblist; } ;
struct service_callback {struct service_callback* next; } ;
struct pending {int dummy; } ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

size_t
FUNC_1(struct serviced_query* VAR_4)
{
 struct service_callback* VAR_5;
 size_t VAR_6;
 VAR_6 = sizeof(*VAR_4) + VAR_4->qbuflen;
 for(VAR_5 = VAR_4->cblist; VAR_5; VAR_5 = VAR_5->next)
  VAR_6 += sizeof(*VAR_5);
 if(VAR_4->status == VAR_1 ||
  VAR_4->status == VAR_0 ||
  VAR_4->status == VAR_2 ||
  VAR_4->status == VAR_3) {
  VAR_6 += sizeof(struct pending);
  VAR_6 += FUNC_0(((void*)0));
 } else {
 }
 return VAR_6;
}
