
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct archive_read {TYPE_1__* format; } ;
struct _7zip {struct _7zip* tmp_stream_buff; struct _7zip** sub_stream_buff; struct _7zip* uncompressed_buffer; struct _7zip* entry_names; struct _7zip* entries; int si; } ;
struct TYPE_2__ {int * data; } ;


 int VAR_0 ;
 int FUNC_0 (struct _7zip*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct archive_read*,struct _7zip*) ;

__attribute__((used)) static int
FUNC_3(struct archive_read *VAR_1)
{
 struct _7zip *VAR_2;

 VAR_2 = (struct _7zip *)(VAR_1->format->data);
 FUNC_1(&(VAR_2->si));
 FUNC_0(VAR_2->entries);
 FUNC_0(VAR_2->entry_names);
 FUNC_2(VAR_1, VAR_2);
 FUNC_0(VAR_2->uncompressed_buffer);
 FUNC_0(VAR_2->sub_stream_buff[0]);
 FUNC_0(VAR_2->sub_stream_buff[1]);
 FUNC_0(VAR_2->sub_stream_buff[2]);
 FUNC_0(VAR_2->tmp_stream_buff);
 FUNC_0(VAR_2);
 (VAR_1->format->data) = ((void*)0);
 return (VAR_0);
}
