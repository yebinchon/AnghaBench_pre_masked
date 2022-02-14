
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hash_entry {int dummy; } ;
struct hash_control {unsigned long size; scalar_t__ deletions; scalar_t__ replacements; scalar_t__ insertions; scalar_t__ string_compares; scalar_t__ hash_compares; scalar_t__ lookups; int table; int memory; } ;


 int VAR_0 ;
 unsigned long FUNC_0 () ;
 int FUNC_1 (int ,int ,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,int ) ;
 struct hash_control* FUNC_4 (int) ;

struct hash_control *
FUNC_5 (void)
{
  unsigned long VAR_1;
  unsigned long VAR_2;
  struct hash_control *VAR_3;

  VAR_1 = FUNC_0 ();

  VAR_3 = FUNC_4 (sizeof *VAR_3);
  FUNC_3 (&VAR_3->memory, VAR_0);
  VAR_2 = VAR_1 * sizeof (struct hash_entry *);
  VAR_3->table = FUNC_2 (&VAR_3->memory, VAR_2);
  FUNC_1 (VAR_3->table, 0, VAR_2);
  VAR_3->size = VAR_1;
  return VAR_3;
}
