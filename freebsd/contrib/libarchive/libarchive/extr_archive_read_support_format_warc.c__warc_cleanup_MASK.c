
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int len; struct warc_s* str; } ;
struct warc_s {int sver; TYPE_1__ pool; } ;
struct archive_read {TYPE_2__* format; } ;
struct TYPE_4__ {struct warc_s* data; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct warc_s*) ;

__attribute__((used)) static int
FUNC_2(struct archive_read *VAR_1)
{
 struct warc_s *VAR_2 = VAR_1->format->data;

 if (VAR_2->pool.len > 0U) {
  FUNC_1(VAR_2->pool.str);
 }
 FUNC_0(&VAR_2->sver);
 FUNC_1(VAR_2);
 VAR_1->format->data = ((void*)0);
 return (VAR_0);
}
