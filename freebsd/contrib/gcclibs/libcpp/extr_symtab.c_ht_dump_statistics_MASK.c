
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ hashnode ;
struct TYPE_3__ {int nslots; size_t nelements; scalar_t__ searches; scalar_t__ collisions; int stack; scalar_t__* entries; } ;
typedef TYPE_1__ hash_table ;


 size_t FUNC_0 (scalar_t__) ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (size_t) ;
 double FUNC_3 (double) ;
 int FUNC_4 (int ,char*,unsigned long,...) ;
 size_t FUNC_5 (int *) ;
 int VAR_0 ;

void
FUNC_6 (hash_table *VAR_1)
{
  size_t VAR_2, VAR_3, VAR_4, VAR_5;
  size_t VAR_6, VAR_7;
  double VAR_8, VAR_9, VAR_10, VAR_11;
  hashnode *VAR_12, *VAR_13;
  VAR_6 = VAR_7 = VAR_8 = VAR_3 = 0;
  VAR_12 = VAR_1->entries;
  VAR_13 = VAR_12 + VAR_1->nslots;
  do
    if (*VAR_12)
      {
 size_t VAR_14 = FUNC_0 (*VAR_12);

 VAR_6 += VAR_14;
 VAR_8 += (double) VAR_14 * VAR_14;
 if (VAR_14 > VAR_7)
   VAR_7 = VAR_14;
 VAR_3++;
      }
  while (++VAR_12 < VAR_13);

  VAR_2 = VAR_1->nelements;
  VAR_4 = FUNC_5 (&VAR_1->stack) - VAR_6;
  VAR_5 = VAR_1->nslots * sizeof (hashnode);

  FUNC_4 (VAR_0, "\nString pool\nentries\t\t%lu\n",
    (unsigned long) VAR_2);
  FUNC_4 (VAR_0, "identifiers\t%lu (%.2f%%)\n",
    (unsigned long) VAR_3, VAR_3 * 100.0 / VAR_2);
  FUNC_4 (VAR_0, "slots\t\t%lu\n",
    (unsigned long) VAR_1->nslots);
  FUNC_4 (VAR_0, "bytes\t\t%lu%c (%lu%c overhead)\n",
    ((unsigned long) ((VAR_6) < 1024*10 ? (VAR_6) : ((VAR_6) < 1024*1024*10 ? (VAR_6) / 1024 : (VAR_6) / (1024*1024)))), ((VAR_6) < 1024*10 ? ' ' : ((VAR_6) < 1024*1024*10 ? 'k' : 'M')),
    ((unsigned long) ((VAR_4) < 1024*10 ? (VAR_4) : ((VAR_4) < 1024*1024*10 ? (VAR_4) / 1024 : (VAR_4) / (1024*1024)))), ((VAR_4) < 1024*10 ? ' ' : ((VAR_4) < 1024*1024*10 ? 'k' : 'M')));
  FUNC_4 (VAR_0, "table size\t%lu%c\n",
    ((unsigned long) ((VAR_5) < 1024*10 ? (VAR_5) : ((VAR_5) < 1024*1024*10 ? (VAR_5) / 1024 : (VAR_5) / (1024*1024)))), ((VAR_5) < 1024*10 ? ' ' : ((VAR_5) < 1024*1024*10 ? 'k' : 'M')));

  VAR_9 = (double)VAR_6 / (double)VAR_2;
  VAR_11 = VAR_9 * VAR_9;
  VAR_10 = (double) VAR_8 / (double) VAR_2;

  FUNC_4 (VAR_0, "coll/search\t%.4lu\n",
    (double) VAR_1->collisions / (double) VAR_1->searches);
  FUNC_4 (VAR_0, "ins/search\t%.4lu\n",
    (double) VAR_2 / (double) VAR_1->searches);
  FUNC_4 (VAR_0, "avg. entry\t%.2lu bytes (+/- %.2f)\n",
    VAR_9, FUNC_3 (VAR_10 - VAR_11));
  FUNC_4 (VAR_0, "longest entry\t%lu\n",
    (unsigned long) VAR_7);


}
