
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smt_entry {int idx; int refcnt; int lock; int state; } ;
struct smt_data {int smt_size; struct smt_entry* smtab; int lock; } ;
struct adapter {struct smt_data* smt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ) ;
 struct smt_data* FUNC_1 (int,int ,int) ;
 int FUNC_2 (int *,char*,int *,int ) ;
 int FUNC_3 (int *,char*) ;

int
FUNC_4(struct adapter *VAR_6, int VAR_7)
{
 int VAR_8, VAR_9;
 struct smt_data *VAR_10;

 VAR_9 = VAR_4;
 VAR_10 = FUNC_1(sizeof(*VAR_10) + VAR_9 * sizeof (struct smt_entry), VAR_2,
     VAR_3 | VAR_7);
 if (!VAR_10)
  return (VAR_0);

 VAR_10->smt_size = VAR_9;
 FUNC_3(&VAR_10->lock, "SMT");

 for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {
  struct smt_entry *VAR_11 = &VAR_10->smtab[VAR_8];

  VAR_11->idx = VAR_8;
  VAR_11->state = VAR_5;
  FUNC_2(&VAR_11->lock, "SMT_E", ((void*)0), VAR_1);
  FUNC_0(&VAR_11->refcnt, 0);
 }

 VAR_6->smt = VAR_10;

 return (0);
}
