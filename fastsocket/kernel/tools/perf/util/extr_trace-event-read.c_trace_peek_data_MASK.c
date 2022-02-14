
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pevent_record {unsigned int ts; unsigned int size; void* data; } ;
struct pevent {int dummy; } ;
struct TYPE_2__ {int index; unsigned long long timestamp; int page_size; struct pevent_record* next; void* page; } ;





 unsigned long long VAR_0 ;
 void* FUNC_0 (void*,int) ;
 TYPE_1__* VAR_1 ;
 void* FUNC_1 (struct pevent*,void*) ;
 void* FUNC_2 (struct pevent*,void*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct pevent_record* FUNC_5 (int) ;
 int FUNC_6 (struct pevent_record*,int ,int) ;
 unsigned int FUNC_7 (unsigned int) ;
 unsigned int FUNC_8 (unsigned int) ;

struct pevent_record *FUNC_9(struct pevent *VAR_5, int VAR_6)
{
 struct pevent_record *VAR_7;
 void *VAR_8 = VAR_1[VAR_6].page;
 int VAR_9 = VAR_1[VAR_6].index;
 void *VAR_10 = VAR_8 + VAR_9;
 unsigned long long VAR_11;
 unsigned int VAR_12;
 unsigned int VAR_13;
 unsigned int VAR_14;
 unsigned int VAR_15 = 0;

 if (VAR_1[VAR_6].next)
  return VAR_1[VAR_6].next;

 if (!VAR_8)
  return ((void*)0);

 if (!VAR_9) {

  if (VAR_4 != 8)
   FUNC_3("expected a long long type for timestamp");
  VAR_1[VAR_6].timestamp = FUNC_2(VAR_5, VAR_10);
  VAR_10 += 8;
  switch (VAR_3) {
  case 4:
   VAR_1[VAR_6].page_size = FUNC_1(VAR_5, VAR_10);
   VAR_10 += 4;
   break;
  case 8:
   VAR_1[VAR_6].page_size = FUNC_2(VAR_5, VAR_10);
   VAR_10 += 8;
   break;
  default:
   FUNC_3("bad long size");
  }
  VAR_10 = VAR_1[VAR_6].page + VAR_2;
 }

read_again:
 VAR_9 = FUNC_0(VAR_10, VAR_6);

 if (VAR_9 >= VAR_1[VAR_6].page_size) {
  FUNC_4(VAR_6);
  return FUNC_9(VAR_5, VAR_6);
 }

 VAR_12 = FUNC_1(VAR_5, VAR_10);
 VAR_10 += 4;

 VAR_13 = FUNC_8(VAR_12);
 VAR_14 = FUNC_7(VAR_12);

 switch (VAR_13) {
 case 130:
  if (!VAR_14)
   FUNC_3("error, hit unexpected end of page");
  VAR_15 = FUNC_1(VAR_5, VAR_10);
  VAR_10 += 4;
  VAR_15 *= 4;
  VAR_10 += VAR_15;
  goto read_again;

 case 129:
  VAR_11 = FUNC_1(VAR_5, VAR_10);
  VAR_10 += 4;
  VAR_11 <<= VAR_0;
  VAR_11 += VAR_14;
  VAR_1[VAR_6].timestamp += VAR_11;
  goto read_again;

 case 128:
  VAR_10 += 12;
  break;
 case 0:
  VAR_15 = FUNC_1(VAR_5, VAR_10);
  VAR_10 += 4;
  FUNC_3("here! length=%d", VAR_15);
  break;
 default:
  VAR_15 = VAR_13 * 4;
  break;
 }

 VAR_1[VAR_6].timestamp += VAR_14;

 VAR_7 = FUNC_5(sizeof(*VAR_7));
 FUNC_6(VAR_7, 0, sizeof(*VAR_7));

 VAR_7->ts = VAR_1[VAR_6].timestamp;
 VAR_7->size = VAR_15;
 VAR_7->data = VAR_10;
 VAR_10 += VAR_15;

 VAR_1[VAR_6].index = FUNC_0(VAR_10, VAR_6);
 VAR_1[VAR_6].next = VAR_7;

 return VAR_7;
}
