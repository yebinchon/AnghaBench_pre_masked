
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct symbol {int dummy; } ;
struct sym_hist {int dummy; } ;
struct annotation {TYPE_1__* src; } ;
struct TYPE_4__ {int nr_events; } ;
struct TYPE_3__ {size_t sizeof_sym_hist; size_t nr_histograms; int source; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 struct annotation* FUNC_1 (struct symbol*) ;
 size_t FUNC_2 (struct symbol*) ;
 TYPE_2__ VAR_1 ;
 TYPE_1__* FUNC_3 (int) ;

int FUNC_4(struct symbol *VAR_2)
{
 struct annotation *VAR_3 = FUNC_1(VAR_2);
 const size_t VAR_4 = FUNC_2(VAR_2);
 size_t VAR_5;


 if (VAR_4 > (VAR_0 - sizeof(struct sym_hist)) / sizeof(u64))
  return -1;

 VAR_5 = (sizeof(struct sym_hist) + VAR_4 * sizeof(u64));


 if (VAR_5 > (VAR_0 - sizeof(*VAR_3->src))
    / VAR_1.nr_events)
  return -1;

 VAR_3->src = FUNC_3(sizeof(*VAR_3->src) + VAR_1.nr_events * VAR_5);
 if (VAR_3->src == ((void*)0))
  return -1;
 VAR_3->src->sizeof_sym_hist = VAR_5;
 VAR_3->src->nr_histograms = VAR_1.nr_events;
 FUNC_0(&VAR_3->src->source);
 return 0;
}
