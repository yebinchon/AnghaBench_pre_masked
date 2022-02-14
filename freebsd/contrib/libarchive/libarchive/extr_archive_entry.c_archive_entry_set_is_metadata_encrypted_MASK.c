
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_entry {int encryption; } ;


 int VAR_0 ;

void
FUNC_0(struct archive_entry *VAR_1, char VAR_2)
{
 if (VAR_2) {
  VAR_1->encryption |= VAR_0;
 } else {
  VAR_1->encryption &= ~VAR_0;
 }
}
