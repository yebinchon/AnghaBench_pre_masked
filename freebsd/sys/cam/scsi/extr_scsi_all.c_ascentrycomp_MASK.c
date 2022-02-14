
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct asc_table_entry {int asc; int ascq; int action; } ;
struct asc_key {int asc; int ascq; } ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(const void *VAR_1, const void *VAR_2)
{
 int VAR_3;
 int VAR_4;
 const struct asc_table_entry *VAR_5;

 VAR_3 = ((const struct asc_key *)VAR_1)->asc;
 VAR_4 = ((const struct asc_key *)VAR_1)->ascq;
 VAR_5 = (const struct asc_table_entry *)VAR_2;

 if (VAR_3 >= VAR_5->asc) {

  if (VAR_3 > VAR_5->asc)
   return (1);

  if (VAR_4 <= VAR_5->ascq) {

   if (VAR_4 == VAR_5->ascq
     || ((VAR_5->action & VAR_0) != 0
        && VAR_4 >= (VAR_5 - 1)->ascq))
    return (0);
   return (-1);
  }
  return (1);
 }
 return (-1);
}
