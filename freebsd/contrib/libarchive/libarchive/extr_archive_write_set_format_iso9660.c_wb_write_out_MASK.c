
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iso9660 {int wbuff_remaining; scalar_t__ wbuff_type; scalar_t__ wbuff_offset; scalar_t__ wbuff_written; scalar_t__ wbuff; } ;
struct archive_write {scalar_t__ format_data; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct archive_write*,scalar_t__,size_t) ;
 int FUNC_1 (scalar_t__,scalar_t__,size_t) ;
 int FUNC_2 (struct archive_write*,scalar_t__,size_t) ;

__attribute__((used)) static int
FUNC_3(struct archive_write *VAR_2)
{
 struct iso9660 *VAR_3 = (struct iso9660 *)VAR_2->format_data;
 size_t VAR_4, VAR_5;
 int VAR_6;

 VAR_4 = sizeof(VAR_3->wbuff) - VAR_3->wbuff_remaining;
 VAR_5 = VAR_4 % VAR_0;
 if (VAR_3->wbuff_type == VAR_1)
  VAR_6 = FUNC_0(VAR_2, VAR_3->wbuff, VAR_4 - VAR_5);
 else
  VAR_6 = FUNC_2(VAR_2, VAR_3->wbuff, VAR_4 - VAR_5);

 VAR_3->wbuff_offset += VAR_4 - VAR_5;
 if (VAR_3->wbuff_offset > VAR_3->wbuff_written)
  VAR_3->wbuff_written = VAR_3->wbuff_offset;
 VAR_3->wbuff_remaining = sizeof(VAR_3->wbuff);
 if (VAR_5) {
  VAR_3->wbuff_remaining -= VAR_5;
  FUNC_1(VAR_3->wbuff, VAR_3->wbuff + VAR_4 - VAR_5, VAR_5);
 }
 return (VAR_6);
}
