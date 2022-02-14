
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct termp {int dummy; } ;
struct tablist {size_t n; size_t s; size_t* t; } ;
struct roffsu {int dummy; } ;
struct TYPE_2__ {scalar_t__ d; struct tablist a; struct tablist p; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (char const*,struct roffsu*,int ) ;
 size_t* FUNC_1 (size_t*,size_t,int) ;
 TYPE_1__ VAR_2 ;
 void* FUNC_2 (struct termp const*,struct roffsu*) ;

void
FUNC_3(const struct termp *VAR_3, const char *VAR_4)
{
 static int VAR_5;

 struct roffsu VAR_6;
 struct tablist *VAR_7;
 size_t VAR_8;
 int VAR_9;



 if (VAR_4 == ((void*)0)) {
  VAR_2.a.n = VAR_2.p.n = 0;
  VAR_5 = 0;
  if (VAR_2.d == 0) {
   FUNC_0(".8i", &VAR_6, VAR_1);
   VAR_2.d = FUNC_2(VAR_3, &VAR_6);
  }
  return;
 }
 if (VAR_4[0] == 'T' && VAR_4[1] == '\0') {
  VAR_5 = 1;
  return;
 }



 if (*VAR_4 == '+') {
  VAR_9 = 1;
  VAR_4++;
 } else
  VAR_9 = 0;
 if (FUNC_0(VAR_4, &VAR_6, VAR_0) == ((void*)0))
  return;



 VAR_7 = VAR_5 ? &VAR_2.p : &VAR_2.a;
 if (VAR_7->n >= VAR_7->s) {
  VAR_7->s += 8;
  VAR_7->t = FUNC_1(VAR_7->t, VAR_7->s, sizeof(*VAR_7->t));
 }



 VAR_8 = FUNC_2(VAR_3, &VAR_6);
 VAR_7->t[VAR_7->n] = VAR_8;
 if (VAR_9 && VAR_7->n)
  VAR_7->t[VAR_7->n] += VAR_7->t[VAR_7->n - 1];
 VAR_7->n++;
}
