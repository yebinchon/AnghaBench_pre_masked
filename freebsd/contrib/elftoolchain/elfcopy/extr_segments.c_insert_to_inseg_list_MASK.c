
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct segment {int nsec; struct section** v_sec; } ;
struct section {scalar_t__ off; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 struct section** FUNC_1 (struct section**,int) ;

__attribute__((used)) static void
FUNC_2(struct segment *VAR_1, struct section *VAR_2)
{
 struct section *VAR_3;
 int VAR_4;

 VAR_1->nsec++;
 VAR_1->v_sec = FUNC_1(VAR_1->v_sec, VAR_1->nsec * sizeof(*VAR_1->v_sec));
 if (VAR_1->v_sec == ((void*)0))
  FUNC_0(VAR_0, "realloc failed");





 for (VAR_4 = VAR_1->nsec - 1; VAR_4 > 0; VAR_4--) {
  VAR_3 = VAR_1->v_sec[VAR_4 - 1];
  if (VAR_2->off >= VAR_3->off) {
   VAR_1->v_sec[VAR_4] = VAR_2;
   break;
  } else
   VAR_1->v_sec[VAR_4] = VAR_3;
 }
 if (VAR_4 == 0)
  VAR_1->v_sec[0] = VAR_2;
}
