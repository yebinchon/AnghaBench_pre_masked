
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trace_seq {int dummy; } ;
struct format_field {unsigned long long name; int flags; unsigned int offset; unsigned int size; struct format_field* next; } ;
struct TYPE_2__ {struct format_field* fields; } ;
struct event_format {int pevent; TYPE_1__ format; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (void*,unsigned int) ;
 unsigned long long FUNC_1 (int ,void*,unsigned int) ;
 int FUNC_2 (struct trace_seq*,char*,...) ;
 int FUNC_3 (struct trace_seq*,char) ;
 int FUNC_4 (struct trace_seq*,char*) ;

__attribute__((used)) static void FUNC_5(struct trace_seq *VAR_6, void *VAR_7, int VAR_8,
          struct event_format *VAR_9)
{
 struct format_field *VAR_10;
 unsigned long long VAR_11;
 unsigned int VAR_12, VAR_13, VAR_14;

 VAR_10 = VAR_9->format.fields;
 while (VAR_10) {
  FUNC_2(VAR_6, " %s=", VAR_10->name);
  if (VAR_10->flags & VAR_0) {
   VAR_12 = VAR_10->offset;
   VAR_13 = VAR_10->size;
   if (VAR_10->flags & VAR_1) {
    VAR_11 = FUNC_1(VAR_9->pevent, VAR_7 + VAR_12, VAR_13);
    VAR_12 = VAR_11;
    VAR_13 = VAR_12 >> 16;
    VAR_12 &= 0xffff;
   }
   if (VAR_10->flags & VAR_5 &&
       FUNC_0(VAR_7 + VAR_12, VAR_13)) {
    FUNC_2(VAR_6, "%s", (char *)VAR_7 + VAR_12);
   } else {
    FUNC_4(VAR_6, "ARRAY[");
    for (VAR_14 = 0; VAR_14 < VAR_13; VAR_14++) {
     if (VAR_14)
      FUNC_4(VAR_6, ", ");
     FUNC_2(VAR_6, "%02x",
        *((unsigned char *)VAR_7 + VAR_12 + VAR_14));
    }
    FUNC_3(VAR_6, ']');
    VAR_10->flags &= ~VAR_5;
   }
  } else {
   VAR_11 = FUNC_1(VAR_9->pevent, VAR_7 + VAR_10->offset,
       VAR_10->size);
   if (VAR_10->flags & VAR_3) {
    FUNC_2(VAR_6, "0x%llx", VAR_11);
   } else if (VAR_10->flags & VAR_4) {
    switch (VAR_10->size) {
    case 4:




     if (VAR_10->flags & VAR_2)
      FUNC_2(VAR_6, "0x%x", (int)VAR_11);
     else
      FUNC_2(VAR_6, "%d", (int)VAR_11);
     break;
    case 2:
     FUNC_2(VAR_6, "%2d", (short)VAR_11);
     break;
    case 1:
     FUNC_2(VAR_6, "%1d", (char)VAR_11);
     break;
    default:
     FUNC_2(VAR_6, "%lld", VAR_11);
    }
   } else {
    if (VAR_10->flags & VAR_2)
     FUNC_2(VAR_6, "0x%llx", VAR_11);
    else
     FUNC_2(VAR_6, "%llu", VAR_11);
   }
  }
  VAR_10 = VAR_10->next;
 }
}
