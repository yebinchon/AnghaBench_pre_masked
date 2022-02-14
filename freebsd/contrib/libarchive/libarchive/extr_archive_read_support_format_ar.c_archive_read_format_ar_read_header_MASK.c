
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int archive_format; } ;
struct archive_read {TYPE_1__ archive; TYPE_2__* format; } ;
struct archive_entry {int dummy; } ;
struct ar {int read_global_header; } ;
struct TYPE_4__ {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (struct archive_read*,int,int *) ;
 int FUNC_1 (struct archive_read*,size_t) ;
 int FUNC_2 (struct archive_read*,struct archive_entry*,struct ar*,char const*,size_t*) ;

__attribute__((used)) static int
FUNC_3(struct archive_read *VAR_2,
    struct archive_entry *VAR_3)
{
 struct ar *VAR_4 = (struct ar*)(VAR_2->format->data);
 size_t VAR_5;
 const void *VAR_6;
 int VAR_7;

 if (!VAR_4->read_global_header) {




  FUNC_1(VAR_2, 8);
  VAR_4->read_global_header = 1;

  VAR_2->archive.archive_format = VAR_1;
 }


 if ((VAR_6 = FUNC_0(VAR_2, 60, ((void*)0))) == ((void*)0))

  return (VAR_0);

 VAR_5 = 60;

 VAR_7 = FUNC_2(VAR_2, VAR_3, VAR_4, (const char *)VAR_6, &VAR_5);

 if (VAR_5)
  FUNC_1(VAR_2, VAR_5);

 return VAR_7;
}
