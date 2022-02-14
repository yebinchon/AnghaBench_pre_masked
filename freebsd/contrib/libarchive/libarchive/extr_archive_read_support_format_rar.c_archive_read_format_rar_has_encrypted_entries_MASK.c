
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rar {int has_encrypted_entries; } ;
struct archive_read {TYPE_1__* format; } ;
struct TYPE_2__ {scalar_t__ data; } ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct archive_read *VAR_1)
{
 if (VAR_1 && VAR_1->format) {
  struct rar * VAR_2 = (struct rar *)VAR_1->format->data;
  if (VAR_2) {
   return VAR_2->has_encrypted_entries;
  }
 }
 return VAR_0;
}
