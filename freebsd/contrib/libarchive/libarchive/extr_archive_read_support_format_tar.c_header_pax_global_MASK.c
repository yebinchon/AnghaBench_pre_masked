
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tar {int pax_global; } ;
struct archive_read {int dummy; } ;
struct archive_entry {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct archive_read*,struct tar*,int *,void const*,size_t*) ;
 int FUNC_1 (struct archive_read*,struct tar*,struct archive_entry*,size_t*) ;

__attribute__((used)) static int
FUNC_2(struct archive_read *VAR_1, struct tar *VAR_2,
    struct archive_entry *VAR_3, const void *VAR_4, size_t *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_0(VAR_1, VAR_2, &(VAR_2->pax_global), VAR_4, VAR_5);
 if (VAR_6 != VAR_0)
  return (VAR_6);
 VAR_6 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_5);
 return (VAR_6);
}
