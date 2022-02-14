
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int state; } ;
struct archive_read {TYPE_2__ archive; TYPE_1__* format; } ;
struct archive {int dummy; } ;
typedef int int64_t ;
struct TYPE_3__ {int (* read_data_skip ) (struct archive_read*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct archive*,int ,int ,char*) ;
 int FUNC_1 (TYPE_2__*,void const**,size_t*,int *) ;
 int FUNC_2 (struct archive_read*) ;

int
FUNC_3(struct archive *VAR_5)
{
 struct archive_read *VAR_6 = (struct archive_read *)VAR_5;
 int VAR_7;
 const void *VAR_8;
 size_t VAR_9;
 int64_t VAR_10;

 FUNC_0(VAR_5, VAR_2, VAR_3,
     "archive_read_data_skip");

 if (VAR_6->format->read_data_skip != ((void*)0))
  VAR_7 = (VAR_6->format->read_data_skip)(VAR_6);
 else {
  while ((VAR_7 = FUNC_1(&VAR_6->archive,
       &VAR_8, &VAR_9, &VAR_10))
      == VAR_1)
   ;
 }

 if (VAR_7 == VAR_0)
  VAR_7 = VAR_1;

 VAR_6->archive.state = VAR_4;
 return (VAR_7);
}
