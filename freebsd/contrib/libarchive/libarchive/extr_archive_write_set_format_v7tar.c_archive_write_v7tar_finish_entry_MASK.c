
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v7tar {scalar_t__ entry_padding; scalar_t__ entry_bytes_remaining; } ;
struct archive_write {scalar_t__ format_data; } ;


 int FUNC_0 (struct archive_write*,size_t) ;

__attribute__((used)) static int
FUNC_1(struct archive_write *VAR_0)
{
 struct v7tar *VAR_1;
 int VAR_2;

 VAR_1 = (struct v7tar *)VAR_0->format_data;
 VAR_2 = FUNC_0(VAR_0,
     (size_t)(VAR_1->entry_bytes_remaining + VAR_1->entry_padding));
 VAR_1->entry_bytes_remaining = VAR_1->entry_padding = 0;
 return (VAR_2);
}
