
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct archive_read {TYPE_1__* format; } ;
struct ar {scalar_t__ entry_padding; scalar_t__ entry_bytes_unconsumed; scalar_t__ entry_bytes_remaining; } ;
typedef scalar_t__ int64_t ;
struct TYPE_2__ {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct archive_read*,scalar_t__) ;

__attribute__((used)) static int
FUNC_1(struct archive_read *VAR_2)
{
 int64_t VAR_3;
 struct ar* VAR_4;

 VAR_4 = (struct ar *)(VAR_2->format->data);

 VAR_3 = FUNC_0(VAR_2,
     VAR_4->entry_bytes_remaining + VAR_4->entry_padding
     + VAR_4->entry_bytes_unconsumed);
 if (VAR_3 < 0)
  return (VAR_0);

 VAR_4->entry_bytes_remaining = 0;
 VAR_4->entry_bytes_unconsumed = 0;
 VAR_4->entry_padding = 0;

 return (VAR_1);
}
