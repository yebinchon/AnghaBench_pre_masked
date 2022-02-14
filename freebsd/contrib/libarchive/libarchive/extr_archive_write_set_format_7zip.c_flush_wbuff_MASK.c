
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_write {scalar_t__ format_data; } ;
struct _7zip {int wbuff_remaining; int wbuff; } ;


 int VAR_0 ;
 int FUNC_0 (struct archive_write*,int ,size_t) ;

__attribute__((used)) static int
FUNC_1(struct archive_write *VAR_1)
{
 struct _7zip *VAR_2;
 int VAR_3;
 size_t VAR_4;

 VAR_2 = (struct _7zip *)VAR_1->format_data;
 VAR_4 = sizeof(VAR_2->wbuff) - VAR_2->wbuff_remaining;
 VAR_3 = FUNC_0(VAR_1, VAR_2->wbuff, VAR_4);
 if (VAR_3 != VAR_0)
  return (VAR_3);
 VAR_2->wbuff_remaining = sizeof(VAR_2->wbuff);
 return (VAR_3);
}
