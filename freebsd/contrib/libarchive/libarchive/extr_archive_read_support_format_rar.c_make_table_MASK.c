
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct huffman_table_entry {int dummy; } ;
struct huffman_code {int maxlength; int minlength; int tablesize; struct huffman_table_entry* table; } ;
struct archive_read {int dummy; } ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (struct archive_read*,struct huffman_code*,int ,struct huffman_table_entry*,int ,size_t) ;

__attribute__((used)) static int
FUNC_2(struct archive_read *VAR_0, struct huffman_code *VAR_1)
{
  if (VAR_1->maxlength < VAR_1->minlength || VAR_1->maxlength > 10)
    VAR_1->tablesize = 10;
  else
    VAR_1->tablesize = VAR_1->maxlength;

  VAR_1->table =
    (struct huffman_table_entry *)FUNC_0(1, sizeof(*VAR_1->table)
    * ((size_t)1 << VAR_1->tablesize));

  return FUNC_1(VAR_0, VAR_1, 0, VAR_1->table, 0, VAR_1->tablesize);
}
