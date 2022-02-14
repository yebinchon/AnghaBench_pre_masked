
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iso9660 {unsigned char* wbuff; int wbuff_remaining; } ;
struct archive_write {scalar_t__ format_data; } ;



__attribute__((used)) static inline unsigned char *
FUNC_0(struct archive_write *VAR_0)
{
 struct iso9660 *VAR_1 = (struct iso9660 *)VAR_0->format_data;

 return (&(VAR_1->wbuff[sizeof(VAR_1->wbuff)
  - VAR_1->wbuff_remaining]));
}
