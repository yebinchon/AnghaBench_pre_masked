
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct warc_s {unsigned int cntlen; unsigned int cntoff; } ;
struct archive_read {TYPE_1__* format; } ;
struct TYPE_2__ {struct warc_s* data; } ;


 int VAR_0 ;
 int FUNC_0 (struct archive_read*,unsigned int) ;

__attribute__((used)) static int
FUNC_1(struct archive_read *VAR_1)
{
 struct warc_s *VAR_2 = VAR_1->format->data;

 FUNC_0(VAR_1, VAR_2->cntlen + 4U );
 VAR_2->cntlen = 0U;
 VAR_2->cntoff = 0U;
 return (VAR_0);
}
