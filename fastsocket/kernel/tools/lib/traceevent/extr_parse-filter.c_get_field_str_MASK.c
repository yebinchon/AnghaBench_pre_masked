
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pevent_record {char* data; } ;
struct pevent {int dummy; } ;
struct TYPE_3__ {char* buffer; TYPE_2__* field; } ;
struct filter_arg {TYPE_1__ str; } ;
struct event_format {struct pevent* pevent; } ;
struct TYPE_4__ {int flags; int offset; int size; struct event_format* event; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long long FUNC_0 (struct event_format*,TYPE_2__*,struct pevent_record*) ;
 int FUNC_1 (char*,char const*,int) ;
 char* FUNC_2 (struct pevent*,unsigned long long) ;
 int FUNC_3 (char*,int,char*,unsigned long long) ;

__attribute__((used)) static const char *FUNC_4(struct filter_arg *VAR_3, struct pevent_record *VAR_4)
{
 struct event_format *VAR_5;
 struct pevent *VAR_6;
 unsigned long long VAR_7;
 const char *VAR_8 = ((void*)0);
 char VAR_9[64];


 if (VAR_3->str.field->flags & VAR_2) {
  VAR_8 = VAR_4->data + VAR_3->str.field->offset;





  if (*(VAR_8 + VAR_3->str.field->size - 1)) {

   FUNC_1(VAR_3->str.buffer, VAR_8, VAR_3->str.field->size);

   VAR_8 = VAR_3->str.buffer;
  }

 } else {
  VAR_5 = VAR_3->str.field->event;
  VAR_6 = VAR_5->pevent;
  VAR_7 = FUNC_0(VAR_5, VAR_3->str.field, VAR_4);

  if (VAR_3->str.field->flags & (VAR_1 | VAR_0))

   VAR_8 = FUNC_2(VAR_6, VAR_7);

  if (VAR_8 == ((void*)0)) {

   FUNC_3(VAR_9, 64, "0x%llx", VAR_7);
   VAR_8 = VAR_9;
  }
 }

 return VAR_8;
}
