
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int length; int s; } ;
struct shar {int outpos; char const* outbuff; TYPE_1__ work; int has_data; } ;
struct archive_write {scalar_t__ format_data; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct archive_write*,int ,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char const*,char const*,size_t) ;
 int FUNC_3 (struct archive_write*,struct shar*,char const*,int) ;

__attribute__((used)) static ssize_t
FUNC_4(struct archive_write *VAR_2, const void *VAR_3,
    size_t VAR_4)
{
 struct shar *VAR_5;
 const char *VAR_6;
 size_t VAR_7;
 int VAR_8;

 VAR_5 = (struct shar *)VAR_2->format_data;
 if (!VAR_5->has_data)
  return (VAR_1);
 VAR_6 = (const char *)VAR_3;

 if (VAR_5->outpos != 0) {
  VAR_7 = 45 - VAR_5->outpos;
  if (VAR_7 > VAR_4)
   VAR_7 = VAR_4;
  FUNC_2(VAR_5->outbuff + VAR_5->outpos, VAR_6, VAR_7);
  if (VAR_5->outpos + VAR_7 < 45) {
   VAR_5->outpos += VAR_7;
   return VAR_4;
  }
  FUNC_3(VAR_2, VAR_5, VAR_5->outbuff, 45);
  VAR_6 += VAR_7;
  VAR_7 = VAR_4 - VAR_7;
 } else {
  VAR_7 = VAR_4;
 }

 while (VAR_7 >= 45) {
  FUNC_3(VAR_2, VAR_5, VAR_6, 45);
  VAR_6 += 45;
  VAR_7 -= 45;

  if (VAR_5->work.length < 65536)
   continue;
  VAR_8 = FUNC_0(VAR_2, VAR_5->work.s,
      VAR_5->work.length);
  if (VAR_8 != VAR_1)
   return (VAR_0);
  FUNC_1(&VAR_5->work);
 }
 if (VAR_7 != 0) {
  FUNC_2(VAR_5->outbuff, VAR_6, VAR_7);
  VAR_5->outpos = VAR_7;
 }
 return (VAR_4);
}
