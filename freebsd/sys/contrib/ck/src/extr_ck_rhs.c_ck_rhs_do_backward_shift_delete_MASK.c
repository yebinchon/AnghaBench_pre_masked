
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ck_rhs_map {unsigned long probe_maximum; int * generation; } ;
struct ck_rhs_entry_desc {scalar_t__ wanted; unsigned int probes; unsigned long probe_bound; } ;
struct ck_rhs {struct ck_rhs_map* map; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (unsigned long*,int) ;
 unsigned long VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 struct ck_rhs_entry_desc* FUNC_4 (struct ck_rhs_map*,unsigned long) ;
 int FUNC_5 (struct ck_rhs_map*,unsigned long) ;
 int FUNC_6 (struct ck_rhs_map*,long) ;
 scalar_t__ FUNC_7 (struct ck_rhs_map*,unsigned long,unsigned int) ;
 unsigned long FUNC_8 (struct ck_rhs_map*,unsigned long,unsigned int) ;
 unsigned long* FUNC_9 (struct ck_rhs_map*,unsigned long) ;
 unsigned long FUNC_10 (struct ck_rhs*,unsigned long,long) ;

__attribute__((used)) static void
FUNC_11(struct ck_rhs *VAR_4, long VAR_5)
{
 struct ck_rhs_map *VAR_6 = VAR_4->map;
 struct ck_rhs_entry_desc *VAR_7, *VAR_8 = ((void*)0);
 unsigned long VAR_9;

 VAR_7 = FUNC_4(VAR_6, VAR_5);
 VAR_9 = FUNC_10(VAR_4, VAR_5, -1);
 while (VAR_7->wanted > 0) {
  unsigned long VAR_10 = 0, VAR_11;
  unsigned long VAR_12 = 1;
  unsigned int VAR_13 = 0;
  unsigned int VAR_14;


  while (VAR_12 < VAR_6->probe_maximum) {
   VAR_13 = VAR_12;
   VAR_10 = FUNC_8(VAR_6, VAR_5, VAR_13);
   while (VAR_13 < VAR_6->probe_maximum) {
    VAR_8 = FUNC_4(VAR_6, VAR_10);
    if (VAR_8->probes == VAR_13 + 1)
     break;
    VAR_13++;
    VAR_10 = FUNC_8(VAR_6, VAR_10,
        VAR_13);
   }
   if (VAR_13 < VAR_6->probe_maximum)
    break;
   VAR_12++;
  }
  if (!(VAR_12 < VAR_6->probe_maximum)) {
   VAR_7->wanted = 0;
   break;
  }
  VAR_7->probes = VAR_12;
  VAR_9 = FUNC_10(VAR_4, VAR_10, VAR_5);
  FUNC_3(FUNC_6(VAR_6, VAR_5),
      FUNC_5(VAR_6, VAR_10));
  FUNC_2(&VAR_6->generation[VAR_9 & VAR_1]);
  FUNC_1();
  if (VAR_12 < VAR_3) {
   struct ck_rhs_entry_desc *VAR_15 = FUNC_4(VAR_6, VAR_9);
   if (VAR_15->wanted == 1)
    FUNC_0(&VAR_15->probe_bound,
        VAR_12);
   else if (VAR_15->probe_bound == VAR_3 ||
       VAR_15->probe_bound == VAR_8->probes) {
    VAR_13++;
    if (VAR_15->probe_bound == VAR_3)
     VAR_14 = VAR_6->probe_maximum;
    else {
     VAR_14 = VAR_15->probe_bound;
     VAR_14--;
    }
    VAR_11 = FUNC_8(VAR_6, VAR_10,
        VAR_13);
    while (VAR_13 < VAR_14) {
     if (VAR_9 == (unsigned long)FUNC_7(VAR_6, VAR_11, VAR_13))
      break;
     VAR_13++;
     VAR_11 = FUNC_8(VAR_6, VAR_11, VAR_13);
    }
    if (VAR_13 == VAR_14)
     FUNC_0(&VAR_15->probe_bound,
         VAR_12);
   }
  }
  if (VAR_7->wanted < VAR_2)
   VAR_7->wanted--;
  VAR_5 = VAR_10;
  VAR_7 = VAR_8;
 }
 FUNC_3(FUNC_6(VAR_6, VAR_5), VAR_0);
 if ((VAR_7->probes - 1) < VAR_3)
  FUNC_0(FUNC_9(VAR_6, VAR_9),
      VAR_7->probes - 1);
 VAR_7->probes = 0;
}
