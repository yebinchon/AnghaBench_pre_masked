
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct rar* window; } ;
struct rar {int ppmd7_context; TYPE_1__ lzss; struct rar* unp_buffer; struct rar* dbo; struct rar* filename_save; struct rar* filename; } ;
struct archive_read {TYPE_2__* format; } ;
struct TYPE_6__ {int (* Ppmd7_Free ) (int *) ;} ;
struct TYPE_5__ {int * data; } ;


 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 int FUNC_0 (struct rar*) ;
 int FUNC_1 (struct archive_read*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(struct archive_read *VAR_2)
{
  struct rar *VAR_3;

  VAR_3 = (struct rar *)(VAR_2->format->data);
  FUNC_1(VAR_2);
  FUNC_0(VAR_3->filename);
  FUNC_0(VAR_3->filename_save);
  FUNC_0(VAR_3->dbo);
  FUNC_0(VAR_3->unp_buffer);
  FUNC_0(VAR_3->lzss.window);
  VAR_1.Ppmd7_Free(&VAR_3->ppmd7_context);
  FUNC_0(VAR_3);
  (VAR_2->format->data) = ((void*)0);
  return (VAR_0);
}
