
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_entry {int sparse_head; int sparse_p; } ;


 int FUNC_0 (struct archive_entry*) ;

int
FUNC_1(struct archive_entry * VAR_0)
{
 VAR_0->sparse_p = VAR_0->sparse_head;

 return FUNC_0(VAR_0);
}
