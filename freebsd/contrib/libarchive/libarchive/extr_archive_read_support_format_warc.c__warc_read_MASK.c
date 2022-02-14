
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct warc_s {scalar_t__ cntoff; scalar_t__ cntlen; unsigned int unconsumed; } ;
struct archive_read {TYPE_1__* format; } ;
typedef size_t ssize_t ;
typedef scalar_t__ int64_t ;
struct TYPE_2__ {struct warc_s* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (struct archive_read*,unsigned int,size_t*) ;
 int FUNC_1 (struct archive_read*,int) ;

__attribute__((used)) static int
FUNC_2(struct archive_read *VAR_2, const void **VAR_3, size_t *VAR_4, int64_t *VAR_5)
{
 struct warc_s *VAR_6 = VAR_2->format->data;
 const char *VAR_7;
 ssize_t VAR_8;

 if (VAR_6->cntoff >= VAR_6->cntlen) {
 eof:

  *VAR_3 = ((void*)0);
  *VAR_4 = 0U;
  *VAR_5 = VAR_6->cntoff + 4U ;
  VAR_6->unconsumed = 0U;
  return (VAR_0);
 }

 if (VAR_6->unconsumed) {
  FUNC_1(VAR_2, VAR_6->unconsumed);
  VAR_6->unconsumed = 0U;
 }

 VAR_7 = FUNC_0(VAR_2, 1U, &VAR_8);
 if (VAR_8 < 0) {
  *VAR_4 = 0U;

  return (int)VAR_8;
 } else if (VAR_8 == 0) {
  goto eof;
 } else if ((size_t)VAR_8 > VAR_6->cntlen - VAR_6->cntoff) {

  VAR_8 = VAR_6->cntlen - VAR_6->cntoff;
 }
 *VAR_5 = VAR_6->cntoff;
 *VAR_4 = VAR_8;
 *VAR_3 = VAR_7;

 VAR_6->cntoff += VAR_8;
 VAR_6->unconsumed = (size_t)VAR_8;
 return (VAR_1);
}
