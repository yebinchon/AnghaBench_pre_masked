
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tar {struct sparse_block* sparse_last; struct sparse_block* sparse_list; } ;
struct sparse_block {scalar_t__ remaining; scalar_t__ offset; struct sparse_block* next; } ;
struct archive_read {int archive; } ;
typedef scalar_t__ int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,int ,char*) ;
 scalar_t__ FUNC_1 (int,int) ;

__attribute__((used)) static int
FUNC_2(struct archive_read *VAR_5, struct tar *VAR_6,
    int64_t VAR_7, int64_t VAR_8)
{
 struct sparse_block *VAR_9;

 VAR_9 = (struct sparse_block *)FUNC_1(1, sizeof(*VAR_9));
 if (VAR_9 == ((void*)0)) {
  FUNC_0(&VAR_5->archive, VAR_3, "Out of memory");
  return (VAR_1);
 }
 if (VAR_6->sparse_last != ((void*)0))
  VAR_6->sparse_last->next = VAR_9;
 else
  VAR_6->sparse_list = VAR_9;
 VAR_6->sparse_last = VAR_9;
 if (VAR_8 < 0 || VAR_7 < 0 || VAR_7 > VAR_4 - VAR_8) {
  FUNC_0(&VAR_5->archive, VAR_0, "Malformed sparse map data");
  return (VAR_1);
 }
 VAR_9->offset = VAR_7;
 VAR_9->remaining = VAR_8;
 return (VAR_2);
}
