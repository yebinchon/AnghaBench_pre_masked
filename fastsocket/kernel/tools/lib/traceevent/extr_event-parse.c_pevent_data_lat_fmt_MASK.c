
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_seq {int dummy; } ;
struct pevent_record {void* data; } ;
struct pevent {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int FUNC_0 (struct pevent*,void*) ;
 int FUNC_1 (struct pevent*,void*) ;
 int FUNC_2 (struct pevent*,void*) ;
 unsigned int FUNC_3 (struct pevent*,void*) ;
 int FUNC_4 (struct trace_seq*,char*,int,...) ;
 int FUNC_5 (struct trace_seq*,char) ;
 int FUNC_6 (struct trace_seq*) ;

void FUNC_7(struct pevent *VAR_5,
    struct trace_seq *VAR_6, struct pevent_record *VAR_7)
{
 static int VAR_8 = 1;
 static int VAR_9 = 1;
 static int VAR_10;
 static int VAR_11;
 unsigned int VAR_12;
 unsigned int VAR_13;
 int VAR_14;
 int VAR_15;
 int VAR_16;
 int VAR_17;
 void *VAR_18 = VAR_7->data;

 VAR_12 = FUNC_0(VAR_5, VAR_18);
 VAR_13 = FUNC_3(VAR_5, VAR_18);

 if (VAR_10)
  VAR_14 = FUNC_1(VAR_5, VAR_18);
 else if (VAR_8) {
  VAR_14 = FUNC_1(VAR_5, VAR_18);
  if (VAR_14 < 0)
   VAR_8 = 0;
  else
   VAR_10 = 1;
 }


 if (VAR_11)
  VAR_15 = FUNC_2(VAR_5, VAR_18);
 else if (VAR_9) {
  VAR_15 = FUNC_2(VAR_5, VAR_18);
  if (VAR_15 < 0)
   VAR_9 = 0;
  else
   VAR_11 = 1;
 }

 VAR_16 = VAR_12 & VAR_0;
 VAR_17 = VAR_12 & VAR_4;

 FUNC_4(VAR_6, "%c%c%c",
        (VAR_12 & VAR_2) ? 'd' :
        (VAR_12 & VAR_1) ?
        'X' : '.',
        (VAR_12 & VAR_3) ?
        'N' : '.',
        (VAR_16 && VAR_17) ? 'H' :
        VAR_16 ? 'h' : VAR_17 ? 's' : '.');

 if (VAR_13)
  FUNC_4(VAR_6, "%x", VAR_13);
 else
  FUNC_5(VAR_6, '.');

 if (VAR_11) {
  if (VAR_15 < 0)
   FUNC_5(VAR_6, '.');
  else
   FUNC_4(VAR_6, "%d", VAR_15);
 }

 if (VAR_10) {
  if (VAR_14 < 0)
   FUNC_5(VAR_6, '.');
  else
   FUNC_4(VAR_6, "%d", VAR_14);
 }

 FUNC_6(VAR_6);
}
